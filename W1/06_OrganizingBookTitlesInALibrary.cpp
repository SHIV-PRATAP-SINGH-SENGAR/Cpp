#include <iostream>
using namespace std;

void BubbleSortString(string arr[],int n)
{
    cout << "Before Swap >> ";
    for (int i=0 ; i<n ; i++)
    {
        cout << arr[i];
        if (i<n-1)
        cout << " < > ";   
    }
    cout << "\n\n";
    
    int swap=0;
    for (int i=0 ; i<n ; i++)
    {
        for (int j=0 ; j<n-1 ; j++)
        {
            if (arr[j] > arr[j+1])
            {
                string temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swap+=1;

            }
        }
    }

    cout << "After Swap >> ";
    for (int i=0 ; i<n ; i++)
    {
        cout << arr[i];
        if (i<n-1)
        cout << " < > ";    
    }
}

int main()
{
    int n;
    cout << "Enter the nUmber Of Books >> ";
    cin >> n;
    cin.ignore();

    string arr[n];

    for (int i=0 ; i<n ; i++)
    {
        cout << "Enter The Title Of Book " << i+1 << " >> ";
        // cin >> arr[i];
        getline(cin, arr[i]);
    }
    BubbleSortString(arr,n);

}