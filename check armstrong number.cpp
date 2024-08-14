#include<bits/stdc++.h>
using namespace std;

int countdigit(int k){
	if (k/10==0){
		return 1;
	}
	return 1 + countdigit(k/10);
}

bool isarmstrong(int num,int d){
	int sum =0;
	int n=num;
	while(n>0){
		int id = n%10;
		sum += pow(id,d);
		n=n/10;
	}
	return sum == num ? true:false;
}


int main(){
	
	int number;
	cout<<"Enter no. to check armstrong:- ";
	cin>>number;
	int d=countdigit(number);
	if(isarmstrong(number,d)){
		cout<<"Is an Armstrong number";
	}
	else {
			cout<<"Is NOT an Armstrong number";
	}
	return 0;
}