#include <stdio.h>

int main(){
	int n,i=1;
	for(scanf("%d",&n),printf("\n") ; i<=n ; i++){
		if(n%i == 0){
			printf("%d\n",i);
		}
	}
	return 0;
}
