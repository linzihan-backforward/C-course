/*��д����һЩ�����ĳ��򣬳���Ӧ��ʹ�ú��� void hailstone(int n)�������������ʾ��n���������С��ο��α�ϰ��5.11��
���룺�ж����������ݣ�ÿ������һ������n��n��1�����������nΪ��ʱ����������С�
���������ÿ�������n�����������ı������У�ÿ�����6��������ÿ���������Ϊ5���Ҷ��룬�ո��룩����������ÿ��и�����
��������
1
2
3
15
77
100
0
�������
    1

    2    1

    3   10    5   16    8    4
    2    1

   15   46   23   70   35  106
   53  160   80   40   20   10
    5   16    8    4    2    1

   77  232  116   58   29   88
   44   22   11   34   17   52
   26   13   40   20   10    5
   16    8    4    2    1

  100   50   25   76   38   19
   58   29   88   44   22   11
   34   17   52   26   13   40
   20   10    5   16    8    4
    2    1
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;

long long n;
void sol(){
	int cnt=0;
	int cnt2=0;
	while(1){
		cnt++;
		cnt2++;
		if(n!=1){
			if(cnt2==6){
				printf("%5lld\n",n);
				cnt2=0;
			}
			else{
				printf("%5lld",n);
			}
		}
		if(n==1){
			printf("%5lld\n",n);
			break;
		}
		if(n%2==0) n=n/2;
		else n=3*n+1;
	}
}
int main(){
	while(scanf("%lld",&n),n){
		sol();
		printf("\n");
	}
	return 0;
} 
