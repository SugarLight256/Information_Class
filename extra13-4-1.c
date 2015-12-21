/*無駄な処理等あると思いますが、ヒントを見ずに作成しました。*/
#include <stdio.h>
#include <windows.h>

#define X 16
#define Y 16

typedef struct Player{
	int x,y;
	int walk;
}_Player;

void input_map(int map[X][Y]);//16x16迷路の入力処理

int search(int map[X][Y], int start, int goal);//最短経路探索

int newPlayer(_Player player[10], int x, int y, int walk);//新しいPlayerの構造体の初期化

void map_clean(int map[X][Y], int walk, int goal);

void output_map(int map[X][Y]);//

int main(){
	int map[X][Y]={0};
	int start,goal=-1;
	int i,min_walk;
	int x,y;

	input_map(map);

	for(i=0; i<X*Y; i++){
		if(map[i%X][i/Y] == 0 && (i%X==0 || i%X==15 || i/Y==0 || i/Y==15)){
			if(goal==-1)goal = i;
			else start = i;
		}
	}
	map[start%X][start/Y]=1;//スタート位置は一歩目
	min_walk = search(map, start, goal);
	map_clean(map, min_walk, goal);
	output_map(map);
	return 0;
}

void input_map(int map[X][Y]){
	int y,x,i;
	char tmp[20];
	printf("壁を1 通路を0として一行ずつ入力してください\n");
	for(y=0; y<Y; y++){
		scanf("%s",&tmp);
		for(x=0; x<X; x++){
			if(tmp[x] == '1'){
				map[x][y] = -1;
			}else if(tmp[x] == '0'){
				map[x][y] = 0;
			}else{
				x--;
			}
		}
	}
}

int search(int map[X][Y], int start, int goal){
	_Player player[10];
	int w,j,x,y;
	for(j=0; j<10; j++){
		player[j].walk=-1;
	}
	newPlayer(player, start%X, start/Y, 1);
	for(w=1;;w++){
		for(j=0; j<10; j++){
			if(player[j].walk == w){
				for(x=2; x>=-1; x--){
					if(map[player[j].x+(x%2)][player[j].y+((x-1)%2)] == 0){
						if(player[j].x+(x%2)>=0 || player[j].x+(x%2)<=15 || player[j].y+((x-1)%2)>=0 || player[j].y+((x-1)%2)<=15){
							newPlayer(player, player[j].x+x%2, player[j].y+(x-1)%2, w+1);
							map[player[j].x+x%2][player[j].y+(x-1)%2] = w+1;
							if((player[j].x+x%2)+(player[j].y+(x-1)%2)*Y == goal){
								return w+1;
							}
							

						}
					}
				}
				player[j].walk = -1;
			}
		}
		//output_map(map);//観賞用
		//Sleep(300);
	}
}

int newPlayer(_Player player[10], int x, int y, int walk){
	int i;
	for(i=0; i<10; i++){
		if(player[i].walk <= -1){
			player[i].walk = walk;
			player[i].x = x;
			player[i].y = y;
			return i;
		}
	}
	printf("Player object: out of range\n");
	return -1;
}

void map_clean(int map[X][Y], int walk, int goal){
	int x,y,i;
	x = goal%X;
	y = goal/Y;
	map[x][y] = -2;
	while(walk > 1){
		for(i=2; i>=-1; i--){
			if(map[x+i%2][y+(i-1)%2]==walk-1){
				map[x+i%2][y+(i-1)%2] = -2;
				x += i%2;
				y += (i-1)%2;
				walk--;
			}
		}
		//output_map(map);//観賞用
		//Sleep(100);
	}
}

void output_map(int map[X][Y]){
	int x,y;
	for(y=0; y<Y; y++){
		for(x=0; x<X; x++){
			switch(map[x][y]){
			case -2:
				printf("◆");
				break;
			case -1:
				printf("■");
				break;
			case 0:
				printf("  ");
				break;
			default:
				//printf("%2d",map[x][y]);//観賞用
				printf("  ");
			}
		}
		putchar('\n');
	}
	putchar('\n');
}
