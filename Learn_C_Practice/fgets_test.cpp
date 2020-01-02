#include<stdio.h>
#include<stdlib.h>

#define N 3

int main(){
	
	FILE *fp;
	char str[N+1];
	
	if( (fp = fopen("C:\\Users\\windows\\desktop\\test.txt","r")) == NULL ){
		puts("faile to open file ");
		exit(0);
	}
	
	while( fgets(str, N,fp)!=NULL){
		printf("%s \n" ,str );
	}
	
	fclose(fp);
	
	return 0;
}
