#include <stdio.h>
#define PI 3.1415926535897932384626433832795

int main(){
	int roop=0,i;
	double sum=4.0/3,k;

	for(i=2 ;  ;i++){
		k=((2.0*i) * (2*i)) / ((2.0*i-1)*(2*i+1));
		sum = k*sum;
		roop++;
		//printf("%lf\n",sum);
		if(sum*2 > PI - PI*0.00001){
			break;
		}
	}
	printf("c:ƒ‹[ƒv:%d Applox_Value:%.15lf\n", roop, sum*2);
	return 0;
}
