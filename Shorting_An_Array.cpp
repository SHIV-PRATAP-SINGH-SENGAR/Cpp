#include <iostream>
using namespace std;

int main()

{
    int num;
    cout << "Enter The Number Of Elements >> " << endl;
    cin >> num;

    int arr[num];
    for (int i=0;i<num;i++)
    {
        cout << "Enter The Number " << (i+1) << " >> ";
        cin >> arr[i];
    }
    if (num==0)
    {
        cout << "Array is Empty";
    }
    else{
    for (int i=1;i<num;i++)
    {
        int key=arr[i];
        int j=i-1;

        while (j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
            arr[j+1]=key;
        }
    }
    }

    for (int i=0;i<num;i++)
    {
        cout << "Sorted Array >> " << arr[i] << endl;
    }
}