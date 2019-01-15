/*************************************************************************
	> File Name: VLA.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月05日 星期六 20时09分01秒
 ************************************************************************/

#include<iostream>
using namespace std;

class VLA{
    private:
        const int m_len;
        int *m_arr;
    public:
        VLA(int len):
};
//必须使用参数初始化表来初始化 m_len
VLA::VLA(int len): m_len(len){
    m_arr = new int[len];
}

