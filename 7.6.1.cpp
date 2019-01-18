/*************************************************************************
	> File Name: 7.6.1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月16日 星期三 20时56分05秒
 ************************************************************************/

#include <iostream>
using namespace std;

//类模板
template<class T1, class T2> class Point{
public:
    Point(T1 x, T2 y): m_x(x), m_y(y){ }
public:
    T1 getX() const{ return m_x; }
    void setX(T1 x){ m_x = x; }
    T2 getY() const{ return m_y; }
    void setY(T2 y){ m_y = y; }
    void display() const;
private:
    T1 m_x;
    T2 m_y;
};

template<class T1, class T2>  //这里需要带上模板头
void Point<T1, T2>::display() const{
    cout<<"x="<<m_x<<", y="<<m_y<<endl;
}

//类模板的部分显示具体化
template<typename T2> class Point<char*, T2>{
public:
    Point(char *x, T2 y): m_x(x), m_y(y){ }
public:
    char *getX() const{ return m_x; }
    void setX(char *x){ m_x = x; }
    T2 getY() const{ return m_y; }
    void setY(T2 y){ m_y = y; }
    void display() const;
private:
    char *m_x;  //x坐标
    T2 m_y;  //y坐标
};

template<typename T2>  //这里需要带上模板头
void Point<char*, T2>::display() const{
    cout<<"x="<<m_x<<" | y="<<m_y<<endl;
}

int main(){
    ( new Point<int, int>(10, 20) ) -> display();
    ( new Point<char*, int>("东京180度", 10) ) -> display();
    ( new Point<char*, char*>("东京180度", "北纬210度") ) -> display();

    return 0;
}

