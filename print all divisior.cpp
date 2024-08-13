                                
#include <bits/stdc++.h> 
using namespace std;

void divisor(int n){
	int count;
	int arr[count];
	for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            arr[count++] = i; 
        }
    }
    cout << "Divisors are : ";
    for (int i = 0; i <= count; i++) {
        cout<<arr[i] << " ";
    }
}

int main(){
	divisor(12);
	return 0;
}



//int* printDivisors(int n, int &size) {
//    // Allocate memory for
//    // the array of divisors
//    int *divisors = new int[n]; 
//     // Initialize the count of divisors
//    int count = 0;
//
//    for(int i = 1; i <= n; i++) {
//        if(n % i == 0) {
//            // Add the divisor to the array
//            divisors[count++] = i; 
//        }
//    }
//    // Update the size parameter
//    // with the count of divisors
//    size = count; 
//    // Return the array of divisors
//    return divisors; 
//}
//
//int main() {
//    int number = 12;
//    int size;
//    int *divisors = printDivisors(number, size);
//
//    cout << "Divisors of " << number << " are: ";
//    for (int i = 0; i < size; i++) {
//        cout << divisors[i] << " ";
//    }
//    delete[] divisors;
//
//    return 0;
//}             

