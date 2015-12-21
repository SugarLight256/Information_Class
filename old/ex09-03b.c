#include <stdio.h>

int main(){
	int n, m, s, l, r, roop=0;
	scanf("%d",&n);
	scanf("%d",&m);
	if(n>=m){
		l=n;
		s=m;
	}else{
		l=m;
		s=n;
	}
	while(s!=0){
		r=l%s;
		l=s;
		s=r;
		roop++;
	}
	printf("GCM:%d roop:%d\n", l, roop);
	return 0;
}
