#include<iostream>
#include<string>

using namespace std;

template <typename T> 
inline T const& Max(T const& a, T const& b){
	return a<b?b:a;
}

int main(){

	int i=30;
	int j=40;
	
	cout<< "Max( i,j) : "<<Max(i,j)<<endl;
	
	double f1=10.03;
	double f2=40.39;
	
	cout<<"Max(f1,f2):"<< Max(f1,f2) <<endl;
	
	
	string str1="hello";
	string str2="world";
	
	cout<<"Max(str1,str2):" << Max(str1,str2)<<endl;











return 0;

}