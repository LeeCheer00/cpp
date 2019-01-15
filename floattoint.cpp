/*************************************************************************
	> File Name: floattoint.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年10月30日 星期二 19时49分20秒
 ************************************************************************/

#include<iostream>
using namespace std;


int main(){
    int n = 100;
    float *p = (float*)&n;
    *p = 19.625;
    printf("%d\n", n);


    return 0 ;

}
