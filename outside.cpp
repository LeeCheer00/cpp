/*************************************************************************
	> File Name: outside.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月08日 星期二 13时29分20秒
 ************************************************************************/

#include<iostream>
using namespace std;


class A{
    public:
        typedef char* PCHAR;
    public:
        void show(PCHAR str);
    private:
        int n;

};



void A::show(PCHAR str){
    cout << str << endl;
    n = 100;
}



int main(){
    A obj;
    obj.show("leecheer.c.biancheng.net");

    return 0;
}
