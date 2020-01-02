#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

	char name[100];
	char *description;
	
	strcpy(name,"symble Da Shen");
	
	description= (char*)malloc(200*sizeof(char));
	
	if(description == NULL){
		
		fprintf(stderr,"Error unable to alloc memory \n");
		
	}else{
		
		strcpy(description,"NEVADA REMIX");
		
	}
	printf("name is %s\n",name);
	
	printf("description is %s\n",description);
	// 释放内存
	free(description);
}