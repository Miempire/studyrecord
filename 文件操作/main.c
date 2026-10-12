#include <stdio.h>
char* filename;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	FILE *a=fopen(filename,"r");
	char c=fgetc(a);
	char arr[1024];
	fgets(arr,1024,a);
	char str[1024];
	fread(str,1,1024,a);
	printf("%s",str);
	
	fseek(a,0,SEEK_SET);
	printf("%d",ftell(a));
	rewind(a);
	fclose(a);

	a=fopen(filename,"w");
	fputc(c,a);
	fputs(arr,a);
	fputs(str,a);
	printf("写入成功");
	fclose(a);

	
	
	
	
	
	fclose(a);
	
	return 0;
}
