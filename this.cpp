/*************************************************************************
	> File Name: this.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月08日 星期二 03时49分45秒
 ************************************************************************/

#include<iostream>
using namespace std;


class Student{
    public:
    void setname(char *name);
    void setage(int age);
    void setscore(float score);
    void show();
    void printThis();

    private:
    char *name;
    int age;
    float score;
};


void Student::setname(char *name){
    this->name = name;
}
void Student::setage(int age){
    this->age = age; 
}
void Student::setscore(float score){
    this->score = score;
}
void Student::show(){
    cout<<this->name<<"的年龄是"<<this->age<<",成绩是"<<this->score<<endl;
}
void Student::printThis(){
    cout<<this<<endl;
}


int main(){
    Student *pstu = new Student;
    pstu -> setname("leecheer");
    pstu -> setage(16);
    pstu -> setscore(96.5);
    pstu -> show();

    Student *pstu1 = new Student;
    pstu1 -> printThis();
    cout<<pstu1<<endl;

    Student *pstu2 = new Student;
    pstu2 -> printThis();
    cout<<pstu2<<endl;

    return 0; 
}
