/*һ�������ͱ���ռ4���ֽڣ�����ÿ���ֽ��ֳַɸ�4λ�͵�4λ��
�ԴӸó����ͱ����ĸ��ֽڿ�ʼ������ȡ��ÿ���ֽڵĸ�4λ�͵�4λ���������ַ�����ʽ������ʾ��*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
int n,a[30];
void sol(unsigned int x){
	unsigned mask=0xf0000000;
	//printf("%x\n",mask);
	printf("%X ",(mask&x)>>28);
	for(int i=1;i<=6;i++){
		mask>>=4;
		printf("%X ",(mask&x)>>(28-4*i));
	}
	mask>>=4;
	printf("%X\n",mask&x);
}
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",a+i);
	for(int i=1;i<=n;i++)
		sol((unsigned)*(a+i));
	return 0;
}
