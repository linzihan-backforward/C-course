/*��2��	��дһ������, ��
����Ҫ���ǣ�����һ���������������ڴ��ж����Ʊ�ʾ��ÿһλת����Ϊ��Ӧ�������ַ���
��ŵ�һ���ַ������У�Ȼ������������Ķ����Ʊ�ʾ��
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
int array[35],n,a;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a);
		if(sizeof(int)==4){
			unsigned int temp=(unsigned)a;
			for(int j=32;j>=1;j--){
				array[j]=temp&1;
				temp>>=1;
			}
			for(int j=1;j<=32;j++)
				printf("%d",array[j]);
			printf("\n");	
				
		}
		else{
			unsigned int temp=(unsigned)a;
			for(int j=16;j>=1;j--){
				array[j]=temp&1;
				temp>>=1;
			}
			for(int j=1;j<=16;j++)
				printf("%d",array[j]);
			printf("\n");
		}		
	}
} 

