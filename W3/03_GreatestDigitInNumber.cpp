#include <iostream>
using namespace std;

int GreatestDigit(int n)
{
    int Max=0,rem;
    while(n>1)
    {
        rem=n%10;
        n=n/10;
        if(rem>Max)
        {
            Max=rem;  
        }
        
    }
    return Max;
}

int main()
{
    int n;
    cout <<"Enter The Number >> ";
    cin >> n;

    cout << "Output >> " << GreatestDigit(n) << endl;

    return 0;
}