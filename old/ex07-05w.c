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
		i++;
	}
	return 0;
}
