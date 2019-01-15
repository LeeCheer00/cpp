/*************************************************************************
	> File Name: JS1.c
	> Author: 
	> Mail: 
	> Created Time: 2018年11月04日 星期日 18时33分42秒
    > Use: 详细计算7种情绪正确数
 ************************************************************************/

#include<stdio.h>
int main(){
    float ratio[]={0.611,0.673,0.495,0.887,0.652,0.832,0.692};
    int num[]={499,55,512,902,604,396,621};
    float haha[7];
    float result[7];
    int R[7];
    int i,j,w;
    float total;
    float Total=0;
    int right[7];//right ratio photos
    float rightratio[7];
    float final;
    for (i=0;i<7;i++) {
        result[i]=ratio[i]*num[i];
        R[i] = (int)(result[i]+0.5)>(int)result[i]?(int)result[i]+1:(int)result[i];
        Total += result[i];
        right[i] =  R[i] + 13;
        haha[i] = (right[i]*1.0000) / num[i];
        rightratio[i] = (right[i]*1.0000) / 3589;
        printf("%d\n", right[i]);

        printf("%f\n",result[i]+13);
    } 
    total = 3589*0.7074;
    printf("%f\n", Total);
    printf("%f\n", total);
    for (j=0;j<7;j++) {

        printf("%2f%\n", rightratio[j]*100);
        final += rightratio[j];
    }
    printf("%2f%\n", final*100);
    printf("比率为:\n");
    for (w=0; w<7; w++) {
        printf("%2f%\n",haha[w]*100) ;
    }
    return 0;

}
