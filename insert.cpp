/*************************************************************************
	> File Name: insert.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年10月29日 星期一 23时03分49秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;


int main(){
    string s1,s2,s3;
    s1 = s2 = "1234567890";
    s3 = "aaa";
    s1.insert(5, s3);
    cout << s1 << endl;
    s2.insert(5, "bbb");
    cout << s2 << endl;
    return 0;
}

