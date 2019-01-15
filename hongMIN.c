/*************************************************************************
	> File Name: hongMIN.c
	> Author: 
	> Mail: 
	> Created Time: 2018年10月04日 星期四 21时37分54秒
 ************************************************************************/

#include<stdio.h>
#define MIN(A,B) ((A)<=(B)?(A):(B))
int main(){
    int a;
    int b=1,c=2;
    a=MIN(b,c);
    printf("%d\n",a);
    return 0;
}
