/*���ն���������������ַ���ʽ����ö������ĸ��ֽں͵��ֽڡ�

���룺��һ��Ϊ������N����ʾ�����������������µ�N���ǳ�����Ҫ�����N����������  

�������ÿ�������Ӧһ��������ߡ����ֽ��ö��š�,��������
��������
4
24929
8554
19567
9523
�������
a,a
!,j
L,o
%,3
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;

int cases;
unsigned short n;
int main(){
	scanf("%d",&cases); 
	while(cases--){
		scanf("%hu",&n);	
		printf("%c,%c\n",(n>>8),(n&0x00ff));
	}
	return 0;
}
