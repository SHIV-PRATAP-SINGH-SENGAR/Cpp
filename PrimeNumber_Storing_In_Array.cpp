#include <iostream>
using namespace std;

//function for Prime Number
bool isPrime(int num ) 
{
    for (int i = 2; i < num; i++) 
    {
        if (num % i == 0) 
        {
            return false;
        }
    }

    return true;
}



int main() 
{
    int num;
    cout << "Enter The No. Of Elements >> ";
    cin >> num;
    
    int arr[num];
    int arrPrime[num];
    int arrNPrime[num];
    int PrimeCount=0;
    int NPrimeCount=0;

    for (int i = 0; i < num; i++) 
    {
    cout << "Enter The Number >> "<< (i+1) <<" >> ";
    cin >> arr[i];
    }
    
    
    for (int i = 0; i < num; i++) 
    {
        
    if (isPrime(arr[i])) 
    
    {
        arrPrime[PrimeCount++]=arr[i];
    }
    
    else 
    
    {
        arrNPrime[NPrimeCount++]=arr[i];
    }

    
    }
    
    for (int i= 0; i<PrimeCount; i++) 
        {
          cout << "Prime Numbers in array >> " << arrPrime[i] << endl;
        }
     for (int i= 0; i<NPrimeCount; i++) 
        {
          cout << "Non-Prime Numbers in array >> " << arrNPrime[i] << endl;
        }
    return 0;
}
