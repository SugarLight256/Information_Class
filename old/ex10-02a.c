#include <stdio.h>
#include <math.h>
#define NUM 9

int main(){
	int i,sum;
	int p[NUM];
	double ave, dev, sum2, tmp, stave;
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
	stave = sqrt(dev);
	printf("%f,%f,%f\n",ave, dev, stave);
	return 0;
}
