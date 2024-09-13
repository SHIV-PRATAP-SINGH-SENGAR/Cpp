#include <iostream>

using namespace std;

void PNWGR(int L, int R)
{
    if (L > R)
    {
        cout << "Invalid Input" << endl;
        return;
    }

    if (L < 2){ L = 2; }
    
    for (int i = L; i <= R; ++i)
    {
        bool isPrime = true;
        
        for (int j = 2; j <= i/2; ++j)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        
        if (isPrime)
        {
            cout << i << endl;
        }
    }
}

int main()
{
    int L, R;

    cout << "Input L >> ";
    cin >> L;

    cout << "Input R >> ";
    cin >> R;

    PNWGR(L, R);
    return 0;
}
