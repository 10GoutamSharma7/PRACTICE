
#include<iostream>
using namespace std;
void pattern(int n){

for(int i=0; i< n*2-1; i++){
	
	for(int j=0; j< n*2-1; j++){
		
		int top = i;
		int left = j;
		int down = (2*n-2)-i;
		int right = (2*n-2)-j;
		
		cout<<(n-min(min(top,down),min(left,right)));
	}
	cout<<endl;
	}
}
	
int main(){
	pattern(5);
	return 0;
}
