/*�����swap(x,y)���ڽ�����������x��y��ֵ������д������ԡ�
���룺��һ��Ϊ������N����ʾ��N�����룬��������N�У�ÿ�а���������������������
�����ÿ���������Ӧ������������
��������
5
1 2
0 0
5 9
25 32
88 89
�������
2 1
0 0
9 5
32 25
89 88
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;

int swap(int *x,int *y){
	int t=*x;*x=*y;*y=t;
}
int n,a,b;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d%d",&a,&b);
		swap(&a,&b);
		printf("%d %d\n",a,b);
	}
	return 0;
}
