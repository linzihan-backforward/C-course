/*��д����ʵ�ֶԶ���ַ��������ӡ�
���룺�ж������룬ÿ��������һ������n��ʼ����������n����n����Ҫ���ӵ��ַ�������nΪ0ʱ������������С�
�����ÿ�������Ӧһ��������������֮����ַ���
ע�⣺ʹ�ö�ά��������ַ�������������ʱ�� ָ�� �Զ�ά������в�����������ʹ��ϵͳstrcat()��strlen()������ ������Ҫ��İ� δ��� ����
��������
3
zhang
chuan
chao
3
xi
da
da
3
I love you. 
Always have. 
Always will.
0
�������
zhangchuanchao
xidada
I love you. Always have. Always will.
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
char s[100][100];
char ans[1000];
int n;
int main(){
	while(scanf("%d",&n),n){
		getchar();
		for(int i=1;i<=n;i++)
			fgets(s[i],100,stdin);
		int now=0;	
		for(int i=1;i<=n;i++){
			int j=0;
			while(*(s[i]+j)!='\n'){
				ans[now++]=*(s[i]+j);
				j++;
			}
		}
		ans[now]='\0';
		printf("%s\n",ans);
	}
	return 0;
}
