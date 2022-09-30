#include<iostream>
using namespace std;

int getLargest(int arr[], int n)
{
    int res = 0;
    for(int i = 1; i<n; i++){
        if(arr[i]>arr[res]){
            res = i;
        }
    }
    return res;

}

int main()
{
    int arr[] = {10, 324, 45, 90, 9808};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Largest in given array is "
         << getLargest(arr, n);
    return 0;
}