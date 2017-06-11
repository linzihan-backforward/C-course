/*（2）	编写一个实现八皇后问题的程序，
即：在8*8方格国际象棋棋盘上放置8个皇后，任意两个皇后不能位于同一行、同一列或同一斜线上（正斜线或反斜线），
并输出所有可能的放法。
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
#define N 8
int map[10][10];
int ans[10][10];
int ansnum;
int cnt;
void placequeen(int x,int y,int num){
	ans[x][y]=num;
	for(int i=1;i<=N;i++)
		for(int j=1;j<=N;j++)
			if(abs(i-x)==abs(j-y))
				if(map[i][j]==0) map[i][j]=num;
	for(int i=1;i<=N;i++)
		if(!map[i][y]) map[i][y]=num;
	for(int j=1;j<=N;j++)
		if(!map[x][j])	map[x][j]=num;			
}
void clearqueen(int x,int y,int num){
	ans[x][y]=0;
	for(int i=1;i<=N;i++)
		for(int j=1;j<=N;j++)
			if(abs(i-x)==abs(j-y))
				if(map[i][j]==num) map[i][j]=0;
	for(int i=1;i<=N;i++)
		if(map[i][y]==num) map[i][y]=0;
	for(int j=1;j<=N;j++)
		if(map[x][j]==num)	map[x][j]=0;			
}
void printans(){
	printf("This is the %d answer:\n",cnt);
	for(int i=1;i<=N;i++){
		for(int j=1;j<=N;j++)
			if(ans[i][j]==0) printf("*");
			else printf("%d",ans[i][j]);
		printf("\n");	
	}	
	printf("\n");
}
void eightqueen(int have_done){
	if(have_done==N){
		cnt++;
		printans();
		return ;
	}
	for(int i=1;i<=N;i++)
		if(map[have_done+1][i]==0){
			placequeen(have_done+1,i,have_done+1);
			eightqueen(have_done+1);
			clearqueen(have_done+1,i,have_done+1);
		}
}
int main(){
	eightqueen(0);
	return 0;
} 
