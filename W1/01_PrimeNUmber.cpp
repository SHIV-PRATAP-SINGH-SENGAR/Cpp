#include <iostream>

using namespace std;

void PrimeNumber(int n)
{
    if (n == 1 || n == 0)
    {
        cout << "False" << endl;
        return;
    }

    bool isPrime = true;
    for (int i = 2; i <= n/2 ; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    
    if (isPrime)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
}

int main()
{
    int n;
    cout << "Input >> " ;
    cin >> n;

    PrimeNumber(n);
    return 0;
}
