/*************************************************************************
	> File Name: 7.1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月15日 星期二 22时43分47秒
 ************************************************************************/

#include<iostream>
using namespace std;


void Swap( int *a, int *b ){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Swap( float *a, float *b ){
    float temp = *a;
    *a = *b;
    *b = temp;
}

void Swap( char *a, char *b ){
    char temp = *a;
    *a = *b;
    *b = temp;
}

void Swap( bool *a, bool *b ){
    char temp = *a;
    *a = *b;
    *b = temp;
}

