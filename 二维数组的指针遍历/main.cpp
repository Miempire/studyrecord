#include <stdio.h>
#include <math.h>
int basicSearch(int arr[],int key);
int twosearch(int arr[],int key);
int twosqitsearch(int arr[],int key,int len);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int array[9]={123,421,21,423,422,213,967,985,133};
	printf("%d",twosearch(array,213));
	return 0;
}

int basicSearch(int arr[],int key){
	int p=-1;
	
	for(int i=0;i<(sizeof(arr)/sizeof(int));i++){
		//TODO
		if(arr[i]==key){
			//TODO
			p=i;
			break;
		}
	}
	
	return p;
}

int twosearch(int arr[],int key){
	for(int i=0,j=(sizeof(arr)/sizeof(int)-1);i!=j;i++,j--){
		//TODO
		if(arr[i]==key){
			//TODO
			return i;
		}else if(arr[j]==key){
			//TODO
			return j;
		}
	}
	
	
	return -1;
}

int twosqitsearch(int arr[],int key,int len){
	int mid=(int)len/2;
	int max = sizeof(arr)/sizeof(int)-1;
	for(int i=0;i<=max;i++){
		//TODO
		for(int j=0;j<=mid;j++){
			//TODO
			if(arr[j]==key){
				//TODO
				return j;
			}
		}
		mid=round(mid+(max-mid)/2);
	}
	
	
	return -1;
}
