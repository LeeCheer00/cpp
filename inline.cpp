/*************************************************************************
	> File Name: inline.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年10月05日 星期五 19时43分12秒
 ************************************************************************/

#include<iostream>
using namespace std;

inline int SQ(int y){return y*y; }


int main(){
    int n, sq;
    cin >> n;
    //SQ(n)
    sq = SQ(n);
    cout << sq << endl;
    //SQ(n+1)
    sq = SQ(n+1);
    cout << sq << endl;
    //200
    sq = 200 / SQ(n+1);
    cout << sq << endl;


    return 0;
}
