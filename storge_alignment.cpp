/*************************************************************************
	> File Name: storge_alignment.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月05日 星期六 11时20分10秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Student{
    private:
    char *m_name;
    int m_age;
    float m_score;
    public:
    void setname(char *name);
    void setage(int age);
    void setscore(float score);
    void show();
};

void Student::setname(char *name){
    m_name = name;
}


void Student::setage(int age){
    m_age = age;
}

void Student::setscore(float score){
    m_score = score;
}

void Student::show(){
    cout<<m_name<<"的年龄是"<<m_age<<",成绩是"<<m_score<<endl;
}


int main(){
    //在栈上创建对象
    Student stu;
    cout<<sizeof(stu)<<endl;
    /*
     * create the element in the heap
     */
    Student *pstu = new Student();
    cout<<sizeof(*pstu)<<endl;
    /*
     * size of the class
     */
    cout<<sizeof(Student)<<endl;
    return 0;
}
