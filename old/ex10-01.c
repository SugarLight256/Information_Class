#include <stdio.h>
#define NUM 10

int main(){
	int i,sum;
	int p[NUM];
	double ave, dev, sum2, tmp;
	for(sum = i = 0; i<NUM; i++){
		scanf("%d",&p[i]);
		sum += p[i];
	}
	ave = (double)sum/NUM;
	for(sum2 = i = 0; i<NUM; i++){
		tmp = p[i] - ave;
		sum2 += tmp*tmp;
	}
	dev = sum2/NUM;
	printf("%f,%f\n",ave, dev);
	return 0;
}
