//#include<iostream>
/*��Ƴ��򣬽�����x�ӵ�pλ��ʼ����nλ��x����������λ0~31����ת����1��0,0��1���������λ���ֲ��䡣 
���룺�����������ֱ���x,p,n ����������Ϊ���У���һ��Ϊ������תǰ�Ķ����ƣ�ÿ��λ���һ���ո񣩵ڶ���Ϊ������ת��Ķ����� 
ע:�ɲο��α�p44����2.19
��������15 0 32
�������00000000 00000000 00000000 00001111
		11111111 11111111 11111111 11110000
*/ 
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
int n,p,x;
int ans[35];
void printout(int *temp){
	int count=0;
	for(int i=31;i>=0;i--){
		printf("%d",temp[i]);
		count++;
		if(count%8==0&&count!=32) {
			printf(" ");
		}
	}
	printf("\n"); 
}
int main(){
	scanf("%d%d%d",&x,&p,&n);
	int i=0;
	while(x){
		ans[i++]=x%2;
		x/=2;
	}
	printout(ans);
	for(int j=p;j<n+p;j++)
		ans[j]=!ans[j];
	printout(ans);
	return 0;
}

