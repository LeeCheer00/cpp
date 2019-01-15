/*************************************************************************
	> File Name: decare.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月02日 星期三 21时59分05秒
 ************************************************************************/

#include<iostream>
using namespace std;


void func(int am, int b, int c = 36);
void func(int am, int b = 5, int c);


int main(){
    func(100);//赋值形参, 和重复赋值形参 b,c , 实际上只能赋值一次
    return 0;
}


void func(int am, int b, int c){
    cout<<am<<"," <<b<<","<<c<<endl;
}
