#include <iostream>
using namespace std;

void BubbleSort(int arr[] , int n)
{
    int swap=0;
    for (int i=0 ; i<n ; i++)
    {
        for (int j=0 ; j<n-1 ; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swap+=1;

            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] ;
        if (i<n-1)
        cout << " < ";
    }
    cout <<"\n";
    cout << "Swap >> " << swap;

}

int main()
{
    int n;
    cout << "Enter the Number Of Elements >> ";
    cin >> n;

    int arr[n];
    for (int i=0 ; i<n ; i++)
    {
        cout << "Input -> " << i+1 << " >> ";
        cin >> arr[i];
    }
    
    BubbleSort(arr,n);

    return 0;

}