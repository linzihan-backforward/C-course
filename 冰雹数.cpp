/*编写产生一些冰雹的程序，程序应该使用函数 void hailstone(int n)来计算冰雹并显示由n产生的序列。参考课本习题5.11。
输入：有多组输入数据，每行输入一个整数n（n≥1），当输入的n为零时程序结束运行。
输出：对于每个输入的n，输出其产生的冰雹序列，每行输出6个整数，每个整数宽度为5（右对齐，空格补齐）。两组输出用空行隔开。
样例输入
1
2
3
15
77
100
0
样例输出
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
