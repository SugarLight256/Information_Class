#include <stdio.h>
#include <limits.h>

int main(){
	unsigned long f=1UL;
	int i=2;
	do{
		f *= i;
		printf("%d! = %ld\n", i, f);
		i++;
	}while(i <= ULONG_MAX / f);
	return 0;
}
