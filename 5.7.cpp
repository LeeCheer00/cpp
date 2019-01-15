/*************************************************************************
	> File Name: 5.7.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月14日 星期一 16时38分22秒
 ************************************************************************/

#include<iostream>
#include<typeinfo>
using namespace std;
/*基类
 */
class People{
    public:
        virtual void func(){}
};
/*
 * 派生类
 */
class Student: public People{};

int main(){
    People *p;
    int n;


    cin>>n;
    if(n <= 100){
        p = new People();
    }else{
        p = new Student();
    }



    /*根据不同的类型进行不同的操作
     */
    if(typeid(*p) == typeid(People)){
        cout<<" I am a human being."<<endl;
    }else{
        cout<< " I am a student."<<endl;
    }


    return 0;
}
