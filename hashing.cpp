//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//
//    int n;
//    cout<<"Enter size of an array: ";
//    cin >> n;
//    int arr[n];
//    cout<<"Enter array elements:";
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//
//    //precompute:
//    int hash[13] = {0};
//    for (int i = 0; i < n; i++) {
//        hash[arr[i]] += 1;
//    }
//
//    int q;
//    cin >> q;
//    while (q--) {
//        int number;
//        cout<<"Enter number: ";
//        cin >> number;
//        // fetching:
//        cout <<"frequency: "<< hash[number] << endl;
//    }
//    return 0;
//}


#include <iostream>

using namespace std;

void Frequency(int arr[], int n)
{
    unordered_map<int, int> map;

    for (int i = 0; i < n; i++)
        map[arr[i]]++;

    int maxFreq = 0, minFreq = n;
    int maxEle = 0, minEle = 0;
    // Traverse through map to find the elements.
    for (auto it : map) {
        int count = it.second;
        int element = it.first;

        if (count > maxFreq) {
            maxEle = element;
            maxFreq = count;
        }
        if (count < minFreq) {
            minEle = element;
            minFreq = count;
        }
    }

    cout << "The highest frequency element is: " << maxEle << "\n";
    cout << "The lowest frequency element is: " << minEle << "\n";
}

int main()
{
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    Frequency(arr, n);
    return 0;
}
