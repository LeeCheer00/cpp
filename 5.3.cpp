/*************************************************************************
	> File Name: 5.3.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月14日 星期一 13时24分43秒
 ************************************************************************/

#include<iostream>
using namespace std;


/* 基类
 */

class Base{
    public:
        Base();
        virtual ~Base();
    protected:
        char *str;
};

Base::Base(){
    str = new char[100]; 
    cout<<"Base constructor"<<endl;
}

Base::~Base(){
    delete[] str;
    cout<<"Base destructor"<<endl;
}


/* 派生类
 */

class Derived: public Base{
    public:
        Derived();
        ~Derived();
    private:
        char *name;

};
Derived::Derived(){
    name = new char[100];
    cout<<"Derived constructor"<<endl;
}


Derived::~Derived(){
    delete[] name;
    cout<<"Derived destructor"<<endl;
}


int main(){
    Base *pb = new Derived();
    delete pb;

    cout <<"-------------------------------------"<<endl;


    Derived *pd = new Derived();
    delete pd;


    return 0;
}
