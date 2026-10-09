#include <stdio.h>
#define name "成都超人"
#define nickname "dady"
char* inputname,inputnickname;//输入缓冲

int main(){
	int weight;
	
	printf("我是%s,你永远的%s\n",name,nickname);
	scanf("%s%s%d",&inputname,&inputnickname,&weight);
	printf("我是%s,你永远的%s,体重是%d\n",inputname,inputnickname,weight);
	
	
	getchar();
	return 0;
}
