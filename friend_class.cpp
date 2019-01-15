/*************************************************************************
	> File Name: friend_class.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月08日 星期二 12时01分29秒
 ************************************************************************/

#include<iostream>
using namespace std;


class Student{
    public:
        Student(char *name, int age, float score);
        friend void show(Student *pstu);
    private:
        char *m_name;
        int m_age;
        float m_score;
};

Student::Student(char *name, int age, float score): m_name(name), m_age(age), m_score(score){ }


void show(Student *pstu){
    cout<<pstu->m_name<<"年龄是"<<pstu->m_age<<",成绩是"<<pstu->m_score<<endl;
}


int main(){
    Student stu("leecheer", 25, 100);
    show(&stu);

    Student *pstu = new Student("leeMing", 20, 80);
    show(pstu);

    return 0;
}
