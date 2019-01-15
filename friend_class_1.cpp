/*************************************************************************
	> File Name: friend_class_1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月08日 星期二 12时14分56秒
 ************************************************************************/

#include<iostream>
using namespace std;


class Address; //提前声明Address类

//声明Student类
class Student{
    public:
        Student(char *name, int age, float score);
    public:
        void show(Address *addr);
    private:
        char *m_name;
        int m_age;
        float m_score;
};


//声明Address类
class Address{
    private:
        char *m_province;
        char *m_city;
        char *m_district;
    public:
        Address(char *province, char *city, char *district);
        //将Student类的成员函数show()声明为友元函数
        friend void Student::show(Address *addr); 
        friend class Student;
};

//实现Student类
Student::Student(char *name, int age, float score):m_name(name), m_age(age), m_score(score){}
void Student::show(Address *addr){
    cout<<m_name<<"年龄是"<<m_age<<", 成绩是"<<m_score<<endl;
    cout<< "家住" << addr->m_province << "省" << addr->m_city << "市" << addr->m_district << "区" <<endl;
}


Address::Address(char *province, char *city, char *district){
    m_province = province;
    m_city = city;
    m_district = district;
}


int main(){
    Student stu("leecheer", 25, 100);
    Address addr("湖南","湘潭","雨湖");

    stu.show(&addr);

    Student *pstu = new Student("leeming", 10, 29);
    Address *addr1 = new Address("陕北", "西安", "天水");
    pstu -> show(addr1);
    return 0;
}
