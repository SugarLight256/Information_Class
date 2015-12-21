#include <stdio.h>
#define NUM 100

int main(){
	int num[NUM];
	int i,j;
	for(i=1; i<=NUM; i++){
		num[i-1]=0;
		for(j=i; j>0; j--){
			if(i%j==0){
				num[i-1]++;
			}
		}
	}
	for(i=NUM; i>0; i--){
		if(num[i-1]==2){
			printf("%d\n", i);
		}
	}
	return 0;
}
