/*************************************************************************
	> File Name: Base.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月13日 星期日 18时04分38秒
 ************************************************************************/

#include<iostream>
using namespace std;


class Base{
    public:
    void func();
    void func(int);
};
void Base::func(){ cout << "Base::func()"<<endl; }
void Base::func(int a){ cout <<"Base::func(int)"<<endl; }


class Derived: public Base{
    public:
    void func(char *);
    void func(bool);
};


void Derived::func(char *str){ cout << "Derived::func(char *)" << endl; }
void Derived::func(bool is){ cout << "Derived::func(bool)"<<endl; }


int main(){
    Derived d;


    d.func("leecheer fuck IT world !");
    d.func(true);
   // d.func();
   // d.func(10);

    d.Base::func();
    d.Base::func(100);


    return 0;
}
