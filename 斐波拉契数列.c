/*���쳲��������е�ǰn�n��3���룺�ж������룬ÿ����һ������n��������Ϊ0ʱ������������С�
���������ÿ������n����n��3ʱ�����쳲��������е�ǰn�ÿ�����8���������һ�пɲ���8������ÿ�����Ŀ��Ϊ10���Ҷ��룬����ÿո��룩��
�������Error!����������ÿ��и�������������
7
8
10
16
20
2
15
0
�������
         1         1         2         3         5         8        13

         1         1         2         3         5         8        13        21

         1         1         2         3         5         8        13        21
        34        55

         1         1         2         3         5         8        13        21
        34        55        89       144       233       377       610       987

         1         1         2         3         5         8        13        21
        34        55        89       144       233       377       610       987
      1597      2584      4181      6765

Error!

         1         1         2         3         5         8        13        21
        34        55        89       144       233       377       610

*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;

long long fci[30];
void init(){
	fci[1]=1;fci[2]=1;
	for(int i=3;i<30;i++)
		fci[i]=fci[i-1]+fci[i-2];
} 
int n;
int main(){
	init(); 
	while(scanf("%d",&n),n){
		int cnt=0;
		if(n<3){
			printf("Error!\n\n");
			continue;
		}
		for(int i=1;i<=n;i++){
			printf("%10lld",fci[i]);
			cnt++;
			if(cnt==8){
				cnt=0;
				printf("\n");
			}
		}
		if(cnt==0) printf("\n");
		else printf("\n\n");
	}
	return 0;
}
