/*ѡ�������Ǵ�n���������ҳ�������С���������������ǰ�������棬
����ʣ���n-1�������ҳ�������С������������Ĵ�ǰ�������2��Ԫ���������ƣ�ֱ��������ϡ�
�������n����������ѡ���������ǰ������������к������
���룺�ж������룬ÿ�������Ӧ���У���һ�������������ĸ���n���ڶ���Ϊn����������nΪ0ʱ����������С�
�����ÿ�������Ӧһ�����������������������к�����������������ÿո���������һ�������޿ո�
��������
6
6 5 4 3 2 1
7
23 5 66 8 99 54 36
1
23
0
�������
1 2 3 4 5 6
5 8 23 36 54 66 99
23
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
int n,a[30];
void sort(int x[]){
	for(int i=1;i<=n;i++){
		int min=0x3f;
		for(int j=i;j<=n;j++)
			if(x[j]<x[i]) {
				int t=x[i];
				x[i]=x[j];
				x[j]=t;
			}
	}
}
int main(){
	while(scanf("%d",&n)){
		if(n==0) break;
		for(int i=1;i<=n;i++)
			scanf("%d",&a[i]);
		sort(a);
		for(int i=1;i<=n;i++){
			if(i==n) printf("%d\n",a[i]);
			else printf("%d ",a[i]);
		}
	}
	return 0;
} 
