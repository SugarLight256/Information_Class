#include <stdio.h>
#include <float.h>

int main(){
	float f=1.0F;
	int i=2;
	do{
		f *= i;
		printf("%d! = %.0f\n", i, f);
		i++;
	}while(i <= FLT_MAX / f);
	return 0;
}
