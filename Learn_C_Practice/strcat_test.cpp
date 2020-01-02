#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	
	
	FILE *fp;
	char str[100]={0}, strTemp[90];
	
	if((fp = fopen("C:\\Users\\windows\\Desktop\\test.txt","a+")) == NULL){
		
		puts("fail to open file ");
		exit(0);
		
	}
	printf("input some string : \n");
	gets(strTemp);
	
	strcat(str,"\n");
	strcat(str,strTemp);
	printf("%s ",str);
	fputs(str,fp);
	
	fclose(fp);

	return 0;
}
