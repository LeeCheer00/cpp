/*************************************************************************
	> File Name: 4.14.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月13日 星期日 23时34分11秒
 ************************************************************************/

#include<iostream>
using namespace std;


//基类
class A{
    public:
        A(int a);
    public:
        void display();
    public:
        int m_a;
};


A::A(int a): m_a(a){}
void A::display(){
    cout<<"Class A: m_a ="<<m_a<<endl;
}


//派生类 
class B: public A{
    public:
        B(int a, int b);
    public:
        void display();
    public:
        int m_b;
};
B::B(int a, int b): A(a), m_b(b){}
void B::display(){
    cout <<"Class B: m_a="<<m_a<<", m_b"<<m_b<<endl;
}


int main(){
    A a(10);
    B b(66, 99);

    //赋值前
    a.display();
    b.display();
    cout<<"------------"<<endl;

    //赋值后
    a = b;
    a.display();
    b.display();


    return 0;
}
