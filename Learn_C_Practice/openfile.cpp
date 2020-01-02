#include<stdio.h>
#include<stdlib.h>

#define N 100

// 读取一个文本，输出到控制台
int main(){
	
	FILE *fp;
	char str[N+1];
	
	if ( (fp = fopen("C://Users//windows//Desktop//test.txt","rt")) == NULL){
		
		puts("failed to file");
		exit(0);
		
	}
	
	while(fgets(str,N,fp) != NULL){
		printf("%s ",str);
		
	}
	fclose(fp);	
	return 0;
}