/*�õݹ�ʵ�ֱ�׼�⺯��strlen(s)�������øú��������ַ������ȡ�
���룺��һ��Ϊ������N����ʾ��N�����룬��������N�У�ÿ��Ϊһ���ַ�����
�����ÿ�������Ӧһ�����������ַ����ĳ��ȡ���������
5
hello  world !
hello world    
come    on
o
on
�������
14
15
10
1
2
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;

int n;
char c;
int main(){
	scanf("%d",&n);
	getchar();
	int cn1=0;
	for(int i=1;i<=n;i++){
		cn1=0;
		while(scanf("%c",&c)){
			if(c=='\n') {
				printf("%d\n",cn1);
				break;
			}
			cn1++;	
		}
		
		
	}
	
	
	
} 
