#include<iostream>
using namespace std;
void pattern(int n){
for (int i=0;i<=n;i++){
	for(int j=n;j>i;j--){
		cout<<n-j+1;
	}
	cout<<endl;
}
}
int main()
{
	pattern(5);
	return 0;
}
