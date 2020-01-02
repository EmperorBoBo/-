#include<stdio.h>
#include<stdlib.h>


int main(){
	
	FILE *fp;
	char ch;
	
	if( (fp = fopen("C:\\Users\\windows\\Desktop\\test.txt","w+"))==NULL){
		puts("faile to open file ");
		exit(0);
	}
	printf("input a string: \n");
	while( (ch=getchar()) !='\n'){
		fputc(ch,fp);
	}
	
	fclose(fp);
	

	
	return 0;
}