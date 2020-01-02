#include<stdio.h>
#include<stdlib.h>
#define N 2

struct str{
	char name[10];
	int num;
	int age;
	float score;
} boya[N],boyb[N], *pa, *pb;

// 读取键盘数据数据
int main(){
	
	FILE *fp;
	int i;
	pa = boya;
	pb= boyb;
	if( (fp=fopen("C://Users//windows//Desktop//test.txt","wt+")) == NULL){
		puts("failed  to oepn file ");
		exit(0);
	}
	printf("input data \n");
	
	// 从键盘读取数据保存到boya
	for( i = 0; i< N;i++,pa++){
		scanf("%s ,%d, %d, %f" , pa->name, &pa->num,&pa->age,&pa->score);
	}
	pa = boyb;
	
	//降boya 中的数据写入到文件
	for( i= 0; i< N; i++,pa++){
		fprintf(fp,"%s %d %d %f\n" ,pa->name,pa->num,pa->age,pa->score);
	}
	//重置文件指针
	rewind(fp);
	
	//从文件中读取数据，保存到boyb
	for(i = 0 ; i< N; i++,pb++){
		fscanf(fp,"%s %d %d %f" , pb->name,&pb->num,&pb->age,&pb->score);
	}
	
	// 降boyb的数据输出到显示器
	for(i = 0 ; i<N ;i++ , pb++){
		printf("%s %d %d %f" ,pb->name,pb->num,pb->age,pb->score );
	}
	
	fclose(fp);
	
	return 0;
}


