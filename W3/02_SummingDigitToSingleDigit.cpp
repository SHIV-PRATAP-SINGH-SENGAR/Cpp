#include <iostream>
using namespace std;

int DigiSumToOne(int n)
{
    int sum,rem;
    while(n>1)
    {
        rem=n%10;
        sum+=rem;
        n=n/10; 
    }
    
    if (sum < 10)
    {
        return sum;
    }
    else
    {
        return DigiSumToOne(sum);
    }
}

int main()
{
    int n;
    cout <<"Enter The Number >> ";
    cin >> n;

    cout << "Output >> " << DigiSumToOne(n) << endl;

    return 0;
}