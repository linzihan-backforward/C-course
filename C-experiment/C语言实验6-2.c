/*���ô�СΪn��ָ������ָ����gets���������n�У�ÿ�в�����80���ַ���
��дһ������������ÿһ���������Ķ���ո��ַ�ѹ��Ϊһ���ո��ַ���
�ڵ��ú��������ѹ���ո��ĸ��У����в��������
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
char s[100][85];
char *p[100];
int n;
void sol(char *x){
	int space_num=0;
	while((*x)!='\n'){
		if((*x)!=' ') {
			space_num=0;
			printf("%c",*x);
		}
		else{
			if(space_num==0){
				space_num++;
				printf("%c",*x);
			}
		}
		x++;
	}
	printf("\n");
}
int main(){
	while(scanf("%d",&n),n){
		getchar();
		for(int i=1;i<=n;i++)
			fgets(s[i],85,stdin);
			
		//printf("*******\n");	
		for(int i=1;i<=n;i++)
			p[i]=s[i];
		//if(*(p[1]+2)=='z') printf("&&&&&&\n");	
		//printf("%c",*p[1]);
		for(int i=1;i<=n;i++)
			if((*p[i])!='\n')
				sol(p[i]);
		printf("\n");		
	}
	return 0;
} 

