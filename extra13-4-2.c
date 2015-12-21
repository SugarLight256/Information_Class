#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define X 16
#define Y 16
#define BOOL int
#define TRUE 1
#define FALSE 0

typedef struct Wall{
	int x,y;
	BOOL active;
}_Wall;

void walling(int map[X][Y], int walls[X*Y], int *wallCount);

void newWall(_Wall wall[X*Y], int x, int y);

void output_map(int map[X][Y]);

int main(){
	int map[X][Y];
	int x, y, i;
	int walls[X*Y];//�쐬�����ǂ̍��W���X�g(x+y*Y)
	int wallCount=0;//�쐬�����ǂ̐�
	unsigned int seed;


	/*printf("�D���Ȑ�������͂��Ă�������(���̒l�ɂ���Ė��H�𐶐����܂�)\n");
	scanf("%d",&seed);*///seed�Ƃ��ē������H�𐶐��\�ɂ���@�\
	seed = (unsigned)time(NULL);
	srand(seed);

	for(x=0; x<X; x++){
		for(y=0; y<Y; y++){
			if((x==X-1) || (x==0) || (y==Y-1) || (y==0)){
				map[x][y]=-1;
			}else{
				map[x][y]= 0;
			}
		}
	}
	x = rand() % (X - 2) + 1;
	y = rand() % (Y - 2) + 1;
	walls[0] = x + y*Y;
	wallCount++;
	map[x][y] = -1;

	walling(map, walls, &wallCount);

	output_map(map);
	return 0;
}

void walling(int map[X][Y], int walls[X*Y], int *wallCount){

}

void newWall(_Wall wall[X*Y], int x, int y){
	int i;
	for(i=0; i<X*Y; i++){
		if(wall[i].active == FALSE){
			wall[i].x = x;
			wall[i].y = y;
			wall[i].active = TRUE;
			return;
		}
	}
}

BOOL canMake(){//�ǂ����邩�ǂ���
	return TRUE;
}

void output_map(int map[X][Y]){
	int x,y;
	for(y = 0; y<X; y++){
		for(x = 0; x<Y; x++){
			if(map[x][y] == -1){
				printf("��");
			}else if(map[x][y] == 0){
				printf("��");
			}
			else {
				printf("as");
			}
		}
		putchar('\n');
	}
}
