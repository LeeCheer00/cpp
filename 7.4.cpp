/*************************************************************************
	> File Name: 7.4.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月16日 星期三 18时26分10秒
 ************************************************************************/

#include<iostream>
using namespace std;


template <class T> void Swap(T &a, T &b); //模板1:交换基本类型的值
template <typename T> void Swap(T a[], T b[], int len);


void printArray(int arr[], int len);


int main(){
    int m = 10, n = 99;
    Swap(m, n);
    cout<<m<<", "<<n<<endl;


    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {10, 20, 30, 40, 50};
    int len = sizeof(a) / sizeof(int);
    Swap(a, b, len);
    printArray(a, len);
    printArray(b, len);


    return 0;
}


template <class T> void Swap(T &a, T &b){
    T temp = a;
    a = b;
    b =temp;
}

template<typename T> void Swap(T a[], T b[], int len){
    T temp;
    for(int i=0; i<len; i++){
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}


void printArray(int arr[], int len){
    for(int i=0; i<len; i++){
        if( i == len -1 ){
            cout<<arr[i]<<endl;
        }else{
            cout<<arr[i]<<", ";
        } 
    }
}
