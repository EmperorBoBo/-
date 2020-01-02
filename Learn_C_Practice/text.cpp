#include<stdio.h>
#include<conio.h>
#include "my.h"  // 双引号标识是自己的头文件，会先从当前目录查找，如果没有，再从系统目录查找
#include <my.h> // <> 直接从系统目录查找 头文件



int main(){
	
	int *p ; // 定义指针变量时必须带* ，给指针变量赋值时不能带*
	
	
	// 1.定义 *p  ，* 标识p 是一个指针变量
	// 2.使用 *p, * 标识 用来取值的就是 指针指向的数据
	
	//int a =99;
	//float b = 10.012;
			//char c = 'A';
	//char web_url[] ="www.baidu.com";
	//char *web = "字符串呢！";
	//int d = 0;
	char e;
	char *f;
	
	// puts 专门输出字符串
	//puts("Hi  C/C++");
	//printf("printf 函数print fromat 缩写");
	
	// %d  decimal  (输出数字)
	// %c  character(输出字符)
	// % s string （String 类型）
	// % f  float（输出 浮点型）
	//printf("a= %d \n", a );
	
	//printf("b= %f \n", b);
	
	//printf("c= %c \n", c);
	
	//int length1 = sizeof(int);
	//	int length2= sizeof (a); 
	
	//printf("length1= %d, length2= %d",length1,length2);
	//putchar(c);
	
	//printf("%s,%s\n", web_url,web);
	
	
	//scanf("%d", &d);
	
//	printf("d=%d \n", d);
	//scanf("%c",&c);
	//printf("c=%c \n",c);
	
	//e = getchar();
	
	// getche 无缓冲区，输入字符，不需要按空格自动输出,只可用于window
	//e=getche();
	// getch 无缓冲区，输入字符，无回显,只可用于window
	//c= getch();
	
	//printf("e=%c\n",e);
	
	f = gets();
	printf("this is = %s\n",f);
	
	return 0;
	
}