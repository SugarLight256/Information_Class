#include <stdio.h>
#define NUM 10

int main(){

	int p[NUM];
	int maxLeft, maxRight, i;
	int mid, left, right, tmp;
	scanf("%d", &maxLeft);
	scanf("%d", &maxRight);
	for(i=0; i<NUM; i++){
		scanf("%d", &p[i]);
	}
	mid = p[(maxLeft + maxRight)/2];
	right = maxRight;
	left = maxLeft;
	printf("\n\n%d,%d,%d\n", mid, p[right], p[left]);
	while(1){
		while(1){
			while(p[right]>mid){
				--right;
			}
			while(p[left]<mid){
				++left;
			}
			if(right<=left){
				break;
			}
			tmp = p[right];
			p[right] = p[left];
			p[left] = tmp;
			right--;
			left++;
		}

	}
	printf("\n\n");
	for(i=0; i<NUM; i++){
		printf("%d\n",p[i]);
	}
	return 0;
}
