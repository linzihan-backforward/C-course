/*��дһ����������n���������������������ԭ�����������п�ѡ����-d�����������в���-dʱ���ݼ�˳������
���򰴵���˳������Ҫ�������㷨����ɺ���������ָ������ָ��ʹ�ú���ʵ�ֵ�����ݼ�����
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
int n,a[100];
/********************************************
�������ܣ����������� 
���������
         int *a��*b��ָ��Ҫ����������ָ�� 
�����������
�� �� ֵ����
********************************************/
void swap(int *a,int *b){
	int t=*a;
	*a=*b;
	*b=t;
}
/********************************************
�������ܣ���ָ���������� 
���������
         int *b��Ҫ���������
		 int flag ���ж��������͵Ĳ��� 
�����������
�� �� ֵ����
********************************************/
void sort(int *b,int flag){
	if(flag){
		for(int i=0;i<n;i++)
			for(int j=i+1;j<n;j++)
				if(b[i]<b[j]) swap(&b[i],&b[j]);
	}
	else for(int i=0;i<n;i++)
			for(int j=i+1;j<n;j++)
				if(b[i]>b[j]) swap(&b[i],&b[j]);
}
int main(int argc,char *argv[]){
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	void (*p)(int *b,int x);	
	if(argc>1&&strcmp(argv[1],"-d"))//�ж��Ƿ���յ�-d���� 
		p(a,1);
	else p(a,0);	
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");	
	return 0;
} 
