/*���һ���ܹ�����������ַ�Ľṹ����struct Web����������������ȫ����URL��
Ȼ�����Ӧ�Ľṹ���飬��������㳣�õ���������ȫ������ַ�����Ұ����������������򣩡��������ǰ�����Ϣ��
���룺��һ��Ϊ������n����ʾ��n����ַ��Ϣ����������n����n����ַ��Ϣ��
������������ǰ�����ַ��Ϣ������ǰ�����������ÿ��и��������������Ϊ20��ȫ�����Ϊ40���������ո�
��������5
HuaKeDa HuaZhongKeJiDaXue http://www.hust.edu.cn/
BaiDu BaiDuSouSuoWangZhan https://www.baidu.com/
HuaKeJiSuanJi HuaZhongKeJiDaXueJiSuanJiXueYuan http://cs.hust.edu.cn/
TianMao TianMaoGouWuShangCheng http://www.tmall.com/
DouBan DouBanYingPing http://www.douban.com/
�������
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

