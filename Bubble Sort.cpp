#include<iostream>
using namespace std;

void bubble_sort(int arr[], int n){
	for(int i=n-1;i>=0;i--){
		
		for(int j=0;j<=i-1;j++){
			
			if(arr[j] > arr[j+1]){
				int temp = arr[j+1];
		        arr[j+1] = arr[j];
		        arr[j] = temp;
			}
		}
	}
	cout<<"After bubble sort:- ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int n;
	cout<<"Enter size of Array:- ";
	cin>>n;
	int arr[n];
	cout<<"Enter elements inside Array:- ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	bubble_sort(arr,n);

	return 0;
}
