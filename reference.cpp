/*************************************************************************
	> File Name: reference.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年10月30日 星期二 15时01分44秒
 ************************************************************************/

#include<iostream>
using namespace std;


void swap1(int a, int b);
void swap2(int *p1, int *p2);
void swap3(int &a, int &b);


int main(){


    int num1, num2;
    cout << "Input two integers: ";
    cin >> num1 >> num2;
    swap1(num1, num2);
    cout << num1 << " " << num2 << endl;

    cout << "Input two integers: ";
    cin >> num1 >> num2;
    swap2(&num1, &num2);
    cout << num1 << " " << num2 << endl;

    cout << "input two integers: ";
    cin >> num1 >> num2;
    swap3(num1,  num2);
    cout << num1 << " " << num2 << endl;


    return 0;
}



//传递内容
void swap1(int a, int b){
    int temp = a;
    a = b;
    b = temp;

}
//传递内容
void swap2(int *p1, int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

}
//传递内容
void swap3(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;

}

