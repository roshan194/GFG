#include<iostream>
using namespace std;

void print(int arr[], int s, int e){

    for(int i=s;i<=e;i++){
        cout << arr[i] << " ";
    } cout << endl;
}

bool binarySearch(int *arr, int s, int e, int k){
    cout << endl;
    print(arr,s,e);
    //base case
    //element found
    if(s>e){
        return false;
    }

    int mid = s + (e-s)/2;
    //element found
    if(arr[mid]==k){
        return true;
    }

    if(arr[mid] < k){
        return binarySearch(arr, mid+1, e, k);
    }
    else{
        return binarySearch(arr, s, mid-1, k);
    }
}

int main()
{
    int arr[5] = {2,4,6,10,14};
    int size = 5;
    int key = 14;

    cout << "Present or not "  << binarySearch(arr, 0, 5, key);
    return 0;
}