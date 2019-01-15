/*************************************************************************
	> File Name: JS.c
	> Author: 
	> Mail: 
	> Created Time: 2018年11月04日 星期日 17时57分20秒
 ************************************************************************/

#include<stdio.h>

int main(){
    float a[]={3995,436,4097,7215,4830,3171,4965};
    float b[7];
    float c[7];
    float d=0;
    int f=0;
    int e[7];
    int i,j;
    for (i=0;i<7;i++){
        b[i] = a[i]/28709;
        c[i] = b[i]*3589;
        e[i] = (int)(c[i]+0.5)>(int)c[i]?(int)c[i]+1:(int)c[i];
        printf("%5f\n",c[i]);
        printf("\n");
        printf("%d\n",e[i]);
        printf("\n");
    }
    for (j=0;j<7;j++){
       d += c[j];
       f += e[j];

    }
    printf("浮点数和为:%f\n",d);
    printf("整数和为:%d\n",f);
    return 0;
}
