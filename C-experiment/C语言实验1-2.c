/*��2��	IP��ַͨ����4���þ��ָ���С��������32.55.1.102����Щ��ַ�ڻ��������޷��ų����α�ʾ��
��дһ�������Ի����洢����ʽ����һ��32λ�Ļ�����IP��ַ���������룬Ȼ���ó����ľ��ָ���4���ֵ���ʽ�����
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
int cases;
unsigned int n;
int main(){
	scanf("%d",&cases);
	while(cases--){
		scanf("%u",&n);
		int A=0x000000ff;
		printf("%d.",(A&n));
		A=0x0000ff00;
		printf("%d.",(A&n)>>8);
		A=0x00ff0000;
		printf("%d.",(A&n)>>16);
		A=0xff000000;
		printf("%d\n",(A&n)>>24);
	}
} 
