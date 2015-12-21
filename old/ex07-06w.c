#include <stdio.h>

int main(){
	int i=1,n;
	scanf("%d",&n);
	while(i<=n){
		if(i%5 == 0){
			putchar('+');
		}else{
			putchar('-');
		}
		if(i%10 == 0){
			putchar('\n');
		}
		i++;
	}
	return 0;
}
