/*************************************************************************
	> File Name: qigou.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月05日 星期六 20时47分08秒
 ************************************************************************/

#include<iostream>
using namespace std;



class VLA{
    public:
        VLA(int len); //构造函数
        ~VLA(); //析构函数
    public:
        void input(); //从控制台输入数组元素
        void show(); //显示数组元素

    private:
        int *at(int i); //获取第i个元素的指针
    private:
        const int m_len; //数组长度
        int *m_arr; //数组指针
        int *m_p; //指向数组第i个元素的指针
};


VLA::VLA(int len): m_len(len){
        if(len > 0){ m_arr = new int[len]; /*分配内存*/ }
        else{ m_arr = NULL; }
    }
VLA::~VLA(){
    delete[] m_arr; //释放内存
}
void VLA::input(){
    for(int i=0; m_p=at(i); i++){ cin>>*at(i); }
}


/*
 * 此函数show()和at()
 * 可以记忆
 */
void VLA::show(){
    for(int i=0; m_p=at(i); i++){
        if( i == m_len - 1 ){ cout<<*at(i)<<endl; } // 以下这两行可以看做是a,b,c,d \n
        else{ cout<<*at(i)<<", "; } // 最后一行可以看做是前奏吧
    }/*
        at(i)此函数在之后被定义
        */
}
/*
 * at()
 * 此函数可以记忆
 */
int * VLA::at(int i){
    if(!m_arr || i<0 || i>=m_len){ return NULL; } // 数组指针为0, i<0 或者 i大于长度时, 返回NULL
    else{return m_arr + i;} //否则返回m_arr+i 指针
}


int main(){
    //创建一个有n个元素的数组(对象)
    int n;
    cout<<"Input array length: ";
    cin>>n;
    VLA *parr = new VLA(n);
    //输入数组元素
    cout<<"Input "<<n<<" numbers: ";
    parr -> input();
    //输出数组元素
    cout<<"Elements: ";
    parr -> show();
    //删除数组(对象)
    delete parr;

    return 0;

}

