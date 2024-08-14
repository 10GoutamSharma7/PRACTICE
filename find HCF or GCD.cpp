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