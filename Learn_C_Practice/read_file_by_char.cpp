#include<stdio.h>
#include<stdlib.h>

int main(){
	
	
	FILE *fp;
	
	char ch;
	
	
	if((fp =fopen("C://Users//windows//Desktop//test.txt","r")) == NULL){
		
		puts("Filed to open file ");
		exit(0);
	}
	
	while(( ch = fgetc(fp)) !=EOF){
		putchar(ch);
	}
	
	// 输出换行符
	putchar('/n');
	
	
	if(ferror(fp)){
		puts("输出错误");
	}else{
		puts("读取错误");
	}
	

	fclose(fp);
	
	
	return 0;
}