#include<iostream>
using namespace std;
void pattern(int n){

for (int i=0; i<=n; i++){
	for(char uv='A'+(n-i); uv<'A'+n; uv++){
		cout<<uv<<" ";	
	}
	cout<<endl;
}
}
int main()
{
	pattern(6);
	return 0;
}
