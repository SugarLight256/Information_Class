#include <stdio.h>

void SUM(int l1, int l2, double per);

static double K[4][3];

int main(){
	int i,j;
	double x,y,z;

	
			printf("asd");
	for(i=0; i<3; i++){
		for(j=0; j<4; j++){
			scanf("%lf",&K[j][i]);
		}
	}


	if(K[0][1] != 0){
		SUM(0,1,K[0][1]/K[0][0] * -1);
	}
	if(K[0][2] != 0){
		SUM(0,2,K[0][2]/K[0][0] * -1);
	}
	if(K[1][2] != 0){
		SUM(1,2,K[1][2]/K[1][1] * -1);
	}

	z = K[3][2] / K[2][2];
	y = (K[3][1] - K[2][1]*z) / K [1][1];
	z = (K[3][0] - K[2][0]*x - K[1][0]*y) / K[0][0];
	printf("x:%f y:%f z:%f\n",x,y,z);
	
	return 0;
}

void SUM(int l1, int l2, double per){
	int i;
	for(i=0; i<4; i++){
		K[i][l2] += K[i][l1]*per;
		K[i][l1]  = 0;
	}
}
