#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand((unsigned)time(NULL));
	printf("%d",rand()%1000000+1);
	return 0;
}
