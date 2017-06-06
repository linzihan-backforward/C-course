/*定义一个枚举类型enum month，用来描述一年12个月：一月（jan）、二月（feb）、……、十二月（dec），
并编写一个程序，根据用户输入的年份，输出该年各月的英文名及天数。
样例输入2015
样例输出： 
January,31
February,28
March,31
April,30
May,31
June,30
July,31
August,31
September,30
October,31
November,30
December,31
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
int n;
char month[13][20];
/*={{January},{February},{March},{April},{May},{June},{July},
{August},{September},{October},{November},{December}};*/
int day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main(){
	scanf("%d",&n);
	int flag=0;
	if((n%4==0)&&(n%100!=0)) flag=1;
	if(n%400==0) flag=1;
	if(flag==1) day[2]=29;
	strcpy(month[1],"January");strcpy(month[2],"February");
	strcpy(month[3],"March");strcpy(month[4],"April");
	strcpy(month[5],"May");strcpy(month[6],"June");
	strcpy(month[7],"July");strcpy(month[8],"August");
	strcpy(month[9],"September");strcpy(month[10],"October");
	strcpy(month[11],"November");strcpy(month[12],"December");
	for(int i=1;i<=12;i++)
		printf("%s,%d\n",month[i],day[i]);
	return 0;
} 

