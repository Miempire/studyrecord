#include <stdio.h>
//拆分数值


int main(){
	int num,len,count,sum;
	count=1;
	
	scanf("%d",&num);
	//判断几位数
	do{
		//TODO
		sum = (int)(num/(10*count));
		count++;
	}while(sum==0);
	
	return 0;
}
