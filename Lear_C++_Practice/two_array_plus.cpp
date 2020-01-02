#include<iostream>
using namespace std;
/*************  new  动态分配内存****************/
int main(){
	
	 int **p;
	 int i,j;
	 
	 // 分配内存空间
	 p = new int *[4];
	 for(i=0;i<4;i++){
		 p[i] =new int[8];
	 }
	
	//赋值操作
	 for(i=0;i<4;i++){
		 for(j=0;j<8;j++){
			 p[i][j]=i*j;
		 }
	 }
	 // 打印数据
	 for(i=0;i<4;i++){
		 for(j=0;j<8;j++){
			if(j==0) cout<<endl;   
            cout<<p[i][j]<<"\t";   
		 }
	 }
	
	// 释放内存
	 for(i=0;i<4;i++){
		delete [] p[i] ;
	 }
	delete [] p;
	
	return 0;
}