/*************************************************************************
	> File Name: wanshu.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月04日 星期五 20时18分18秒
 ************************************************************************/

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int i;//控制循环
    int num;//输入数字
    int sum=0; //求和暂存
    cout<<"Please input a number:"<<endl;
    cin>>num;
    for(i=1; i<num; i++){
        if(num % i == 0){
            sum += i;
        }
    }
    if(sum == num){
        cout<<num<<" is a Wanshu!"<<endl;
    }else{
        cout<<num<<" is not Wanshu!"<<endl;
    } 
    return 0;
}
