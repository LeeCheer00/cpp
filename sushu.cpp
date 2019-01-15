/*************************************************************************
	> File Name: sushu.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月04日 星期五 18时17分44秒
 ************************************************************************/

#include<iostream>
#include<math.h> 
using namespace std;
int main(){
    int i;
    int num;
    int flag;
    int middle;
    cout<<"Please input a number:"<<endl;
    cin>>num;
    middle = pow(num, 0.5);
    for(i=2; i<=middle; i++){
        if(num % i == 0){
            flag++;
            break;
        } 
    }
    if(flag==0){
        cout<<num<<" is a SuShu!"<<endl;
    }else{
        cout<<num<<" is not a SuShu!"<<endl;
    }
    return 0;
}
