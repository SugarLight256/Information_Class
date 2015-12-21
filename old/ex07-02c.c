#include <stdio.h>

int main(){
	int n=1;
	while(n>0){
		scanf("%d",&n);
		if(n<=0)continue;
		if(n%2 == 0){
			printf("even\n");
		}else{
			printf("odd\n");
		}
	}

	return 0;
}
