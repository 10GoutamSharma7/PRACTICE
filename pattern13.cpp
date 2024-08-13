#include<iostream>
using namespace std;
void pattern(int n){
for (int i=n-1; i>=0; i--){
	
	for(char ch='A'; ch<='A'+i; ch++){
		cout<<ch<<" ";
	}
	cout<<endl;
}
}
int main()
{
	pattern(6);
	return 0;
}
