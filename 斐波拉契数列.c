/*输出斐波拉契数列的前n项。n≥3输入：有多组输入，每行是一个整数n，当输入为0时，程序结束运行。
输出：对于每组输入n，当n≥3时，输出斐波拉契数列的前n项，每行输出8个数（最后一行可不是8个），每个数的宽度为10（右对齐，左边用空格补齐）；
否则输出Error!。两组输出用空行隔开。样例输入
7
8
10
16
20
2
15
0
样例输出
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
