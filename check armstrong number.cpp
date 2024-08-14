#include <iostream>
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

// ANOTHER METHOD :-
//#include<iostream>
//using namespace std;
//
//int gcd(int x,int y){
//	int m=min(x,y);
//	for(int i=m;i>0;i--){
//		if(x%i==0 && y%i==0){
//			return i;
//		}
//	}
//}
//
//int main(){
//	int oute=gcd(9,12);
//	cout<<oute;
//	return 0;
//}