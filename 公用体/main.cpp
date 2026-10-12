#include <iostream>

/*union使用时候每次使用只能赋值一个，否则会出现问题,因为每次会使用同一个内存空间，即每次赋值清除上一次的赋值*/
union money{
	double mond;
	int mosi;
	char* mons;
};
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	union money a;
	a.mons="100万";
	a.mond=1.7;
	a.mosi =1;
	
	
	
	return 0;
}
