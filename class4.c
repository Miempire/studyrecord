#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
//Ö¸ÕëµÄ²Ù×÷
int main(){
	int need=1;
	
	int *print = (int*)malloc(sizeof(int)*need);
	(*print)=1;
	printf("%d",*print);
	getchar();
	
	
	
	
	return 0;
}
