#include <stdio.h>
#define NUM 50

int main(){
	int p[NUM];
	int p2[NUM];
	int i, j, tmp, m, b_comp=0, b_chan=0, s_comp=0, s_chan=0;
	for(i=0; i<NUM; i++){
		scanf("%d",&p[i]);
		p2[i] = p[i];
	}
	for(i=0; i<NUM-1; i++){
		for(j=NUM-1; j>i; j--){
			if(p[j-1] > p[j]){
				tmp = p[j-1];
				p[j-1] = p[j];
				p[j] = tmp;
				b_chan++;
			}
			b_comp++;
		}
	}
	for(i=0; i<NUM-1; i++){
		m=i;
		for(j=i+1; j<NUM; j++){
			if(p2[m] > p2[j]){
				m=j;
			}
			s_comp++;
		}
		tmp = p2[i];
		p2[i] = p2[m];
		p2[m] = tmp;
		s_chan++;
	}
	printf("バブル\n");
	for(i=0; i<NUM; i++){
		printf("%d\n",p[i]);
	}
	printf("選択整列\n");
	for(i=0; i<NUM; i++){
		printf("%d\n",p2[i]);
	}
	printf("バブル:比較%d 交換%d\n選択整列:比較%d 交換%d\n", b_comp, b_chan, s_comp, s_chan);
	return 0;
}
