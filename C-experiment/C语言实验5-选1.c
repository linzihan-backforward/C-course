/*��д����strnins��s��t��n�����书���ǣ��ɽ��ַ�����t�е��ַ������뵽�ַ�����s���ַ����ĵ�n���ַ��ĺ��档*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
char a[100],b[100];
int n;
void strnins(char s[],char t[] ,int n){
	int len=strlen(t);
	if(n>strlen(s)){
		s[strlen(s)]=' ';
		int i;
		for(i=n;i<=n+len;i++)
			s[i]=t[i];
		s[i]='\0';
		return ;	
	}
	for(int i=n;i<strlen(s);i++)
		s[i+len]=s[i];
	for(int i=0;i<len;i++)
		s[n+i]=t[i];	
}
int main(){
	scanf("%d",&n);
	scanf("%s%s",a,b);
	strnins(a,b,n);
	printf("%s\n",a);
	return 0;
} 
