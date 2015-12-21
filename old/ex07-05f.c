#include <stdio.h>

int main(){
	int i=1,n;
	for(scanf("%d",&n) ; i<=n ; i++){
		if(i%5 == 0){
			putchar('+');
		}else{
			putchar('-');
		}
	}
	return 0;
}
