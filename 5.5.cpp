/*************************************************************************
	> File Name: 5.5.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月14日 星期一 15时12分02秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;


//people
class People{
    public:
        People(string name, int age);
    public:
        virtual void display();
        virtual void eating();
    protected:
        string m_name;
        int m_age;
};


People::People(string name, int age): m_name(name), m_age(age){}


void People::display(){
    cout<<"Class People:"<<m_name<<"今年"<<m_age<<"岁."<<endl;
}

void People::eating(){
    cout<<"Class People: 我正在吃饭,请不要和我talk"<<endl;
}



class Student: public People{
    public:
        Student(string name, int age, float score);
    public:
        virtual void display();
        virtual void examing();
    protected:
        float m_score;
};


Student::Student(string name, int age, float score): People(name, age), m_score(score){}
void Student::display(){
    cout << "Class Student: "<<m_name<<"今年"<<m_age<<"岁, 考分为"<<m_score<<"."<<endl;
}
void Student::examing(){
    cout<< "Class Student: "<<m_name<<"正在考试,请不要喧哗."<<endl;
}


class Senior: public Student{
    public:
        Senior(string name, int age, float score, bool hasJob);
    public:
        virtual void display();
        virtual void partying();
    private:
        bool m_hasJob;
};

Senior::Senior(string name, int age, float score, bool hasJob): Student(name, age, score), m_hasJob(hasJob){}
void Senior::display(){
    if(m_hasJob){
        cout<<"Class Senior:"<<m_name<<"以"<<m_score<<"的成绩从大学毕业了, 并且找到了工作, Ta今年"<<m_age<<"岁."<<endl;
    }else{
        cout<<"Class Senior:"<<m_name<<"以"<<m_score<<"的成绩从大学毕业,不过工作不顺利,Ta今年"<<m_age<<"岁."<<endl;
    }

}


void Senior::partying(){
    cout<<"Class Senior: 快毕业了, 大家都在吃散伙饭..."<<endl;
}


int main(){
    People *p = new People("Mary", 29);
    p -> display();
    p = new Student("Russlle", 17, 87.5);
    p -> display();
    p = new Senior("leecheer", 25, 100, true);
    p -> display();


    return 0;
}
