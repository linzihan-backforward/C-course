/*����������n��k�����n�д��Ҷ˿�ʼ�ĵ�k�����ֵ�ֵ��k��1��ʼ��������n���Ҷ˵�k�����ֶ���ɺ��������k������n��λ������������-1��
���򷵻�n�е�k�����֡�
������������������(����ƽ̨�Ĺ�ϵ�����鲻Ҫ����pow()�⺯��)��
�����ʽ˵����ÿ�������������ռһ�У���������������������Ϊn��k��
n��1~4294967293֮�䣨�����䣩�����ļ�β���Խ�����
�����ʽ˵����ÿ�����������������ռһ�У�����������ؽ����
��������
321 3
421 4
42 12
4294967293 10
4294967293 11
�������
3
-1
-1
4
-1
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
char num[12];
int k;
int getk(char *s,int k){
	if(k>strlen(s)) return -1;
	return s[strlen(s)-k]-'0';
}
int main(){
	while(scanf("%s",num)!=EOF){
		scanf("%d",&k);
		printf("%d\n",getk(num,k));
	}
	return 0;
}
