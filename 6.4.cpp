/*************************************************************************
	> File Name: 6.4.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月15日 星期二 14时38分14秒
 ************************************************************************/

#include<iostream>
using namespace std;


/* 复数类
 */
 class Complex{
     public:
     Complex(): m_real(0.0), m_imag(0.0){}
     Complex(double real, double imag): m_real(real), m_imag(imag){}
     Complex(double real): m_real(real), m_imag(0.0){}
     public:
     friend Complex operator+(const Complex &c1, const Complex &c2);
     public:
     double real() const {return m_real;}
     double imag() const {return m_imag;}
     private:
     double m_real;
     double m_imag;
 };


 Complex operator+(const Complex &c1, const Complex &c2){
     Complex c;
     c.m_real = c1.m_real + c2.m_real;
     c.m_imag = c2.m_imag + c2.m_imag;

     return c;
 }
 


 int main(){
     Complex c1(25, 35);
     Complex c2 = c1 + 15.6;
     Complex c3 = 28.23 + c1;
     cout << c2.real()<<" + "<<c2.imag()<<"i"<<endl;
     cout << c3.real()<<" + "<<c3.imag()<<"i"<<endl;


     return 0;
 }
