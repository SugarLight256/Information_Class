#include <stdio.h>

int main(){
	int a, b, c, i, out, roop=0;
	scanf("%d", &a);
	scanf("%d", &b);
	if(a>=b){
		c=b;
	}else{
		c=a;
	}
	for(i=1 ; i<=c ;i++){
		if(a%i==0 && b%i==0){
			out = i;
		}
		roop++;
	}
	printf("GCM:%d roop:%d\n",out,roop);
	return 0;
}
