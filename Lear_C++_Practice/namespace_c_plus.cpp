#include<iostream>
using namespace std;


/** namespace 指定作用域，指定上下文的作用**/
	namespace first_space{
		
		void func(){
			cout<< "is first_space func"<<endl;
		}
	}
	
	namespace second_space{
		
		void func(){
			
			cout<< "is second_space func"<<endl;
		}
	}
	
//using  指令指定编辑器使用哪个作用域
using namespace first_space;	
		

int main(){

	
//	first_space::func();
	
//	second_space::func();

    func();
	
	
	return 0;
	
}