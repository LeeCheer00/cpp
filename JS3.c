/*************************************************************************
	> File Name: JS3.c
	> Author: 
	> Mail: 
	> Created Time: 2018年11月04日 星期日 23时29分55秒
    > Use: 增量
 ************************************************************************/

#include<stdio.h>
int main(){
    int emotion[7]={3995,436,4097,7215,4830,3171,4965};
    float ratio[7];
    int i;
    for (i=0; i<7; i++) {
        ratio[i] = (emotion[i]*1.0000) / 28909;
        printf("%f\n",ratio[i]*251);
    }
    return 0;

}