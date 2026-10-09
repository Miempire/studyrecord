//´òÓ¡ËÄ±ßĞÎ
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define weight 5
#define height 3
#define sqitline 2


int main(){
	bool isfilledline=true;
	for(int i=0;i<=(height+((height-1)*sqitline));i++){
		if(isfilledline){
			
			//TODO
			for(int j=0;j<=weight;j++){
				//TODO
				printf("*");
			}
			
			
			printf("\n");
			isfilledline=false;
		}else{
			printf("\n");
		}
		
		if((i%sqitline)==0){
			//TODO
			isfilledline=true;
		}
		
		//TODO
		
		
	}
	
	getchar();
	return 0;	
}
