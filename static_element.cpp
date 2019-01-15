/*************************************************************************
	> File Name: static_element.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月08日 星期二 09时08分21秒
 ************************************************************************/

#include<iostream>
using namespace std;


class Student{
    public:
        Student(char *name, int age, float score);
        void show();
    private:
        static int m_total; //静态成员变量
    private:
        char *m_name;
        int m_age;
        float m_score;
};

//初始化静态成员变量

int Student::m_total = 0;



void Student::show(){
    cout<<m_name<<"年龄为"<<m_age<<", 得分为"<<m_score<<"(当前共有"<<m_total<<"人)"<<endl;
}

Student::Student(char *name, int age, float score): m_name(name), m_age(age), m_score(score){
    m_total++;
}


int main(){
    //创建匿名对象
    (new Student("leecheer", 25, 100)) -> show();
    (new Student("leehua", 10, 50)) -> show();
    (new Student("leeming", 15, 89)) -> show();
    (new Student("liuyun", 19, 90)) -> show();


    return 0;
}
