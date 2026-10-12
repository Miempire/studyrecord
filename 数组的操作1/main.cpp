#include <iostream>
#include <stdlib.h>
using namespace std;
void retry();

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int arr[5]={1,2,3,4,5};
	int tmp;
	srand(NULL);
	for(int i=0;i<(sizeof(arr)/sizeof(int));i++){
		//TODO
		tmp=arr[i];
		int p=rand()%5;
		
		arr[i]=arr[p];
		arr[p]=tmp;
	}
	
	
	
	return 0;

}

void retry(){
	
	
	
}
