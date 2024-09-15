#include <iostream>
using namespace std;

int FirstAndLast(int arr[],int n , int target)
{
    int j=0;
    int first=-1,last=-1;
    for(int i=0 ; i<n ; i++)
    {
        if(target != arr[i])
            continue;
        if(first==-1)
            first=i;
        last=i;
    }

    cout << "Output >> "<< first << " " << last <<  endl;

    return 0;

}

int main()
{
    int n;
    cout << "Enter The No. Of the Elements >> ";
    cin >> n;

    int Sorted[n];
    cout << "Enter The Elements int the array in sorted Order >> ";
    for(int i=0 ; i<n ; i++)
    {
        cin >> Sorted[i];
    }

    int target;
    cout << "Enter The No. To Find In Array >> ";
    cin >> target;
    
    FirstAndLast(Sorted,n,target);

}