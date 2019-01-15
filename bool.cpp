/*************************************************************************
	> File Name: bool.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年10月05日 星期五 16时01分27秒
 ************************************************************************/

#include<iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main(){
    int a, b, flag;
    scanf("%d %d", &a,&b);
    flag = a > b; //flag 保存关系运算结果
    printf("flag=%d\n", flag);


    return 0;
}
