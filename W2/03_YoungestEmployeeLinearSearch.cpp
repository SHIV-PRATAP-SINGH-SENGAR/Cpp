#include <iostream>
using namespace std;

int LinearSearch(int n)
{
    int arr[n];
    int min=arr[0];

    cout << "Enter The Age Of Employe >> ";
    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i];
        if(min>arr[i])
        {
            min =arr[i];
        }
    }

    return min;
}

int main()
{
    int n;
    cout << "Enter The No. Of Employes In Your Department >> ";
    cin >> n;

    int Age=LinearSearch(n);
    cout << "The age of the youngest employee >> " << Age << endl;

    return 0; 
}