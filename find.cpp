/*************************************************************************
	> File Name: rfind.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年10月29日 星期一 23时24分30秒
 ************************************************************************/

#include<iostream>
#include<string>

using namespace std;


int main(){
    string s1 = "second third second";
    string s2 = "second";
    int index = s1.find(s2);
    if (index < s1.length())
        cout <<"Found at index : " << index << endl;
    else
        cout <<"Not found" << endl;
    return 0;
    
}

