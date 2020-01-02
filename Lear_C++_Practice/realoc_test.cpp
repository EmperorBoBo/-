#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	
	char name[100];
	char *description;
	
	strcpy(name,"zara ali");
	description = (char*) malloc(30 * sizeof(char));
	
	if( description == NULL ){
		fprintf(stderr, "Error -unable to allocate required memory\n");
	}else{
		strcpy(description,"zara ali a DPS student.");
	}
	
	/******需要更大的内存*********/
	
	description = (char*) realloc( description,100 * sizeof(char) );
	
	if(description == NULL){
		fprintf(stderr, "Error -unable to allocate required memory\n");
	}else{
		strcat(description," she is in 10 class");
	}
	
	printf("name is %s\n",name);
	printf("description is %s\n",description);
	
	free(description);
	
	return 0;
	
}