/*************************************************************************
	> File Name: cpp_strcat.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月08日 星期二 14时07分51秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;


int main(){
    string s1 = " lee";
    string s2 = " cheer";
    char s4[] = " dogs";
    char ch = '!';
    char *s3 =" loves";

    string s5 = s1 + s2 + s3 + s4 + ch;


    cout<<s5<<endl;


    return 0;
}

