/*��дһ�����򣬴��ն�����һ���ַ���������ַ�ʱʮ���������֣����������Ӧ��������������������ַ��롣
ע��ʮ�������ַ���0~9��a~f��A~F��
���룺��һ����������N����ʾ������������������N������������
�����ÿ�������Ӧһ�����
��������5
A
b
9
m
f
�������
10
11
9
109
15
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
int cases;
char c;
int main(){
	scanf("%d",&cases);
	while(cases--){
		getchar(); 
		scanf("%c",&c);
		if(c>='0'&&c<='9'){
			printf("%d\n",c-'0');
			continue;
		}
		if(c>='A'&&c<='F'){
			printf("%d\n",c-'A'+10);
			continue;
		}
		if(c>='a'&&c<='f'){
			printf("%d\n",c-'a'+10);
			continue;
		}
		printf("%d\n",c);
	}
	return 0;
} 
