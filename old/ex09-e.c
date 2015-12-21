#include <stdio.h>
#define PI 3.1415926535897932384626433832795

int main(){
	int roop=0, i;
	double sum=1, k;
	for(i=1 ;i<=1000000 ; i++){
		k=1.0/(2*i+1);
		if(i%2==1){
			k *= -1;
		}
		sum += k;
		roop++;
		//printf("%lf\n",sum);
		if(sum*4 > PI - PI*0.00001 && sum*4 < PI + PI*0.00001)break;
	}
	printf("e:ƒ‹[ƒv:%d Applox_Value:%.15lf\n", roop, sum*4);
	return 0;
}
