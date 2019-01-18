/*************************************************************************
	> File Name: 7.1.2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月15日 星期二 22时53分49秒
 ************************************************************************/

#include<iostream>
using namespace std;


template <typename T> void Swap( T &a, T &b ){
    T temp = a;
    a = b;
    b = temp;
}





int main(){
    int n1 = 100, n2 = 200;
    Swap(n1, n2);
    cout<<n1<<", "<<n2<<endl;


    /*交换float的变量值
     */
    float f1 = 100.00, f2 = 97.777;
    Swap(f1,  f2);
    cout<<f1<< ", "<< f2<<endl;


    /*交换char变量的值
     */
    char c1 = 's', c2 = 'l';
    Swap(c1, c2);
    cout<<c1<<", "<<c2<<endl;


    /*交换bool变量的值
     */


    bool b1 = false, b2 = true;
    Swap(b1, b2);
    cout<<b1<<", "<<b2<<endl;


    return 0;
}

