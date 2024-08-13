#include<iostream>
using namespace std;
void pattern(int n){
for(int i=0; i<n; i++){
	
	for(int j=0; j<i; j++){
	cout<<" ";
	}
	
	for(int j=i+1; j<2*n-i; j++){
	cout<<"*";
	}
	
	cout<<endl;
}
}
int main()
{

	pattern(6);
	return 0;
}
