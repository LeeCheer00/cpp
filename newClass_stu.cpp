/*************************************************************************
	> File Name: newClass_stu.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月03日 星期四 20时17分25秒
 ************************************************************************/

#include<iostream>
using namespace std;


class Student{

    public:
        char *name;
        int age;
        float score;


        void say(){
            cout<<name<<"'age is "<<age<<", and score is "<<score<<"!"<<endl;
        }
};


int main(){
    Student *pStu = new Student; // new the element
    pStu -> name = "leecheer";
    pStu -> age = 25;
    pStu -> score = 100;
    pStu -> say();
    delete pStu; //delete The Element



    return 0;
}
