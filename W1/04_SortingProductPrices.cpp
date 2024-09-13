#include <iostream>
using namespace std;

void InsertionSort(int nums[] , int n)
{
    for (int i=0 ; i<n ; i++)
    {
        int key=nums[i];
        int j=i-1;

        while (j>=0 && nums[j]>key)
        {
            nums[j+1]=nums[j];
            j--;
            nums[j+1]=key;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] ;
        if (i<n-1)
        cout << " < ";
    }
    
}

int main()
{
    int n;
    cout << "Enter the Number Of Elements >> ";
    cin >> n;

    int arr[n];
    for (int i=0 ; i<n ; i++)
    {
        cout << "Input Amount " << i+1 << " >> "; 
        cin >> arr[i];
    }

    InsertionSort(arr,n);

    return 0;

}