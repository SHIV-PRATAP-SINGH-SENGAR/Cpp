#include <iostream>
using namespace std;

int DecToBin(int Binary[] , int n , int &Size)
{
    int number=n;

    while(n>0)
    {
        Binary[Size]=n%2;
        n=n/2;
        Size++;
    }
    return Size;
}

int main()
{
    int Binary[32];
    int n;
    int Size=0;
    int Ones=0;
    int Zeros=0;

    cout << "Enter The Number >> ";
    cin >> n;
    if(n==0)
    {
        cout << "Invalid Input" << endl;
        return 1;
    }
    if (n < 0) {
        n = -n;
    }

    int output=DecToBin(Binary,n,Size);

    cout << "Binary Representation of Number >> "<< n <<" << is >> ";
    for(int i=0;i<output ; i++)
    {
        cout << Binary[i];
        if(Binary[i]==1)
        {
            Ones++;
        }
        if(Binary[i]==0)
        {
            Zeros++;
        }
    }
    cout << endl;

    cout <<"Output (Number of Bit's) >> " << Size << endl;
    cout <<"No. Of 1's >> " << Ones << endl;
    cout <<"No. Of 0's >> " << Zeros << endl;

    return 0;
}