#include <stdio.h>
#define PI 3.1415926535897932384626433832795

int main(){
	int roop=0, i;
	double sum=0, k;
	for(i=1 ; /*Break��12�s��*/ ; i++){
		k = 1.0 / ((4*i-3.0)*(4*i-1.0));
		sum += k;
		roop++;
		//printf("%f\n", sum);
		if(sum*8 > PI - PI*0.00001 && sum*8 < PI + PI*0.00001)break;//Break�_
	}
	printf("b:���[�v:%d Applox_Value:%.15lf\n", roop, sum*8);
	return 0;
}
