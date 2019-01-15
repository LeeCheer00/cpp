/*************************************************************************
	> File Name: Name_Mangling.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月05日 星期六 11时47分56秒
 ************************************************************************/

#include<iostream>
using namespace std;

void display(){
    cout<<"hello Man!"<<endl;
};
void display(int){
    cout<<"hello Pikaqiu~"<<endl;
};

namespace ns{
    void display(){
        cout<<"hello world*.*"<<endl;
    };
}

class Demo{
    public:
        void display(){
            cout<<"hello aoteman&.&"<<endl;
        };
};


int main(){
    display();
    display(1);
    ns::display();
    Demo obj;
    obj.display();


    return 0;
}
