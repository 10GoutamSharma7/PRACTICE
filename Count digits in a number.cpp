#include<iostream>
using namespace std;

void countdigit(int n){
	int counter=0;
	while(n>0){
		n=n/10;
		counter++;
	}
	cout<<"no. of digits = "<<counter;
}

int main(){
	countdigit(23145);
}
