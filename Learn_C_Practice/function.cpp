#include<stdio.h>
#include<String.h>

int main(){
	
	//char str1[10],str2[20],*str3;
	//gets(str1);
	//gets(str2);
	//str3 = compareStr(str1,str2);
	//printf("--->: %s\n",str3);
	
	
	//Student 结构体名字 ，stu1 变量名
	//struct Student{
		//
		//char *name ;
	//	int age;
	//	int id;
		//char *grade;// 例如三年级一班
		//float score;
	//	
//	} stu1;
	
	//stu1.name ="夏明"
	//stu1.age =17;
	//stu1.id =1;
	//stu1.grade ="大一"
	//stu1.score = 90;
	
	//printf("名字--->%s\n，年龄--->%d\n,年级--->%s\n,分数--->%d\n",stu1.name,stu1.age,stu1.grade,stu1.score);
	
	//struct {
	//	char *name;
	//	int age;
	//	int id;
	//	char *grade;
	//	float score;
	//} stu1,sut2={"大明",20,2,"大二",94.1};// 整体复制仅限于定义的时候，在使用的时候需要逐一字段复制（和数组很相似）
	
	
	// 结构体数组，和初始化
	//struct {
	//	char *name;
	//	int age;
	//	int id;
	//	char *grade;
	//	float score;
	//} class[3]={
//		{"大明",20,2,"大二",94.4},
	//	{"二明",21,2,"大二",96.5},
	//	{"三明",21,2,"大二",90.0}
	//};
	// 结构体指针
	//struct Student {
	//	char *name;
	//	int age;
	//	int id;
	//	char *grade;
	//	float score;
//	} stu99 ={"大熊",15,3,"小学",60.5};
	
	//struct Student *pStu = &stu99;
	
	// 取出变量  可用  pStu->name, 或者（*pStu).name 括号不可以省略
	//printf("name--->%s\n,age-->%d\n", pStu->name,pStu->age);
	
	
//	enum Week{
//		Mondy =1;
//		TuesDay;
//		WedsDay;
//		TursDay;
//		Friday;
//		Saturday;
	//	Sunday;
	//} 
	
// 共用体 使用union 来申明

	//union data {
	//	char *pm;
	//	int   i ;
	//} a;
	
	// 1 bit  ： 是一个电子元器件（ 0/1）
	// 硬盘	： 上面排列了好多的电子元器件
	 
	// 1 Byte = 8 bit （注意 <B> <b>）
	 
	// 2^3 =8 (2的3次方)
	// 2^4 = 16
	// 2^5 = 32
	// 2^6 =64
	//	 2^7=128
	// 2^8 =256
	//2^9=512
	// 2^10 = 1024
	 
	 
	// 1KB = 1024b 
	// 1M = 1024 KB 
	 
	 

	
	return 0;

}



//char* compareStr(char* a , char* b){
	//if(strlen(a) > strlen(b)){
		//return a;
//	}else{
	//	return b;
//	}
//}