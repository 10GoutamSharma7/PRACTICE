#include<iostream>
using namespace std;
//OR
//void pattern(int n){
//for (int i=0; i<n; i++){
//	for(char ch='A'; ch<='A'+i; ch++){
//		cout<<ch<<" ";
//	}
//	cout<<endl;
//}}
void pattern(int n){
for (int i=1; i<=n; i++){
	char x='A';
	for(int j=1; j<=i; j++){
		cout<<x<<" ";
		x++;
	}
	cout<<endl;
}
}
int main()
{
	pattern(3);
	return 0;
}



