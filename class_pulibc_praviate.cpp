/*************************************************************************
	> File Name: class_pulibc_praviate.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月04日 星期五 21时34分33秒
 ************************************************************************/

#include<iostream>
using namespace std;


//类的声明
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




/*
 * 成员函数的定义
 */
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
    cout<<m_name<<"的年龄是"<<m_age<<", 得分为"<<m_score<<endl;
}


int main(){
    /*栈上创建对象
     */
    Student stu;
    stu.setname("leecheer");
    stu.setage(25);
    stu.setscore(100);
    stu.show();//show the class' element.


    /*
     * 在堆上创建对象
     */
    Student *pstu = new Student;
    pstu -> setname("leehua");
    pstu -> setage(10);
    pstu -> setscore(100);
    pstu -> show();// show the class' elements.
    delete pstu;
    
    return 0;
}
