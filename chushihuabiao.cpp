/*************************************************************************
	> File Name: chushihuabiao.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月05日 星期六 19时49分21秒
 ************************************************************************/

#include<iostream>
using namespace std;


class Demo{
    private:
        int m_a;
        int m_b;
    public:
        Demo(int b);
        void show();
};


Demo::Demo(int b): m_b(b),m_a(m_b){}
void Demo::show(){ cout<<m_a<<", "<<m_b<<endl;  }


int main(){
    Demo obj(100);
    obj.show();
    return 0;
}
