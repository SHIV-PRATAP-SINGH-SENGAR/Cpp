#include <iostream>
using namespace std;

int DigiFind(int n , int target)
{
    int rem;
    while(n>1)
    {
        rem=n%10;
        n=n/10;
        if(rem==target)
        {
            return 1; 
            break;  
        }
        
    }
    return 0;
}

int main()
{
    int n;
    int target;
    cout <<"Enter The Number >> ";
    cin >> n;
    cout <<"Enter The Target Digi >> ";
    cin >> target;

    cout << "Output >> " << DigiFind(n,target) << endl;

    return 0;
}