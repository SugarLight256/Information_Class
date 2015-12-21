#include <stdio.h>
#include <math.h>
#define NUM 9

int main(){
	int i, sum, min=0, max=0;
	int p[NUM];
	double ave, dev, sum2, tmp, stave;
	for(sum = i = 0; i<NUM; i++){
		scanf("%d",&p[i]);
		sum += p[i];
		if(i==0){
			min = p[i];
			max = p[i];
		}
		if(p[i] >= max){
			max = p[i];
		}else if(p[i] <= min){
			min = p[i];
		}
	}
	ave = (double)sum/NUM;
	for(sum2 = i = 0; i<NUM; i++){
		tmp = p[i] - ave;
		sum2 += tmp*tmp;
	}
	dev = sum2/NUM;
	stave = sqrt(dev);
	printf("ave:%f\ndev:%f\n•W€•Î·:%f\nÅ‚“_:%d\nÅ’á“_:%d\n",ave, dev, stave, max, min);
	return 0;
}
