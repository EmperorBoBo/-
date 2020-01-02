#include<iostream>
#include<csignal>
#include<unistd.h>

using namespace std;

void signalHandler(int signum){
	
	cout<<" Interrupt signal ("<< signum <<") recieved "<<endl;
	
	exit(signum);
}


int main(){
	int i = 0;
	
	// 注册信号和信号处理程序
	
	signal(SIGINT,signalHandler);
	
	while(++i){
		cout<<"Going to sleep"<< endl;
		if(i==3){
			raise(SIGINT);
		}
		sleep(1);
	}
	
	return 0;
	
}