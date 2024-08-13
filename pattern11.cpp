#include<iostream>
using namespace std;
void pattern(int n){
int x=1;
for (int i=1; i<=n; i++){
	for(int j=1; j<=i; j++){
		cout<<x<<" ";
		x++;
	}
	
	cout<<endl;
}
}
int main()
{
	pattern(6);
	return 0;
}
