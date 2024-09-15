#include <iostream>
using namespace std;

int PeakElement(int nums[],int n)
{
    int index;

    if (n == 1)
        return 0;

    for (int i=1;i<n;i++)
    {
        if(nums[i] >= nums[i-1] && nums[i] >= nums[i+1] && i<n-1)
        {
            return i;
            break;
        }
    }

    return -1;
}

int main()
{
    int n,index;
    cout << "Enter the No. of Elements >>";
    cin >> n;

    if(n<=0)
    {
        cout<<"Invalid"<<endl;
        return -1;
    }

    int nums[n];
    cout<< "Enter The Elements >> ";
    for (int i=0;i<n;i++)
    {
        cin >> nums[i];
    }

    index = PeakElement(nums,n);

    if (index != -1)
        cout << "Peak Element is at index: " << index << " with value: " << nums[index] << endl;
    else
        cout << "No peak element found" << endl;

    return 0;
}