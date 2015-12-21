#include <stdio.h>
#define T 0.75

int main(){
	int roop=0, i;
	double sum=0;
	for(i=1 ; ; i++){
		sum += 1.0/(i*(i+2.0));
		//printf("%lf\n",sum);
		roop++;
		if(sum > 3.0/4-T*0.00001 && sum < 3.0/4+T*0.00001){
			break;
		}
	}
	printf("a:ƒ‹[ƒv:%d Approx_Value:%.15lf\n", roop, sum);
	return 0;
}
