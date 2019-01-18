/*************************************************************************
	> File Name: 7.6.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月16日 星期三 20时34分41秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;


typedef struct{
    string name;
    int age;
    float score;
} STU;


template<class T>const T& Max(const T& a, const T& b);
template<> const STU& Max<STU>(const STU& a, const STU& b);
//重载<<
ostream & operator <<(ostream &out, const STU &stu);

int main(){
    int a = 10;
    int b = 20;
    cout<<Max(a, b)<<endl;


    STU stu1 = {"王明", 20, 94.5};
    STU stu2 = {"徐亮", 17, 100.0};
    cout<<Max(stu1, stu2)<<endl;


    return 0;
}


template<class T> const T& Max(const T& a, const T& b){
    return a > b ? a : b;
}


template<>const STU& Max<STU> (const STU & a,const STU & b){
    return a.score > b.score ? a : b;
}


ostream & operator<<(ostream &out, const STU &stu){
    out<<stu.name<<" , "<<stu.age<<" , "<<stu.score;
    return out;
}
