#include <stdio.h>
#define PI 3.1415926535897932384626433832795

int main(){
	int roop=0, i;
	double sum=36.0/35, k;
	for(i=2 ; ; i++){
		k = (6.0*i*6*i) / ((6*i-1)*(6*i+1));
		sum *= k;
		//printf("%lf\n",sum);
		roop++;
		if(sum*3 > PI - PI*0.00001)break;
	}
	printf("d:ƒ‹[ƒv:%d Applox_Value:%.15lf\n", roop, sum*3);
	return 0;
}
