/*
   Description : This program is to reverse the string using pointers.
   Date : 28-Feb-2024
*/

#include <iostream>

using namespace std;

int main()
{
    char text[] = "This is india country";
    
    cout << "The String Content : " << text << endl;  

    int nChars = sizeof(text) - 1;

    char *pText = text;
    char *pEnd = text + nChars -1;

    cout << "Size of string : " << nChars << endl;
    cout << "Start char : " << *pText << " End char : " << *pEnd << endl;
    

    while (true)
    {
        char cValue = *pText;
        *pText = *pEnd;
        *pEnd = cValue;
        
        pText++;
        pEnd--;

        if(pEnd <= pText)
          break;

    }

    cout << "The String Content after Reversal :" << text << endl;

    return 0;
}