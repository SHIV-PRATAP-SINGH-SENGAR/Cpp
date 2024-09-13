#include <iostream>
using namespace std;

void ColorSort(int n)
{
    int nums[n];
    int red=0,white=0,blue=0;
    for (int i = 0; i < n; ++i) 
    {
        int ball;
        while (true)
        {
            cin >> ball;
            if (ball == 0 || ball == 1 || ball == 2)
            {
                nums[i] = ball;
                break;
            } 
            else
            {
                cout << "Invalid input. Please Enter the Elements \n 0 -> Red \n 1 -> White \n 2 -> Blue >> ";
            }
        }
        if (ball==0)
        {
            red++;
        }
        else if (ball==1)
        {
            white++;
        }
        else
        {
            blue++;
        }
        
        
    }

    if (n==0)
    {
        cout << "Array is Empty";
    }

    else
    {
        for (int i = 0 ; i < n; ++i)
        {
            int key=nums[i];
            int j=i-1;;

        while (j>=0 && nums[j]>key)
        {
            nums[j+1]=nums[j];
            j--;
            nums[j+1]=key;
        }
    }
    }

    for (int i = 0; i < n; ++i) 
    {
        cout << i+1 << " << >> " << nums[i]<<endl;
        
    }

    cout << "No. Of Red Balls >> " << red <<endl;
    cout << "No. Of White Balls >> " << white <<endl;
    cout << "No. Of Blue Balls >> " << blue <<endl;

  
}




int main()
{
    int n;
    cout << "Enter the No. of Elements >> ";
    cin >> n;
    // int nums[n];
    cout << "Enter the Elements \n 0 -> Red \n 1 -> White \n 2 -> Bluer >> ";
    ColorSort(n);
    return 0;

}