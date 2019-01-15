/*************************************************************************
	> File Name: 4.7.cpp
	> Author: 
	> Mail: 
    > Function: 析构函数执行顺序
	> Created Time: 2019年01月13日 星期日 20时05分03秒
 ************************************************************************/

#include<iostream>
using namespace std;



class A{
    public:
        A(){cout<<"A Constuctor"<<endl;}
        ~A(){cout<<"A destructor"<<endl;}
};
class B: public A{
    public:
        B(){cout<<"B constuctor"<<endl;}
        ~B(){cout<<"B destructor"<<endl;} 
};
class C: public B{
    public:
        C(){cout<<"C constructor"<<endl;}
        ~C(){cout<<"C destructor"<<endl;}
};


int main(){
    C c;
    return 0;
}
