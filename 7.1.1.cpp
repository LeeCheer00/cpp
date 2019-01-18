/*************************************************************************
	> File Name: 7.1.1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月15日 星期二 22时47分10秒
 ************************************************************************/

#include<iostream>
using namespace std;


template<typename T> void Swap( T *a, T *b ){
    T temp = *a;
    *a = *b;
    *b = temp;
}



int main(){
    int n1 = 100, n2 = 200;
    Swap(&n1, &n2);
    cout<<n1<<", "<<n2<<endl;


    /*交换float的变量值
     */
    float f1 = 12.5, f2 = 56.93;
    Swap(&f1, &f2);
    cout<<f1<<", "<<f2<<endl;

    /*交换char变量的值
     */
    char c1 = 'A', c2 = 'B';
    Swap(&c1, &c2);
    cout<<c1<<", "<<c2<<endl;


    /*交换bool变量的值
     */
    bool b1 = false, b2 = true;
    Swap(&b1, &b2);
    cout<<b1<<", "<<b2<<endl;

    return 0;

}
