#include <stdio.h>

int main(){
	int i=1,n;
	scanf("%d",&n);
	do{
		if(n<=0)break;
		if(i%5 == 0){
			putchar('+');
		}else{
			putchar('-');
		}
		if(i%10 == 0){
			putchar('\n');
		}
		i++;
	}while(i<=n);
	return 0;
}
