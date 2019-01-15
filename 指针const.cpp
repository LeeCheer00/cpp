/*************************************************************************
	> File Name: 指针const.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年10月05日 星期五 16时25分10秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include <stdio.h>
int main(){
    const int n = 10;
    int *p = (int *)&n;
    *p= 99;
    printf("%d\n",n);
    return 0;
}
