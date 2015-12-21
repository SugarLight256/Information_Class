#include <stdio.h>
#include <limits.h>

int main(){
	unsigned int f=1UL;
	int i=2;
	do{
		f *= i;
		printf("%d! = %ld\n", i, f);
		i++;
	}while(i <= UINT_MAX / f);
	return 0;
}
