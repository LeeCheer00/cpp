/*************************************************************************
	> File Name: 4.11.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月13日 星期日 22时42分46秒
    > Function: 虚继承
 ************************************************************************/

#include<iostream>
using namespace std;


class A{
    protected:
         int m_a;
};

//直接基类B
class B: virtual public A{
    protected:
        int m_b;
};

//直接基类C 
class C:virtual public A{
    protected:
        int m_c;
};

//派生类D 
class D: public B, public C{
    public:
        void seta(int a){m_a = a;}
        void setb(int b){m_b = b;}
        void setc(int c){m_c = c;}
        void setd(int d){m_d = d;}
    private:
        int m_d;
};
//虚基类的构造函数比其他构造函数的优先级高

int main(){
    D d;
    return 0;
}
