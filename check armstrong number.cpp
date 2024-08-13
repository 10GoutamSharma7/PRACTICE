#include<iostream>
using namespace std;
bool isarmstrong(int num){
	int k =to_string(num).length();
	int sum =0;
	int n=num;
	while(n>0){
		int id = n%10;
		sum += pow(id,k);
		n=n/10;
	}
	return sum == num ? true:false;
}


int main(){
	
	int number = 153;
	if(isarmstrong(number)){
		cout<<"Is an Armstrong number";
	}
	else {
			cout<<"Is NOT an Armstrong number";
	}
	return 0;
}
