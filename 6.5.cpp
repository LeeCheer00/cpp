/*************************************************************************
	> File Name: 6.5.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月15日 星期二 15时54分53秒
 ************************************************************************/

#include<iostream>
using namespace std;


class complex{
    public:
        complex(double real = 0.0, double  imag = 0.0): m_real(real), m_imag(imag){ };

    public:
        friend complex operator+(const complex & A, const complex & B);
        friend complex operator-(const complex & A, const complex & B);
        friend complex operator*(const complex & A, const complex & B);
        friend complex operator/(const complex & A, const complex & B);
        friend istream & operator>>(istream & in, complex & A);
        friend ostream & operator<<(ostream & out, complex & A);


    private:
        double m_real;
        double m_imag;
};

        /*重载加法运算符
         */
complex operator+(const complex & A, const complex & B){
    complex C;
    C.m_real = A.m_real + B.m_real;
    C.m_imag = A.m_imag + B.m_imag;

    return C;
}

/*
 * 重载减法运算符
 */
complex operator-(const complex & A, const complex & B){
    complex C;
    C.m_real = A.m_real - B.m_real;
    C.m_imag = A.m_imag - B.m_imag;
    return C;
}


/*
 * 重载除法运算符
 */
complex operator*(const complex & A, const complex & B){
    complex C;
    C.m_real = A.m_real * B.m_real - A.m_imag * B.m_imag;
    C.m_imag = A.m_imag * B.m_real + A.m_real * B.m_imag;
    return C;
}



/*
 * 重载乘法运算符
 */
complex operator/(const complex & A, const complex & B){
    complex C;
    double square = A.m_real * A.m_real + A.m_imag * A.m_imag;
    C.m_real = (A.m_real * B.m_real + A.m_imag * B.m_imag)/square;
    C.m_imag = (A.m_imag * B.m_real - A.m_real * B.m_imag)/square;

    return C;
}



istream & operator >>(istream & in, complex & A){
    in >> A.m_real >> A.m_imag;
    return in;
}
ostream & operator <<(ostream & out , complex & A){
    out << A.m_real << " + "<<A.m_imag <<"i";
    return out;
}


int main(){
    complex c1, c2, c3;
    cin>>c1>>c2;
    
    c3 = c1 + c2;
    cout<<"c1 +  c2 = "<< c3 <<endl;
    
    c3 = c1 - c2;
    cout<<"c1 - c2 ="<<c3<<endl;

    c3 = c1 * c2;
    cout<<"c1 * c2 ="<<c3<<endl;

    c3 = c1 / c2;
    cout<<"c1 / c2 ="<<c3<<endl;

    return 0;
}
