#include <stdio.h>
#include <math.h>
#define NUM 9

int main(){
	int i, sum, min=0, max=0, maxNum=0;
	int p[NUM];
	double ave, dev, sum2, tmp, stave;
	for(sum = i = 0; i<NUM; i++){
		scanf("%d",&p[i]);
		sum += p[i];
		if(i==0){
			min = p[i];
			max = p[i];
			maxNum = i+1;
		}
		if(p[i] >= max){
			max = p[i];
			maxNum = i+1;
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
	printf("ave:%f\ndev:%f\n標準偏差:%f\n最高点名簿:%d\n最高点:%d\n最低点:%d\n",ave, dev, stave, maxNum, max, min);
	return 0;
}
