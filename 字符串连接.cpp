/*编写程序实现对多个字符串的连接。
输入：有多组输入，每组输入以一个整数n开始，接下来的n行是n个需要连接的字符串；当n为0时，程序结束运行。
输出：每组输入对应一行输出，输出连接之后的字符串
注意：使用二维数组接收字符串，进行连接时用 指针 对二维数组进行操作；不允许使用系统strcat()和strlen()函数。 不符合要求的按 未完成 处理。
样例输入
3
zhang
chuan
chao
3
xi
da
da
3
I love you. 
Always have. 
Always will.
0
样例输出
zhangchuanchao
xidada
I love you. Always have. Always will.
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
char s[100][100];
char ans[1000];
int n;
int main(){
	while(scanf("%d",&n),n){
		getchar();
		for(int i=1;i<=n;i++)
			fgets(s[i],100,stdin);
		int now=0;	
		for(int i=1;i<=n;i++){
			int j=0;
			while(*(s[i]+j)!='\n'){
				ans[now++]=*(s[i]+j);
				j++;
			}
		}
		ans[now]='\0';
		printf("%s\n",ans);
	}
	return 0;
}
