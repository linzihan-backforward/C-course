/*���������뷽������д��������һ�е籨���֣�������ѡ���������
һΪԭ���������Ϊ�任��ĸ�Ĵ�Сд����Сд'a'��ɴ�д'A'����д'D'���Сд'd'���������ַ����䡣
��#define��������Ƿ�任��ĸ�Ĵ�Сд��
���磬#define CHANGE 1 ������任������֣���#define CHANGE 0��ԭ�������
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
#define CHANGE c[0]%2
char c[1005];
int n; 
int main(){
	scanf("%d",&n);getchar();
	for(int i=1;i<=n;i++){
		fgets(c,1005,stdin);
		if(CHANGE){
			for(int j=0;j<strlen(c);j++){
				if(c[j]>='a'&&c[j]<='z') printf("%c",c[j]-32);
				else if(c[j]>='A'&&c[j]<='Z') printf("%c",c[j]+32);
				else printf("%c",c[j]);
			}
		}
		else{
			for(int j=0;j<strlen(c);j++)
				printf("%c",c[j]);
		}	
	}
	return 0;
} 
