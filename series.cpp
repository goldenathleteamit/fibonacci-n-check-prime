#include<iostream>
using namespace std;
int main(){
	
//FIBONACCI SERIES	
	int n;
	cin>>n;
	
	int a=0;
	int b=1;
	cout<<a <<" "<<b<< " ";
	for(int i=2;i<n;i++){
		int nextnum=a+b;
		cout<< nextnum<< " ";
		
		a=b;
		b=nextnum;
	}
}
