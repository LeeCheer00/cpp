/*************************************************************************
	> File Name: diaoyong_jiclass_gouzaohanshu.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月13日 星期日 19时13分21秒
 ************************************************************************/

#include<iostream>
using namespace std;



/*
 * 基类People
 */


class People{
    protected:
        char *m_name;
        int m_age;

    public:
        People(char *, int);
};




People::People(char *name, int age): m_name(name), m_age(age){}



/*
 * 派生类Student
 */

class Student: public People{
    private:
        float m_score;
    public:
        Student(char *name, int age, float score); 
        void display();
};




//people(name, age)就是调用基类的构造函数
Student::Student(char *name, int age, float score): People(name, age),m_score(score){}
void Student::display(){
    cout<<m_name<<"的年龄是"<<m_age<<", 得分为"<<m_score<<endl;
}






int main(){
    Student stu("leecheer", 25, 100);
    stu.display();



    return 0;
}
