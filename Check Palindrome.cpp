#include<iostream>
using namespace std;

void palindrome(int n){
	int temp1=n;
	int revn=0;
	while(n!=0){
		int temp2= n%10;
		revn= (revn*10)+temp2;
		n=n/10;
	}
	if (temp1 == revn){
		cout<<"Palindrome";
	}else {
		cout<<"Not Palindrome";
	}
}

int main(){
	palindrome(-1221);
	return 0;
}
