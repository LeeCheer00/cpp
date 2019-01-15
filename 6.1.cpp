/*************************************************************************
	> File Name: 6.1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月14日 星期一 20时44分49秒
    > Function: 重载
 ************************************************************************/

#include<iostream>
using namespace std;

class complex{
    public:
        complex();
        complex(double real , double imag);
    public:
        complex operator + (const complex &A)const;//返回值类型 operator 运算符名称 (形参表列)                                  函数名为:operator+
        void display() const;
    private:
        double m_real;
        double m_imag;
};


complex::complex():m_real(0.0), m_imag(0.0){}
complex::complex(double real, double  imag): m_real(real), m_imag(imag){}


//实现运算符重载
complex complex::operator + (const complex &A) const{
    complex B;
    B.m_real = this -> m_real + A.m_real;
    B.m_imag = this -> m_imag + A.m_imag;
    return B;
}


void complex::display() const {
    cout<<m_real<<" + "<<m_imag<<"i"<<endl;
}


int main(){
    complex c1(4.3, 5.8);
    complex c2(2.4, 3.7);
    complex c3;
    c3 = c1 + c2; // c1 是要调用函数的对象,  c2是函数的实参
    c3.display();


    return 0;
}
