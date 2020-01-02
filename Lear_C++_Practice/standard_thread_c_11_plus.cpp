#include<iostream>
#include<thread>

// 编译不通过，找出问题所在

std::threa::id main_thread_id = std::this_thread::get_id();

void hell(){
	std::cout<< "Hello concurrent world\n";
	if(main_thread_id == std::this_thread::get_id()){
		std::cout<<"this is the main thread\n";
	}else{
		std::cout<< "this is not the main thread\n"
	}
}

void pause_thread(int n ){
	std::this_thread::sleep_for(std::chrono::seconds(n));
	std::cout<<"pause of "<<n<< "seconds ended\n"
}

int main(){
	
	std::thread t(hello);
	std::count << t.hardware_concurrency()<<std::endl;
	std::cout<<"native_handle "<<t.native_handle()<<std::endl;
	t.join();
	std::thread a(hello);
	a.detach();
	std::thread threads(5);
	
	cout<<"Spawing 5 threads...\n"<< endl;
	int i;
	
	for(i = 0; i<5;++i){
		threa[i] = std::thread(pause_thread,i+1);
		cout<<"Done spawing thread, Now wating for them to join\n"<<endl;
	}
	for(auto &thread:threads){
		thread.join();
		cout<<"All threads joined!\n"<<endl;
	}
	
}