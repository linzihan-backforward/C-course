/*�����Swap(x,y)�����ڽ�����������x��y��ֵ������д���Գ���
������������������,����С��10000�顣
�����ʽ˵����ÿ�������������ռһ�У�������������������Ϊx��y��������Χ����-10000~10000֮�䣨�����䣩�����ļ�β���Խ�����
�����ʽ˵��������ÿ��������ݣ��������ǰx��y��ֵ�ͽ�����x��y��ֵ��
��Ҫ�ڵ�i��������ݽ�����ǰ���һ����ʾ��Ϣ:��CASE i:������ʾ�ǵ�i��������ݶ�Ӧ�Ľ���������������������������֮���һ�С�
��������
10 20
45 145
�������
Case 1:
Before Swap:a=10 b=20
After Swap:a=20 b=10

Case 2:
Before Swap:a=45 b=145
After Swap:a=145 b=45
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;

#define swap(x,y) int t=x,x=y,y=t
int cnt,a,b;
int main(){
	cnt=1;
	while(scanf("%d%d",&a,&b)!=EOF){
		if(cnt>1) printf("\n");
		printf("Case %d:\n",cnt);
		printf("Before Swap:a=%d b=%d\n",a,b);
		swap(a,b);
		printf("After Swap:a=%d b=%d\n",a,b);
		cnt++; 
	}
	return 0;
} 
