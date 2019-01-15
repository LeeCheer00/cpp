/*************************************************************************
	> File Name: WanShu_range.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月04日 星期五 20时28分07秒
 ************************************************************************/

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int i,j; //控制两层循环
    int flag=0; //判断flag完数
    int range; //输入数字范围
    int sum=0; //求和暂存
    int result; //最末的完数,暂存
    cout<<"Please input a range:"<<endl;
    cin>>range; //输入数字范围
    /*
     * 以下为控制range范围内的num做判断
     */
    for(i=1; i<=range; i++){ 
        sum = 0; //每一个循环都要重置sum==0
        for(j=1; j<i; j++){
            if(i  % j == 0){
                sum += j;
            }
        }
        /*
         * 判断i是否为完数
         */
        if(sum == i){
            cout<<i<<" is one of the Wanshu in the range: 0~"<<range<<"."<<endl;
            result = i;
            flag++;
        }
    }
    if(flag==0){
        cout<<"This is no Wanshu in the range: 0~"<<range<<endl;
    }else if(flag>=2){
        cout<<"All the results in the range: 0~"<<range<<" have been shown above!"<<endl;
    }else{
        cout<<"The only result in the range: 0~"<<range<<" is "<<result<<"."<<endl;
    }

    return 0;
}


