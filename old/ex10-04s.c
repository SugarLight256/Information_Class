#include <stdio.h>
#define NUM 50

int main(){
	int p[NUM];
	int i, j, tmp, m;
	for(i=0; i<NUM; i++){
		scanf("%d",&p[i]);
	}
	printf("Sorting Now...\n");
	for(i=0; i<NUM-1; i++){
		m=i;
		for(j=i+1; j<NUM; j++){
			if(p[m] > p[j]){
				m=j;
			}
		}
		tmp = p[i];
		p[i] = p[m];
		p[m] = tmp;
	}
	for(j=i=0; i<NUM; i++){
		printf("%d\n",p[i]);
		j++;
	}
	printf("%d\n",j);
	return 0;
}

