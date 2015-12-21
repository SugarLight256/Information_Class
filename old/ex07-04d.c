#include <stdio.h>

int main(){
	int i;
	scanf("%d",&i);
	do{
		if(i<=0)break;
		putchar('-');
		i--;
	}while(i>0);
	return 0;
}