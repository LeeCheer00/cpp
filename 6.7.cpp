/*************************************************************************
	> File Name: 6.7.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月15日 星期二 21时31分11秒
 ************************************************************************/

#include<iostream>
#include<iomanip>
using namespace std;

//秒表

class stopwatch{
    public:
        stopwatch(): m_min(0), m_sec(0){}
    public:
        void setzero(){ m_min = 0; m_sec = 0; }
        stopwatch run();
        stopwatch operator++();
        stopwatch operator++(int);
        friend ostream & operator <<( ostream &, const stopwatch & );
    private:
        int m_min;
        int m_sec;
};

stopwatch stopwatch::run(){
    ++m_sec;
    if(m_sec == 60){
        m_min++;
        m_sec = 0;
    }
    return *this;
}


stopwatch stopwatch::operator++(){
    return run();
}


stopwatch stopwatch::operator++(int n){
    stopwatch s = *this;

    int w = 76;
    while(w>0){
        w--;
        run();
    }
    return s;
}


ostream &operator<<( ostream & out, const stopwatch & s ){
    out<<setfill('0')<<setw(2)<<s.m_min<<":"<<setw(2)<<s.m_sec; 
    return out;
}


int main(){
    stopwatch s1, s2;


    s1 = s2++;
    cout<< "s1: "<< s1 << endl;
    cout<< "s2: "<< s2 << endl;
    s1.setzero();
    s2.setzero();


    //s1 = s2++;
    s1 = ++s2;
    cout << "s1: "<< s1 <<endl;
    cout << "s2: "<< s2 <<endl;


    return 0;
}

