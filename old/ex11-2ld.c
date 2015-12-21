#include <stdio.h>

int main(){
	long double val, eps=1.0L;
	do{
		eps *= 0.5L;
		val = 1.0L + eps;
	}while(val > 1.0L);
	eps *= 2.0L;
	printf("%.20Le\n", eps);
	return 0;
}
