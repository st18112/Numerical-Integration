#include<stdio.h> 
#include<stdlib.h> 
#define NUM 10000000 /* NUM 個の点を乱数をもとに一様にばらまく */ 
double rnd(void){ 
    return((double)rand()/RAND_MAX); /* 0 以上 1 以下の値を発生させ返す */ 
} 
int main(void){ 
    double x,y,pi; 
    int i,in=0; 
    for(i=0;i<NUM;i++){ 
        x=rnd(); /* ばらまく点の x 座標 */ 
        y=rnd(); /* ばらまく点の y 座標 */ 
    if(x*x+y*y<=1) in++; /* 原点が中心で、第 1 象限にある 1/4 円に入った点の個数を数える */ 
    } 
    
pi=(double)4*in/NUM; 
printf("pi=%f\n",pi); 

return(0); 
} 
