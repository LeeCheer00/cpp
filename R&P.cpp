/*************************************************************************
	> File Name: R&P.cpp
	> Author: leecheer
	> Mail: tolq@foxmail.com
	> Created Time: 2018年10月30日 星期二 16时04分17秒
 ************************************************************************/

#include<iostream>
using namespace std;


int main(){
    int a = 10;
    int &r = a;
    r++;
    cout << r << endl;


    int arr[2] =  { 27, 84 };
    int *p = arr;
    p++;
    cout << *p << endl;


    return 0;
}
