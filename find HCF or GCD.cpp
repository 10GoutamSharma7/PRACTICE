#include<iostream>
using namespace std;
int findgcd(int n1,int n2){
	
	for(int i= min(n1,n2); i>0; i--){
		
		if(n1 % i==0 && n2 % i==0){
			return i;
		}
	}
	return 1;
}


int main(){
	
	int ans = findgcd(20,15);
	cout<<"HCF = "<<ans;;
	return 0;
}
