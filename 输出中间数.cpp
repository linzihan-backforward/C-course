/*����A,B,C����ѧ���Ŀ��Է�������Ϊ����������Χ0~100��������������е��Ǹ�ѧ�������֣�A��B��C���Լ����Է�����
ע����A,B,C�д��ڷ�����ȵ����ʱ��ֻ�����һ�����������A��B��C������˳�����Ψһ�����
�����������������ݡ�
�����ʽ˵����ÿ�������������ռһ�У������������������ֱ����A��B��C�Ŀ��Է��������ļ�β���Խ�����
�����ʽ˵����ÿ�����������������ռһ�С�
��������
90 90 90
60 88 88
18 95 47
�������
A:90
B:88
C:47
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
struct person{
	int score;
	char name;
}in[3]; 
int cmp(const void *a,const void *b){
	if((*(struct person *)a).score!=(*(struct person *)b).score) return (*(struct person *)a).score<(*(struct person *)b).score;
	else return (*(struct person *)a).name>(*(struct person *)b).name; 
}
int main(){
	while(scanf("%d",&in[0].score)!=EOF){
		scanf("%d%d",&in[1].score,&in[2].score);
		in[0].name='A';in[1].name='B';in[2].name='C';
		qsort(in,3,sizeof(in[0]),cmp);	
		if(in[0].score==in[1].score) printf("%c:%d\n",in[0].name,in[0].score);
		else printf("%c:%d\n",in[1].name,in[1].score);
	}
	
	return 0;
} 
