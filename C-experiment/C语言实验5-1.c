/*	��дһ������,�Ӽ��̶�ȡ���ݣ���һ��3 4������и�ֵ������ת�þ���Ȼ�����ԭ�����ת�þ���*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;

int matrx[5][5],ans[5][5];
int main(){
	for(int i=1;i<=3;i++)
		for(int j=1;j<=4;j++)
			scanf("%d",&matrx[i][j]);
	for(int i=1;i<=3;i++){
		for(int j=1;j<=4;j++)
			printf("%5d",matrx[i][j]);
		printf("\n");	
	}
	printf("\n");
	for(int i=1;i<=4;i++){
		for(int j=1;j<=3;j++){
			ans[i][j]=matrx[j][i];
			printf("%5d",ans[i][j]);
		}
		printf("\n");	
	}
			
	return 0;
} 
