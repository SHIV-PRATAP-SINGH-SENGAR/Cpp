#include <iostream>
using namespace std;

void SelectionSort(int arr[], int n)
{
    int swaps=0;
    for(int i=0 ; i<n ; i++)
    {
        int min=i;
        for(int j=i+1 ; j<n ; j++)
        {
           
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }

        

        if (min != i) 
        {
            arr[i] = arr[i] ^ arr[min];
            arr[min] = arr[i] ^ arr[min];
            arr[i] = arr[i] ^ arr[min];

            swaps+=1;
        }
    }

    for(int i=0 ; i<n ; i++)
    {
        cout << arr[i];
        if (i < n-1)
        {
            cout << " ";
        }
        

    }
    cout << endl;
    cout << "Minimum number of swaps required to sort the array in ascending order using Selection Sort >> " << swaps << endl; 
}

int main()
{
    int n;
    cout << "Enter the No. Of Citizens >> ";
    cin>>n;
    int arr[n];

    if (n<=0)
    {
        cout <<"Empty Array" << endl;
        return 1;
    }
    
    for(int i=0 ; i<n ; i++)
    {
        cout << "Enter The Age of Citizen " << i+1 << " >> ";
        cin >> arr[i];
    }
    cout << "\n\n";

    bool sorted;
    for (int i = 0; i < n ; ++i)
    {
        if (arr[i] > arr[i + 1])
        {
            sorted=false;
            break;
        }
        sorted=true;
    }

    if (sorted)
    {
        cout << "The array is already sorted." << endl;
        return 0;
    }
    else 
    {
        SelectionSort(arr,n);
    }
    

    return 0;
}