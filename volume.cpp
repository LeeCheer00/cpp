/*************************************************************************
	> File Name: volume.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月08日 星期二 14时52分36秒
 ************************************************************************/

#include<iostream>
using namespace std;

double volume(const double len, const double width, const double hei){
    return len*width*2 + len*hei*2 + width*hei*2;
}


int main(){
    int a = 12, b = 3, c =20;
    double v1 = volume(a, b, c);
    double v2 = volume(10, 30, 40);
    double v3 = volume(80, 10, 20);
    double v4 = volume(a+10, b+10, c+20);
    double v5 = volume(a+b, c+b, b+c);
    cout<<v1<<" "<<v2<<" "<<v3<<" "<<v4<<" "<<v5<<endl;

    return 0;
}
