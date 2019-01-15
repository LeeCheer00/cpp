/*************************************************************************
	> File Name: find_first_of.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月08日 星期二 14时31分23秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;


int main(){
    string s1 = "Hello world, My name is your daddy!";
    string s2 = "d";
    int index = s1.find_first_of(s2);
    if(index < s1.length())
        cout << "Found at index: " << index <<endl;
    else 
        cout<<"Not found"<<endl;

    return 0;
}

