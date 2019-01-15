/*************************************************************************
	> File Name: JS4.c
	> Author: 
	> Mail: 
	> Created Time: 2018年11月05日 星期一 11时22分44秒
    > Use: 比率减量
 ************************************************************************/

#include<stdio.h>
int main(){

    float test[6]={1.0,6.3,3.5,15.3,1.6,11.2};
    float total=0;
    double ratio[6];
    double reduce; // 输出该项减少量
    double result[6];// 输出该项最终结果
    int i=0;
    double less; // 百分比减少
    double begin=61.1;
    double end=67.74;// 修改变此处来计算百分比减少
    int j;
    less = end - begin;
    for(i;i<6;i++){
        total += test[i]; //计算剩余项的和
    }
    printf("其余项数和为%f", total);
    printf("结果为:\n");
    for(j=0;j<6;j++){ // 循环计算该项的结果
        ratio[i] = (test[i] * 1.00000000 )/ total; //该项减少的比率
        reduce = less * ratio[i]; // less是总共减少， reduce是该项减少
        result[i] = test[i] - reduce;
        printf("%10f\n", result[i]);
    }
    return 0;
}
