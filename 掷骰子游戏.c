/*��дһ��ģ�⡰Ͷ��˫���ӡ�����Ϸ������Ϸ����ÿ��Ͷ���Σ�ȡ���εĺͣ���һ������Ϊ7��11���ʤ����Ϸ������
����Ϊ2,3����12�����ˣ�ʧ�ܽ�����
����Ϊ�������֣��򽫴�ֵ��Ϊ�Լ��ĵ����������ڶ��֣������֡���ֱ��ĳ�ֵĺ͵��ڸõ������ʤ�������ֺ�Ϊ7���������Ϸ��
ģ��ÿ��һ�����ӵ����ȡ����������һ���Ǹ���������Ϊ������������Ҫ����õ���������λ��֮�ͼ�Ϊsum���ֽ�1~6��6�����ֿ�Ƭ��˳ʱ�ӷ���ڷ�һ������һֻ����ÿ�δ�����Ϊ1�Ŀ�Ƭ�ڷŵ�λ�ó�������ʱ��������ϰ�˳ʱ�ӷ�����sum����
��������ͣ��λ���ϵĿ�Ƭ���ּ���Ϊ���������ӵõ��ĵ�����
�����������������ݡ�
�����ʽ˵������һ������n��ʾ���������ĸ����������������n�����룬ÿ��������������Ǹ�������Ϊa��b��������Χ��0~10000֮�䣨�����䣩��
��Ϊ��һ������Ͷ�����������������е��˵�n��ʱ�����n������Ͷ�����������ֱ�����a+n-1,b+n-1��
�����ʽ˵����ÿ�����������������ռһ�У����������Ϸ�����ս����
ע�⣺����������100����
��������
8
1234 1
1 42
0 422
3728 4892
4646 2481
7806 2421
4309 6617
2811 9514
�������
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
