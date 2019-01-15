/*************************************************************************
	> File Name: revisestring.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年10月29日 星期一 22时36分27秒
 ************************************************************************/

#include<iostream>
#include <string>
using namespace std;

int main(){
    string s = "1234567890";
    for(int i=0,len=s.length();i<len;i++){
        cout << s[i] << " ";
    }


    cout << endl;
    s[5] = '5';
    cout << s << endl;
    return 0;
}
