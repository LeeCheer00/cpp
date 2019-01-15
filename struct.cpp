/*************************************************************************
	> File Name: struct.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月08日 星期二 13时41分00秒
 ************************************************************************/

#include<iostream>
using namespace std;


class Student{
public:
    Student(char *name, int age, float score);
    void show();
private: 
    char *m_name;
    int m_age;
    float m_score;
};



Student::Student(char *name, int age, float score): m_name(name), m_age(age),m_score(score){}
void Student::show(){
    cout<<m_name<<"的年龄"<<m_age<<", 成绩是"<<m_score<<endl;
}


int main(){
    Student stu("leecheer", 15 , 100);
    stu.show();

    Student *pstu = new Student("leeMing", 20 ,87);
    pstu -> show();

    return 0;
}
