/*�Ӽ�������n���������ŵ�����x�У���дһ����������������x�е�Ԫ�صߵ�����Ȼ�����ԭ�����С�
Ҫ��ʼ��ֻ��һ�����飬�����ڵ��ú���main������ߵ�˳�������x�еĸ���Ԫ�ء�
���룺��һ��Ϊ������N����ʾ��N�����룻ÿ������������У���һ��Ϊ��������n���ڶ���Ϊn��������
�����ÿ�������Ӧһ�����������ߵ���������������������ÿո���������һ���������޿ո�
ע�⣺ֻʹ��һ�����飻��main����������ߵ����Ԫ�أ�ʹ��ָ��������顣������Ҫ��İ� ��δ��ɡ� ����
��������
3
6
1 2 3 4 5 6
5
84 6768 48 878 8
3
528 98 40
�������
6 5 4 3 2 1
8 878 48 6768 84
40 98 528
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;

int x[100];
int n,N;
void swap(int *x,int *y){
	int t=*x;
	*x=*y;
	*y=t; 
}
int main(){
	scanf("%d",&N);
	while(N--){
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
			scanf("%d",&x[i]);
		int *head=x+1;
		int *tail=x+n;	
		while(head<tail){
			swap(head,tail);
			head++;
			tail--;
		}
		for(int i=1;i<n;i++)
			printf("%d ",x[i]);
		printf("%d\n",x[n]);	
	}
	return 0;
}
