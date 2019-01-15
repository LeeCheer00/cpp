/*************************************************************************
	> File Name: const_class.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月08日 星期二 11时24分00秒
    > Learnt and understood: const elements need to be reached by const function
 ************************************************************************/

#include<iostream>
using namespace std;


class Student{
    public:
        Student(char *name, int age, float score);
        void show();


        /*
         * 声明常成员函数
         */
        char *getname() const;
        int getage() const;
        float getscore() const;

    private:
        char *m_name;
        int m_age;
        float m_score;
};


Student::Student(char *name, int age, float score): m_name(name), m_age(age), m_score(score){}
void Student::show(){
    cout<<m_name<<"的年龄是"<<m_age<<", 成绩是"<<m_score<<endl;
}



//定义常成员函数
char *Student::getname() const{
    return m_name;
}


int Student::getage()const{
    return m_age;
}

float Student::getscore() const {
    return m_score;
}


int main(){
    const Student stu("leecheer", 15, 90.6);
    //stu.show();
    cout<<stu.getname()<<"的年龄是"<<stu.getage()<<", 成绩是"<<stu.getscore()<<endl;

    const Student *pstu = new Student("leemig", 18, 89);
    //pstu -> show();
    cout<<pstu->getname()<<"的年龄是"<<pstu->getage()<<", 成绩是"<<pstu->getscore()<<endl;

    return 0;
}
