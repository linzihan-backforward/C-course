/*��3��	��дһ������, �书��Ҫ���ǣ�����n��ѧ����������C���Կγ̵ĳɼ���
���ɼ����Ӹߵ��͵Ĵ�����������ͬʱ����Ӧ��������������ѧ����������C���Կγ̵ĳɼ���
Ȼ������һ��C���Կγ̳ɼ�ֵ���ö��ֲ��ҽ�����������
�����ҵ��иóɼ�������óɼ�ͬѧ��������C���Կγ̵ĳɼ������������ʾ"not found!"��
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
//#include<algorithm>
//using namespace std;
int n,m;
struct person{
	char name[21];
	int score;
}student[102];
int cmp(const void* a,const void * b){
	return (*(struct person*)a).score<(*(struct person*)b).score;
}
int find(int head,int last,int val){
	if(head>last) return -1;
	int mid=(head+last)/2;
	if(student[mid].score>val) return find(mid+1,last,val);
	if(student[mid].score<val) return find(head,mid-1,val);
	return mid;
}
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%s%d",student[i].name,&student[i].score); 
	qsort(student,n,sizeof(student[0]),cmp);
	for(int i=0;i<n;i++)
		printf("%-20s %d\n",student[i].name,student[i].score);
	printf("\n");	
	scanf("%d",&m);
	for(int i=1;i<=m;i++){
		int a;
		scanf("%d",&a);
		if((a=find(0,n-1,a))!=-1) printf("%-20s %d\n",student[a].name,student[a].score);
		else printf("Not found!\n");
	}	
	return 0;
} 
