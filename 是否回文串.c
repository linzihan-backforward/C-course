/*��дһ������һ�����Ƿ�Ϊ���ĵĵݹ麯�����ǻ��ģ�����1�����ǣ�����0��
�������������øú������ж�������ַ����Ƿ�Ϊ���Ĵ��������������ͷ�����һ���Ĵ���
���룺��һ��Ϊ������N����ʾ��N���������ݣ�ÿ�������Ӧһ�У�Ϊһ���ַ�����
�����ÿ�������Ӧһ���������������ַ����ǻ����������Yes!�������������No�� 
ע�⣺�õݹ飬������ δͨ�� ����

��������
3
abccccbccccba
12345654232
hijkkjih
�������
Yes!
No!
Yes!
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
int n;
char a[100];
int gets(){
	int t=0;
	while(scanf("%c",&a[t])){
		if(a[t]=='\n') break;
		t++;
	}	 
	//printf("%c",a[t-1]);
	//printf("%d\n",t-1);
	return t-1;
}
int judge(char a[],int begin,int end){
	if(begin>=end) return 1;
	if(a[begin]!=a[end]) return 0;
	return judge(a,begin+1,end-1);
}
int main(){
	scanf("%d",&n);
	getchar();
	for(int i=1;i<=n;i++){
		int len=gets();	
		if(judge(a,0,len)) printf("Yes!\n");
		else printf("No!\n");

	
	} return 0;
}
