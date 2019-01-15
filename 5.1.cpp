/*************************************************************************
	> File Name: 5.9.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月14日 星期一 11时30分41秒
 ************************************************************************/

#include<iostream>
using namespace std;

//基类People
class People{
    public:
        People(char *name, int age);
        virtual void display();
    protected:
        char *m_name;
        int m_age;
};

People::People(char *name, int age): m_name(name),  m_age(age){ }
void People::display(){
    cout<<m_name<<"今年"<<m_age<<"岁了,是个无业游民."<<endl;
}

/* 
 *派生类
 */
class Teacher: public People{
    public:
        Teacher(char *name, int age, int salary);
        virtual void display();
    private:
        int m_salary;
};


Teacher::Teacher(char *name, int age, int salary): People(name, age), m_salary(salary){}
void Teacher::display(){
    cout<<m_name<<"今年"<<m_age<<"岁, 是一名教师, 每月工资为"<<m_salary<<"元."<<endl;
}


int main(){
    People *p = new People("leecheer", 23);
    p -> display();
    p = new Teacher("Wongzhi", 88, 8789);
    p -> display();
/*
 * 通过基类指针对所有派生类的成员变量和成员函数进行"全方位"的访问, 尤其是成员函数;
 * 如果没有多态, 我们只能访问成员变量.
 */

    return 0;
}
