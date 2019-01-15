/*************************************************************************
	> File Name: shade.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月13日 星期日 17时51分55秒
 ************************************************************************/

#include<iostream>
using namespace std;

class People{
    public:
        void show();
    protected:
        char *m_name;
        int m_age;
};

void People::show(){
    cout<<"嗨,大家好,我叫"<<m_name<<" ,今年"<<m_age<<"岁"<<endl;
}


//Student 
class Student: public People{
    public:
    Student(char *name, int age, float score);
    public:
    void show();
    private:
    float m_score;

};

Student::Student(char *name, int age, float score){
    m_name = name;
    m_age = age;
    m_score = score;
}


void Student::show(){
    cout<<m_name<<"的年龄是"<<m_age<<", 成绩是"<<m_score<<endl;
}


int main(){
    Student stu("小明", 16, 90.5);
    stu.show();
    stu.People::show();

    return 0;
}
