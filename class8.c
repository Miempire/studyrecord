//数组的存取

#include <stdio.h>
void printArr(int arr[]);


int main(){
	
	int array[5]={525,826,1314};
	//数组初始化
	int *point = &array[0];
	//数组遍历
	for(int i=0;i<=(sizeof(array)/sizeof(array[0])-1);i++){
		
		//TODO
		printf("%d ",array[i]);
		
		
	}
	//指针化
	printf("%d",*(point+1));
	//数组的反向遍历
	
	for(int i=4;i>=0;i--){
		//TODO
		printf("%d",array[i]);
		
		
	}
	
	
	
	
	return 0;
}

void printArr(int arr[]){
	if(sizeof(arr)==0){
		perror("输入空数组！");
		
		return;
		
	}

	//空数组异常处理
	
	
		for(int i=0;i<=(sizeof(arr)/sizeof(arr[0])-1);i++){
			
			//TODO
			printf("%d ",arr[i]);
			
			
		}
	
}
