#include <iostream>
using namespace std;

int IndexOfTarget(int arr[],int n,int target)
{
    int index;
    for(int i=0;i<n;i++)
    {
        if (target==arr[i])
        {
            return i;
            break;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the No. Of Elements >> ";
    cin>>n;
    int arr[n];

    if (n<=0)
    {
        cout <<"Empty Array" << endl;
        return 1;
    }
    
    cout << "Enter The Elements >> ";
    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i];
    }

    int target;
    cout << "Enter The Targetted Element >> ";
    cin >> target;


    int Index=IndexOfTarget(arr,n,target);

    if(Index==-1)
    {
        cout << "Element " << target << " Dosent Exist ";
    }
    else
    {
        cout << "Element " << target << "  Found at >> " << Index << endl;
    }

    return 0;
}