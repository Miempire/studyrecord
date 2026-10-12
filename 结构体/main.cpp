#include <iostream>
struct man{
	int legs;
	int body;
	char* language;
}zzm;

typedef struct woman{
	int leg;
	int body;
	char* language;
}wm;

//传递时存在两种，一种是传址，一种是传值，后者的修改不会影响到前面，而两种调用分别是.xxx和->xxx
/*
变量存储时内部的地址对其是其数据长度的整数倍数
bool:8bit int:4bit char:1bit
且所有的程序的变量类型，结构体类型等等都存在 内存地址/数据=整数的关系
*/

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	zzm.body=1,zzm.language="zh-cn",zzm.legs=2;
	struct man llb ={2,1,"zh-cn"};
	wm c;
	
	
	return 0;
}
