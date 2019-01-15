/*************************************************************************
	> File Name: anotherload.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月03日 星期四 19时18分31秒
 ************************************************************************/

#include<iostream>
using namespace std;

//1号函数
void func(char ch){
    cout<<"#1"<<endl;
}


//2号函数
void func(int n){
    cout<<"#2"<<endl;
}

//3号函数
void func(long m){
    cout<<"#3"<<endl;
}

//4号函数
void func(double f){
    cout<<"#4"<<endl;
}


int main(){
    short s = 99;
    float f = 84.6;
    long  m = 100000000000000;


    func('a'); //调用函数1号
    func(s);   //调用函数2号,short转换成int 
    func(49);  //调用函数2号,不需要类型转换
    func(f);   //将float转换成double,调用func(double)
    func(m);   //调用函数3号


    return 0;
}
