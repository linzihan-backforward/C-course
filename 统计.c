/*��дһ������ͳ������������ÿ�������ַ���Ӣ���ַ��������ַ����ֵĴ���
��Ҫ��������Ԫ����Ϊÿ�������ַ���Ӣ���ַ����������ַ����ֵĴ����ļ���������
���룺һ�����֣���#����;
������������������
��������123 the Children are so clever!#
�������
Number 0: 0
Number 1: 1
Number 2: 1
Number 3: 1
Number 4: 0
Number 5: 0
Number 6: 0
Number 7: 0
Number 8: 0
Number 9: 0
characters: 22
other: 9
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;

char c;
int cnt[20];
int main(){
	while(scanf("%c",&c)){
		if(c=='#') break;
		if(c>='0'&&c<='9') cnt[c-'0']++;
		else if((c>='a'&&c<='z')||(c>='A'&&c<='Z')) cnt[10]++;
		else cnt[11]++;
	}
	for(int i=0;i<=11;i++){
		if(i==10){
			printf("characters: %d\n",cnt[i]);
			continue;
		}
		else if(i==11){
			printf("other: %d\n",cnt[i]);
			continue;
		}
		printf("Number %d: %d\n",i,cnt[i]);
	}
	return 0;
} 

