/*************************************************************************
	> File Name: stringplus.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月08日 星期二 14时03分38秒
 ************************************************************************/

#include<iostream>
using namespace std;


int main(){
    string s = "1234567890";
    for(int i=0, len=s.length(); i< len; i++){
        cout<< s[i] << " ";
    }
    cout << endl;
    s[5] = '5';
    cout<<s<<endl;
    return 0;
}
