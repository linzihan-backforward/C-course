/*��1��	��дһ������
�����޷��Ŷ�����x�����0 �ܣ�� 15, 1 �� ��� 16-��,
ȡ��x�ӵڣ�λ��ʼ����ģ�λ�������������Ϊ0��15������ʹ������ˣ���15λ�����롣
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
int cases;
unsigned short x;
int m,n;
int main(){
	scanf("%d",&cases);
	while(cases--){
		scanf("%hu%d%d",&x,&m,&n);
		x>>=m;
		x<<=(16-n);
		printf("%hu\n",x);
	}
	
	
	return 0;
} 

