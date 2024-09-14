#include <iostream>
using namespace std;



void reverseWords(char str[]) 
{
    int len = 0;
    while (str[len] != '\0')//\0 == null character 
    {
        len++;
    }

    int start = 0, end = len - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        
        start++;
        end--;

    }

    start = 0;
    for (int i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            end = i - 1;

            while (start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;

                start++;
                end--;
            }
            start = i + 1;
        }
    }
}

int main() 
{
    char sentence[] = "SHIV PRATAP SINGH SENGAR";
    reverseWords(sentence);
    cout << sentence << endl; 
    return 0;
}
