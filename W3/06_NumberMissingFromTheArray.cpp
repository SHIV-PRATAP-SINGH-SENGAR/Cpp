#include <iostream>
using namespace std;

int MissingNumber(int arr[],int n)
{
    int min = arr[0];
    int max = arr[0];
    int Sum=0;
    for(int i=0 ; i<n ; i++)
    {
        Sum=Sum+arr[i];
        if (min > arr[i]) 
        {
            min = arr[i];
        }

        if (max < arr[i]) 
        {
            max = arr[i];
        }
    }

    int Sum01 = 0;

    for (int i = min; i <= max; i++) 
    {
        Sum01 += i;
    }
    return (Sum01 - Sum);
}

int main()
{
    int n;
    cout << "Enter the No. of Elemrnts >> ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid array size" << endl;
        return -1;
    }

    int arr[n];
    cout << "Enter The Number In Array >>";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    cout << "Missing Number In The Given Elements >>  "<< MissingNumber(arr,n);
}