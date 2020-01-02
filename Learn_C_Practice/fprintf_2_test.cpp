#include<stdio.h>

int main(){
	
	
	int sum,a,b;
	
	fprintf(stdout,"input some data:\n");
	
	fscanf(stdin,"%d %d\n",&a,&b);
	
	sum= a+b;

	fprintf(stdout,"sum is:%d",sum);
	
	
	return 0;

}