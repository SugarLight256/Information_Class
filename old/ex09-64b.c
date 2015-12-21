#include <stdio.h>
#define PI 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825

int main(){
	int roop=0,i;
	double per=100, sum;
	for(i=1 ; per>0.001 ; i++){
		sum += 1.0/((4*i-3) * (4*i-1));
		printf("%lf\n",1.0/((4*i-3) * (4*i-1)));
		per = (sum*800.0)/PI;
	}
	printf("%d %lf",roop,sum);
	return 0;
}
