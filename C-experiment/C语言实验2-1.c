/* 
��ӡ������������Ρ�
//                           1                    /*��0�� */ 
//                         1   1                  /*��1�� */
//                       1   2   1                /*��2�� */
//                     1   3   3   1
//                   1   4   6   4   1
//                 1   5   10  10  5   1
//               1   6   15  20  15  6   1
//             1   7   21  35  35  21  7   1
//           1   8   28  56  70  56  28  8   1
//        1   9   36  84  126 126 84  36   9   1
//ÿ������ֵ��������� ���㣨��ʾ��i�е�j��λ�õ�ֵ������ �ļ������£�
// 				    (i=0,1,2,��)
// 	(j=0,1,2,3,��,i)
//	��������Ϊ�˴�ӡ��������Ч����Ҫע��ո����Ŀ��һλ��֮����3���ո���λ��֮����2���ո�3λ��֮��ֻ��һ���ո񣬳�����ƹ�����Ҫע�����֡�
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
int n,space,first,second;
int yang[15][15];
void init(){
	yang[1][1]=1;
	for(int i=2;i<=12;i++)
		for(int j=1;j<=i;j++)
			yang[i][j]=yang[i-1][j]+yang[i-1][j-1];
	
}
int calc(int x){
	if(x>99) return 1;
	if(x>9) return 2;
	return 3;
}
int min(int x,int y){
	if(x<y) return x;
	else return y;
}
int main(){
	init();
	while(scanf("%d",&n),n){
		first=0;second=0;
		space=2*(n-1);
		for(int i=1;i<=n;i++){
			for(int j=1;j<=i;j++){
				if(j==1){
					for(int k=1;k<=space;k++) 
						putchar(' ');
					if(i==1) printf("%d\n",yang[i][j]);	
					 else printf("%d",yang[i][j]);
					first=yang[i][j];	
				} 
				else if(j==i){
					second=yang[i][j];
					for(int k=1;k<=calc(second);k++)
						putchar(' ');
					printf("%d\n",yang[i][j]);
				}					
				else {
					second=yang[i][j];
					for(int k=1;k<=calc(second);k++)
						putchar(' ');
					printf("%d",yang[i][j]);
					first=yang[i][j];	
				}
				
			}
			space-=2;
		}
		printf("\n");
	} 
	
	
	
	return 0;
} 
