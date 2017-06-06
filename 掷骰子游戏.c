/*编写一个模拟“投掷双骰子”的游戏程序。游戏规则：每轮投两次，取两次的和，第一轮若和为7或11则获胜，游戏结束；
若和为2,3，或12则输了，失败结束；
若和为其他数字，则将此值作为自己的点数，继续第二轮，第三轮……直到某轮的和等于该点数则获胜，若出现和为7，则输掉游戏。
模拟每掷一次骰子的随机取数规则：输入一个非负整数，称为启动数，你需要计算得到启动数各位数之和记为sum，现将1~6这6张数字卡片按顺时钟方向摆放一个环，一只蚂蚁每次从数字为1的卡片摆放的位置出发，这时你告诉蚂蚁按顺时钟方向走sum步，
蚂蚁最终停留位置上的卡片数字即视为本次掷骰子得到的点数。
本题包含多组测试数据。
输入格式说明：第一行输入n表示测试样例的个数，后面紧接着有n行输入，每行输入包含两个非负整数记为a，b，整数范围在0~10000之间（闭区间），
视为第一轮两次投掷的启动数，若进行到了第n轮时，则第n轮两次投掷的启动数分别看作是a+n-1,b+n-1；
输出格式说明：每组测试样例的输出结果占一行，输出本次游戏的最终结果。
注意：测试数据有100多组
样例输入
8
1234 1
1 42
0 422
3728 4892
4646 2481
7806 2421
4309 6617
2811 9514
样例输出
success!
fail!
success!
success!
success!
fail!
fail!
fail!
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
int n,sum1,sum2;
int a,b;
int step[6]={1,2,3,4,5,6};
int get(int x){
	int ans=0;
	while(x){
		ans+=x%10;
		x/=10;
	}
	return ans;
}
void play(){
	int mynum=step[sum1%6]+step[sum2%6];
	sum1%=6;sum2%=6;
	if(mynum==7||mynum==11){
		printf("success!\n");
		return ;
	}
	if(mynum==2||mynum==3||mynum==12){
		printf("fail!\n");
		return ;
	}
	while(1){
		a++;b++;
		sum1=(get(a))%6;
		sum2=(get(b))%6;
		if(mynum==step[sum1]+step[sum2]){
			printf("success!\n");
			return ;
		}
		if(step[sum1]+step[sum2]==7){
			printf("fail!\n");
			return ;
		}
	}
} 
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d%d",&a,&b);
		sum1=get(a);
		sum2=get(b);
		play();		
	}
	return 0;
}
