/*************************************************************************
	> File Name: class.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月03日 星期四 20时07分18秒
 ************************************************************************/

#include<iostream>
using namespace std;


//类通常定义在函数外面
class Student{
public:
    //类包含的变量
    char *name;
    int age;
    float score;
    //类包含的函数
    void say(){
        cout<<name<<"的年龄是"<<age<<",成绩是"<<score<<"!"<<endl;
    }
};



int main(){
    Student stu;
    stu.name = "小明";
    stu.age = 23;
    stu.score = 100;
    stu.say();


    return 0;
}
