/*************************************************************************
	> File Name: static_function.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月08日 星期二 09时41分44秒
 ************************************************************************/

#include<iostream>
using namespace std;


class Student{
    public:
        Student(char *name , int age , float score);
        void show();
    public:
        static int Total();
        static float Score();
    private:
        static int m_total;
        static float m_totalscore;
    private:
        char *m_name;
        int m_age;
        float m_score;
};



int Student::m_total = 0;
float Student::m_totalscore = 0;


Student::Student(char *name ,int age, float score): m_name(name), m_age(age), m_score(score){
    m_total++;
    m_totalscore += m_score;
}

//int Student::Total(){
//    return m_total;
//}
//
//float Student::Score(){
//    return m_totalscore;
//}
int Student::Total(){
    cout<<"总共有"<<m_total<<"名学生,总得分为";
}
float Student::Score(){
    cout<<m_totalscore<<"."<<endl;
}

void Student::show(){
    cout<<m_name<<"今天"<<m_age<<"岁, 成绩是"<<m_score<<"."<<endl;
}

int main(){
    (new Student("leecheer", 25, 100)) -> show();
    (new Student("leehuain", 15, 101)) -> show();
    (new Student("liuyunsh", 18, 105)) -> show();
    (new Student("zhaoqian", 20, 104)) -> show();


//    int total = Student::Total();
//    float totalscore = Student::Score();
//    cout<<"总共有"<<total<<"学生,"<<"总得分有"<<totalscore<<"."<<endl;
    Student::Total();
    Student::Score();
   return 0; 
}

