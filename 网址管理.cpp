/*设计一个能够描述上网网址的结构类型struct Web。它包含缩略名、全名、URL，
然后构造对应的结构数组，编程输入你常用的缩略名、全名、网址，并且按照缩略名排序（升序）。输出排序前后的信息。
输入：第一行为正整数n，表示有n个网址信息，接下来的n行是n个网址信息。
输出：输出排序前后的网址信息，排序前的与排序后的用空行隔开。缩略名宽度为20，全名宽度为40，无其它空格。
样例输入5
HuaKeDa HuaZhongKeJiDaXue http://www.hust.edu.cn/
BaiDu BaiDuSouSuoWangZhan https://www.baidu.com/
HuaKeJiSuanJi HuaZhongKeJiDaXueJiSuanJiXueYuan http://cs.hust.edu.cn/
TianMao TianMaoGouWuShangCheng http://www.tmall.com/
DouBan DouBanYingPing http://www.douban.com/
样例输出
HuaKeDa             HuaZhongKeJiDaXue                       http://www.hust.edu.cn/
BaiDu               BaiDuSouSuoWangZhan                     https://www.baidu.com/
HuaKeJiSuanJi       HuaZhongKeJiDaXueJiSuanJiXueYuan        http://cs.hust.edu.cn/
TianMao             TianMaoGouWuShangCheng                  http://www.tmall.com/
DouBan              DouBanYingPing                          http://www.douban.com/

BaiDu               BaiDuSouSuoWangZhan                     https://www.baidu.com/
DouBan              DouBanYingPing                          http://www.douban.com/
HuaKeDa             HuaZhongKeJiDaXue                       http://www.hust.edu.cn/
HuaKeJiSuanJi       HuaZhongKeJiDaXueJiSuanJiXueYuan        http://cs.hust.edu.cn/
TianMao             TianMaoGouWuShangCheng                  http://www.tmall.com/
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;
struct Web{
	char shortname[40];
	char fullname[80];
	char url[80];
}web[100];
int n;
int cmp(const void *a,const void *b){
	return strcmp(((struct Web *)a)->shortname,((struct Web *)b)->shortname);
}
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%s%s%s",web[i].shortname,web[i].fullname,web[i].url);
	for(int i=0;i<n;i++)
		printf("%-20s%-40s%s\n",web[i].shortname,web[i].fullname,web[i].url);
	qsort(web,n,sizeof(web[0]),cmp);
	printf("\n");
	for(int i=0;i<n;i++)
		printf("%-20s%-40s%s\n",web[i].shortname,web[i].fullname,web[i].url);
	
	
	
	
	return 0;
}

