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
    cout<<m_name<<"今年"<<m_age<<"岁, 是一名算法工程师, 每月工资为"<<m_salary<<"元."<<endl;
}

int main(){
    People p("wongzhi", 25);
    Teacher t("leecheer", 26, 12000);

    People &rp = p;
    Teacher &rt = t;


    rp.display();
    rt.display();

    return 0;
}
