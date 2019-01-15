/*************************************************************************
	> File Name: gouzao.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月05日 星期六 13时25分23秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Student{
    private:
        char *m_name;
        int m_age;
        float m_score;
    public:
        /*声明构造函数
         */
        Student(char *name, int age, float score);
        /*
         * 声明 
         * 普通成员
         * 函数
         */
        Student();
        void setname(char *name);
        void setage(int age);
        void setscore(float score);
        void show();

};


/*定义
 * 构造
 * 函数
 */
Student::Student(){
    m_name = NULL;
    m_age = 0;
    m_score = 0.0;
}
Student::Student(char *name, int age, float score){
    m_name = name;
    m_age = age;
    m_score = score; 
}

void Student::setname(char *name){
    m_name = name; 
}
void Student::setage(int age){
    m_age = age;
}
void Student::setscore(float score){
    m_score = score;
}

/*
 * 定义
 * 普通成员
 * 函数
 */
void Student::show(){
    if(m_name == NULL || m_age <= 0){
        cout<<"成员变量还未初始化"<<endl;
    }else{
    cout<<m_name<<" 的成绩是"<<m_score<<",年纪是"<<m_age<<"."<<endl; 
    }
}


int main(){
    //创建对象的时候向构造函数传递参数
    Student stu("小明", 15, 92.5f);
    stu.show();
    //创建对象时向构造函数传递参数
    Student *pstu = new Student();
    pstu -> show();
    pstu -> setname("leecheer");
    pstu -> setage(26);
    pstu -> setscore(100);
    pstu -> show();


    return 0;
}
