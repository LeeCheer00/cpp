/*************************************************************************
	> File Name: qigou1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月05日 星期六 21时47分45秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Demo{
    public:
        Demo(string s);
        ~Demo();
    private:
        string m_s;
};
Demo::Demo(string s): m_s(s){  }
Demo::~Demo(){ cout<<m_s<<endl; }


void func(){
    //局部对象
    Demo obj1("1");
}
//全局对象
Demo obj2("2");


int main(){
    //局部对象 
    Demo obj3("3");
    //new 创建的对象
    Demo *pobj4 = new Demo("4");
    func();
    delete pobj4;
    cout<<"main"<<endl;


    /* 局部变量Demo1 最先被销毁
     * main()结束销毁,相当于Demo4应当在此时销毁
     * main()创建的局部对象Demo3会被销毁
     * 最后是全局变量Demo2被销毁
     */
    return 0;
}
