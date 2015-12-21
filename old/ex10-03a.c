#include <stdio.h>
#define NUM 100

int main(){
	int num[NUM];
	int i,j;
	for(i = 1; i<=NUM; i++){
		num[i-1]=0;
		for(j=i; j>0; j--){
			if(i%j==0){
				num[i-1]++;
			}
		}
	}
	for(i=0; i<NUM; i++){
		printf("%d:%d\n", i+1, num[i]);
	}
	return 0;
}
