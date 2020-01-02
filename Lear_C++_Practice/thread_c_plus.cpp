#include<iostream>
#include<pthread.h>//当前不支持 pthread.h

using namespace std;

#define NUM_THREAD 5

void* say_hello(void* args){
	cout<< "hello Runoob!"<<endl;
	return 0;
}

int main(){
	
	pthread_t tids[NUM_THREAD];
	
	for(int i=0; i< NUM_THREAD; ++i){
		
		int ret = pthread_create(&tids[i],NULL ,say_hello,NULL);
		
		if(ret!=0){
			cout << "pthrea_create error: error_code="<<ret<<endl;
		}
	}
	
	pthread_exit(NULL);
	
	
	
	
}