/*************************************************************************
	> File Name: 5.4.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月14日 星期一 13时44分59秒
    > Function: Dancing with a stranger, 纯虚函数
 ************************************************************************/

#include<iostream>
using namespace std;


//线
class Line{
    public:
        Line(float len);
        virtual float area() = 0;
        virtual float volume() = 0;
    protected:
        float m_len;

};

Line::Line(float len): m_len(len){}


/*矩形
 */

class Rec: public Line{
    public:
        Rec(float len, float width);
        float area();
    protected:
        float m_width;
};


Rec::Rec(float len, float width): Line(len), m_width(width){}
float Rec::area(){ return m_len * m_width; }


/* 长方体
 */
class Cuboid: public Rec{
    public:
        Cuboid(float len, float width, float height);
        float area();
        float volume();
    protected:
        float m_height;

};

Cuboid::Cuboid(float len, float width, float height):Rec(len, width), m_height(height){}
float Cuboid::area(){ return 2*(m_len*m_width + m_len*m_height + m_width*m_height); }
float Cuboid::volume(){ return m_len * m_width * m_height; }


//正方体

class Cube: public Cuboid{
    public:
        Cube(float len);
        float area();
        float volume();
};

Cube::Cube(float len): Cuboid(len , len, len){ }
float Cube::area(){ return 6*m_len*m_len; }
float Cube::volume(){ return m_len*m_len*m_len; } 


int main(){
    Line *p = new Cuboid(10, 20, 30);
    cout << "The area of Cuboid is "<< p->area()<<endl;
    cout << "The volume of Cuboid is "<< p -> volume() <<endl;


    p = new Cube(15);
    cout << "The area of Cube is "<< p->area()<< endl;
    cout << "The volume of the Cube is "<< p->volume()<< endl;


    return 0;
}