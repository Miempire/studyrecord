//数组的反转
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(){
	int arr[100];
	for(int i=0;i<=100;i++){
		//TODO
		arr[i]=rand()%100;
		
	}
	
	
	//__asm__("nop/n");//汇编标记1
	srand(time(0));
	int tmp;
	for(int i=0,j=99;i<=0;i++,j--){
		
		if(i=j){
			//TODO
			break;
		}
		
		//TODO
		tmp=arr[i];
		arr[i]=arr[j];
		arr[j]=tmp;
		
		
	}
	for(int i=0;i<=100;i++){
		//TODO
		printf("%d ",arr[i]);
	}
	printf("\n");
	getchar();
	return 0;
}
