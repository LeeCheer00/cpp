/*************************************************************************
	> File Name: overload.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月03日 星期四 19时05分42秒
 ************************************************************************/

#include<iostream>
using namespace std;

//交换int变量的值
void Swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


//交换float变量的值
void Swap(float *a, float *b){
    float temp =  *a ;
    *a = *b;
    *b = temp;
}

//交换char变量的值
void Swap(char *a, char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}

//交换bool变量的值
void Swap(bool *a, bool *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    //交换 int 变量的值
    int n1 = 100, n2 = 200;
    Swap(&n1, &n2);
    cout<<n1<<","<<n2<<endl;

    //交换float变量的值
    float f1 = 12.5, f2 = 56.93;
    Swap(&f1, &f2);
    cout<<f1<<","<<f2<<endl;

    
    //交换char变量的值
    char c1 = 'A', c2 = 'B';
    Swap(&c1, &c2);
    cout<<c1<<","<<c2<<endl;

    //交换bool变量的值
    bool b1 = false, b2 = true;
    Swap(&b1, &b2);
    cout << b1<<","<<b2<<endl;


    return 0;
}
