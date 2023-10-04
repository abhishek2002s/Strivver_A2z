#include <bits/stdc++.h>
using namespace std;
// This code implement iinsertion sort

void insertion_sort(int arr[], int n)
{
    //write your code here
    int j;
    for(int i=1;i<n;i++)
    {
        int val =arr[i];
        for( j= i-1;j>=0;j--)
        {
            if(arr[j]>val){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }

        }
            arr[j+1] = val;
    }


cout << "After Using insertion sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Using insertion Sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertion_sort(arr, n);
    return 0;
}