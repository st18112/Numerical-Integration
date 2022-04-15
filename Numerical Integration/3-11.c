#include<stdio.h>
#define f(x) 4 / (1+(x)*(x))

int main(void){
	float a = 0.0;	
	float b = 1.0;
	float sum1,sum2,sum = 0.0;	
	int n,i;	
	float h;	
	float x;

	printf("分割数nを入力: ");
	scanf("%d", &n);

    sum = f(a) + f(b);
	h = (b-a) / n;
	
	i = 1;
	for(x = a + h; x < b; x = x + h){
		if(i % 3 == 0){
			sum1 = sum1 + f(x);
		}else{
			sum2 = sum2 + f(x);
		}
		i++;
	}
    sum += sum1 * 2.0;
    sum += sum2 * 3.0;
	sum = sum * (3*h/8.0);
	printf("分割幅%dによる解: %.8f\n", n, sum);

	return(0);

}
