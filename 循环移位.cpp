/*��Ƴ��򣬽�����x����ѭ����λnλ��
ע��int�͵Ĵ�С������йأ�������ʹ��sizeof()�����ж�int����ռ�ֽ������ٷֱ���
���룺����x����λ��n��
����������λ��Ľ��,���Ի��з���\n��������
�������� 5 33
������� -2147483646
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
int x,n;
int intlength;
int main(){
	intlength=sizeof(int);
	scanf("%d%d",&x,&n);
	n%=(intlength*8);
	unsigned int temp=(unsigned)x>>n;
	int ans=temp|(x<<(intlength*8-n));
	printf("%d\n",ans);
	return 0;
} 
