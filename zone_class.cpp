/*************************************************************************
	> File Name: zone_class.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月13日 星期日 18时33分11秒
 ************************************************************************/

#include<iostream>
using namespace std;


class A{
    public:
        void func();
    public:
        int n;

};


void A::func(){
    cout << "leecheer will conquer the kid in his heart!"<< endl;
}


class B: public A{
    public: 
        int n;
        int m;
};


class C: public B{
    public:
        int n;
        int x;

};



int main(){
    C obj;
    obj.n;
    obj.func();
    cout<<sizeof(C)<<endl;
    


    return 0;
}
