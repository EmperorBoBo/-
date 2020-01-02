
#include<iostream>
using namespace std;

int main(){
	
	double *pvalue = NULL;
	pvalue = new double;
	
	*pvalue = 2548.123456;
	
	cout<< "pvalue =="<< *pvalue<<endl;
	
	delete pvalue;
	return 0;
	
}