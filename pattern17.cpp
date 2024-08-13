#include<iostream>
using namespace std;
void pattern(int n){
for (int i=0;i<n;i++){
	
	for(int j=n;j>i;j--){
		cout<<"*";
	}
	
	for(int j=0;j<i*2;j++){
		cout<<" ";
	}
	
	for(int j=n;j>i;j--){
		cout<<"*";
	}
	
	cout<<endl;
}	

for(int i=n; i>0; i--){
	
	for(int j=0; j<=n-i; j++){
		cout<<"*";
	}
	
	for(int j=i*2; j>2; j--){
		cout<<" ";
	}
	
	for(int j=0; j<=n-i; j++){
		cout<<"*";
	}
	
	cout<<endl;
}
}
int main(){
	pattern(5);
	return 0;
}
