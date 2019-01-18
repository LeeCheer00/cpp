/*************************************************************************
	> File Name: 7.1.3.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月15日 星期二 23时11分48秒
    > Function: 求三个数最小的数,使用的是声明函数模板
 ************************************************************************/

#include<iostream>
using namespace std;


template <typename T> T max(T a, T b, T c);


int main(){
    //we got the max value in the array
    //the max number in the 3 numbers
    int i1, i2, i3, i_max;
    cin >> i1 >> i2 >> i3;
    i_max = max(i1, i2, i3);
    cout << "i_max=" << i_max <<endl;

    //the max float number in the 3 number
    double d1, d2, d3, d_max;
    cin >> d1 >> d2 >>d3;
    d_max = max(d1, d2, d3);
    cout << "d_max=" << d_max << endl;


    /*the max long nubmer in the 3 number
     */
    long g1, g2, g3, g_max;
    cin >> g1 >> g2 >> g3;
    g_max = max(g1, g2, g3);
    cout <<"g_max="<< g_max << endl;

    return 0;
}


template <typename T> 
T max(T a, T b, T c){
    T max_num = a;
    if(b > max_num) max_num = b;
    if(c > max_num) max_num = c;

    return max_num;
}
