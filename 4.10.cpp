/*************************************************************************
	> File Name: 4.10.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月13日 星期日 22时05分13秒
    > Function: 突破权限
 ************************************************************************/

#include<iostream>
using namespace std;


class A{
    public:
        A(int a, int b, int c);
    private:
        int m_a;
        int m_b;
        int m_c;
};

A::A(int a, int b, int c): m_a(a), m_b(b), m_c(c){}


int main(){
    A obj(10, 20, 30);
    int a1 = *(int*)&obj;
    int b = *(int*)((long)&obj + sizeof(int));// linux 64位机, It takes a 'long' translate into 'int'.


    A *p = new A(560, 200, 20);
    int a2 = *(int*)p;
    int c = *(int*)( (long)p + sizeof(int)*2); //linux 64位机, It takes a 'long' translate into 'int'.


    cout<<"a1="<<a1<<", a2="<<a2<<" , b="<<b<<", c="<<c<<endl;

    return 0;
}
