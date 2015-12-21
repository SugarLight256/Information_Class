#include <stdio.h>

int main(){
	int n=1;
	while(n>0){

		scanf("%d",&n);
		if(n>0){
			if(n%2==0){
				printf("Even\n");
			}else{
				printf("Odd\n");
			}
		}
	}

	return 0;
}
