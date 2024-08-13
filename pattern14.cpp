#include<iostream>
using namespace std;
void pattern(int n){
char ch='A';
for (int i=1; i<=n; i++){

	for(int j=1; j<=i; j++){
		cout<<ch<<" ";
	}
	ch='A'+i;
	cout<<endl;
}
}
int main()
{
	pattern(3);
	return 0;
}
