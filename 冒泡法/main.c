#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int i,j;
	for(i=0;i<9;i++){
		for(j=0;j<9-i;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];//比大小后交换
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
