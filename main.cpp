/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年10月05日 星期五 20时01分55秒
 ************************************************************************/

#include<iostream>
using namespace std;
// 内敛函数声明
void func();


int main(){
    func();
    return 0;
}


//内联函数定义
inline void func(){
    cout << " inline function" << endl;
}
