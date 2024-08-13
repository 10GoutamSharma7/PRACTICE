#include<iostream>
using namespace std;
void pattern(int n){
for (int i=1; i<=n; i++){
	
	for(int j=1; j<=i; j++){
		cout<<j;
	}
	
	for(int j=i; j<n*2-i; j++){
		cout<<" ";
	}
	
	for(int j=i; j>=1; j--){
		cout<<j;
	}
	
	cout<<endl;
	
}

}
int main()
{
	pattern(6);
	return 0;
}
