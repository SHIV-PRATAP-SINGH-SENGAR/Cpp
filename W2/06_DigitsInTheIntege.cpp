#include <iostream>
using namespace std;

int DigiCount(int n)
{
    int digi=0;
    while (n>0)
    {
        n=n/10;
        digi+=1;
    }

    return digi;
}

int main()
{
    int n;
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

    cout <<"Output >> " <<  DigiCount(n) << endl;

    return 0;
}