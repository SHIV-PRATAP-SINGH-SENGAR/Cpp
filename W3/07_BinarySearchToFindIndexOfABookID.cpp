#include <iostream>
using namespace std;

int BinarySearch(int arr[],int n,int target)
{
    int left=0;
    int right=n-1;

    while (left <= right) 
    {
        int mid=left + (right - left) / 2;
        
        if(arr[mid]==target)
        {
            return mid;
        }
        if (arr[mid]<target)
        {
            left=mid+1;
        }
        if (arr[mid]>target)
        {
            right=mid-1;
        }
    }

    return -1;

}

int main()
{
    int n;
    cout << "Enter the Total No. of Books >> ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid No. Of Books" << endl;
        return -1;
    }

    int arr[n];
    for(int i=0;i<n;i++)
    {
         cout << "Enter The ID's Of Book " << i+1 << " >> ";
        cin >> arr[i];
    }

    int target;
    cout << "Enter The ID Of The Book >>";
    cin >> target;


    int index=BinarySearch(arr,n,target);
    
    if (index!=-1)
    {
        cout << "Target value >> " << target << " Found At index >> " << index << endl;
    }
    else
    {
        cout << "No Book Found Output >> " << index << endl;
    }

    return 0;
}