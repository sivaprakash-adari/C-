#include <iostream>
#include <string>

using namespace std;

int main()
{
    string texts[] = { "Rohit", "Kohli", "Gill", "Jadeja", "Bumrah"};

    cout << "++++ Normal Array print ++++" << endl;

    for(int i =0; i < sizeof(texts)/sizeof(string); i++){
        cout << texts[i] << " " << flush;
    }

    cout << endl;

    string *ptext = texts;

    cout << "++++ Array print using pointer ++++" << endl;

    for(int i =0; i < sizeof(texts)/sizeof(string); i++){
        cout << *ptext << " " << flush;
        ptext++;
    }

    cout << endl;

    string *pElement = texts;
    string *pEnd = &texts[4];

    cout << "++++ Array print using only pointers ++++" << endl;

    while (true)
    {
        cout << *pElement << " " << flush;

        if (pElement == pEnd)
            break;

        pElement++;
    }

    cout << endl;

    cout << "++++ Array memories print ++++" << endl;

    cout << "Size of Array " << sizeof(texts) << " Size of string " << sizeof(string) << endl; 

    for(int i =0; i < sizeof(texts)/sizeof(string); i++){
        cout << ptext << " " << flush;
        ptext++;
    }
    
    cout << endl;

    string* pStart = &texts[0];
    string* pLast = &texts[5];
    cout << " Start string : " << (pStart) << endl; 
    cout << " End string : " << (pLast) << endl; 
    cout << " Total elements in string : " << (long) (pLast - pStart) << endl; 
    return 0;
}