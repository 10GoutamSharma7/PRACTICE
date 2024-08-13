#include<iostream>
using namespace std;

void recursion(int i,int n){
	if(i>n){
		return;
	}
	cout<<i<<" ";
	recursion(i+1,n);
}


int main(){
	int n=5;
	recursion(1,n);
	return 0;
}
