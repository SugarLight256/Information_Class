#include <stdio.h>
#define NUM 50

int main(){
	int p[NUM];
	int i, j, tmp, change=0, comp=0, chan=0, last_i;
	for(i=0; i<NUM; i++){
		scanf("%d",&p[i]);
	}
	printf("Sorting Now...\n");
	for(i=0; i<NUM-1; i++){
		last_i=i;
		for(j=NUM-1; j>last_i; j--){
			if(p[j-1] > p[j]){
				tmp = p[j-1];
				p[j-1] = p[j];
				p[j] = tmp;
				change++;
				chan++;
				last_i=j;
			}
			comp++;
		}
		if(change==0){
			printf("break!!\n");
			break;
		}
		change=0;
	}
	for(i=0; i<NUM; i++){
		printf("%d\n",p[i]);
	}
	printf("”äŠr%d ŒðŠ·%d\n", comp, chan);
	return 0;
}
