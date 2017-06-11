/*��2��	��дһ��ʵ�ְ˻ʺ�����ĳ���
������8*8����������������Ϸ���8���ʺ����������ʺ���λ��ͬһ�С�ͬһ�л�ͬһб���ϣ���б�߻�б�ߣ���
��������п��ܵķŷ���
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
