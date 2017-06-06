/*输入一个长度无限制超长字符串，用一个先进先出，且每个节点接受一个输入字符的单向链表接收这个字符串。
然后遍历并在显示器上输出链表中的所有字符。
将该超长字符串无冗余（不多分配一个字节的存储空间）地存放到一个通过动态存储分配创建的字符数组中，并
且通过printf函数在显示器上输出该超长字符串。
输入：一个超长字符串，以#结束。
输出：输出遍历链表的结果（以换行符结束），存入字符数组后的结果(以换行符结束)，二个结果之间用一空行隔开。
注意：请严格使用链表和动态内存分配，否则按 “未完成” 处理。
样例输入
Hello! How are you!#
样例输出
Hello! How are you!

Hello! How are you!
*/ 
//#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<algorithm>
//using namespace std;

struct Node {
	char c;
	struct Node *next;
}; 
int main(){
	struct Node *head=(struct Node *)malloc(sizeof(struct Node));
	struct Node *tail=head;head->next=NULL;
	int len=0;
	while(scanf("%c",&tail->c)!=EOF){
		tail->next=(struct Node *)malloc(sizeof(struct Node));
		tail=tail->next;
		len++;	
	}
//	printf("%d\n",len);
	tail->c='\0';
	char *s=(char *)malloc(len*sizeof(char));
	tail=head;
	char *p=s;
	for(;tail!=NULL,tail->c!='\0';tail=tail->next){
		printf("%c",tail->c);
		*s++=tail->c; 
	}	
	*s='\0';
	printf("\n\n");
	printf("%s",p);printf("\n");
	return 0;
	
}
