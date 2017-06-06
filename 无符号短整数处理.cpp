/*输入无符号短整数，输出将高4位和低4位交换后的结果
输入：第一行为正整数N，表示输入数据组数。接下的N行是程序需要处理的N个无符号短整数。
输出：对每行输入对应一行输出样例输入
1234
5678
5695
1024
样例输出
9424
58913
63025
1024
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;

int cases;
unsigned short n;
int main(){
	scanf("%d",&cases); 
	while(cases--){
		scanf("%hu",&n);	
		printf("%hu\n",(n<<12)|(n>>12)|(n&0x0ff0));
	}
	return 0;
}
