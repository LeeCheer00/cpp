/*************************************************************************
	> File Name: 4.8.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月13日 星期日 20时13分56秒
 ************************************************************************/

#include<iostream>
using namespace std;


/* 基础类
 * /
 */


class BaseA{
    public:
        BaseA(int a, int b);
        ~BaseA();
        void show();
    protected:
        int m_a;
        int m_b;
};

BaseA::BaseA(int a, int b): m_a(a), m_b(b){
    cout<<"BaseA constructotor"<<endl;
}

BaseA::~BaseA(){
    cout<<"BaseA destructor"<<endl;
}

void BaseA::show(){
    cout << "m_a = " << m_a<<endl;
    cout << "m_b = " << m_b<<endl;
}


class BaseB{
    public:
        BaseB(int c, int d);
        ~BaseB();
        void show();
    protected:
        int m_c;
        int m_d;
};

BaseB::BaseB(int c , int d): m_c(c), m_d(d){
    cout<< "BaseB constructor"<<endl;
}


BaseB::~BaseB(){
    cout<< "BaseB destructor"<<endl;
}


void BaseB::show(){
    cout << "m_c = "<< m_c << endl;
    cout << "m_d = "<< m_d << endl;
}


class Derived: public BaseA, public BaseB{
public:
    Derived(int a, int b, int c, int d, int e);
    ~Derived();
public:
    void display();
private:
    int m_e;
};

Derived::Derived(int a, int b, int c, int d ,int e): BaseA(a, b), BaseB(c, d), m_e(e){
    cout << "Derived constuctor "<<endl;
}

Derived::~Derived(){
    cout <<"Derived destructor"<<endl;
}

void Derived::display(){
    BaseA::show();
    BaseB::show();
    cout<<"m_e = "<<m_e <<endl;
}


int main(){
    Derived obj(1, 2, 3, 4, 5);
    obj.display();
    return 0;
}
