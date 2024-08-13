
// Their are many ways to reverse array check them out
#include<iostream>
using namespace std;

void printarr(int arr[],int n){
	cout<<"reversed array =";
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
}

void revarr(int arr[],int start,int end){
	if(start<end){
		swap(arr[start],arr[end]);
		revarr(arr,start+1,end-1);
	}
}

int main(){
	int n=5;
	int arr[]={5,-4,3,0,1};
	revarr(arr,0,n-1);
	printarr(arr,n);
	return 0;
}









