/*��д������������ܱ������Ҹ�λ������5������Ϊ1������Ϊ0��
ע��������ѭ����������a�������������ʱ������������С��������û��з���\n����������scanf()����ֵ��ѭ���ж�������
��������
15
3
10
45
q
�������
1
0
0
1
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
int n;
int main(){
	while(scanf("%d",&n)){
		int flag=0;
		if(n%3==0&&n%10==5) flag=1;
		printf("%d\n",flag);
	}	
}
