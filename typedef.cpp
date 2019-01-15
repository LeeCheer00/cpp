/*************************************************************************
	> File Name: typedef.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月08日 星期二 13时01分45秒
 ************************************************************************/

#include<iostream>
using namespace std;


class A{
    public:
        typedef int INT;
        static void show();
        void work();

};


void A::show(){ cout<<"show()"<<endl; }
void A::work(){ cout<<"work()"<<endl; }


int main(){
    A a;
    a.work();
    a.show();
    A::show();
    A::INT n = 10;

    return 0;
}
