/*
   Description : This program is to arrays in function paramater.
   Date : 29-Feb-2024
*/

#include <iostream>

using namespace std;

void show1(int n, string nTexts[])
{
   // cout << "In show() size of array : " << sizeof(nTexts) << endl; 

    for (int i = 0; i < n; i++) {
        cout << nTexts[i] << endl;
    }
}

/* Passing array as pointers */
void show2(int n, string *pTexts)
{
    cout << "In show2() size of array : " << sizeof(pTexts) << endl; 
    for (int i = 0; i < n; i++) {
        cout << *(pTexts+i) << endl;
    }
}

/* Passing array as references */
void show3(string (&rTexts)[3])
{
    int  n  = sizeof(rTexts)/sizeof(string);
    cout << "In show3() size of array : " << sizeof(rTexts) << endl; 
    for (int i =0; i< n; i++) {
        cout << rTexts[i] << endl;
    }
}

char * getMemory(){
    char *a = new char(100);
    cout << "In the getMemory function " << endl;
    return a;
}

void freeMemory(char *ptr) {
    cout << "In the freeMemory function " << endl;
    delete [] ptr;
}

int main()
{  
    string texts[] = { "Apples", "Grapes", "Oranges"};
    int  nElements = sizeof(texts)/sizeof(string);

    cout << "In main() size of array : " << sizeof(texts) << endl; 


    show1(nElements, texts);
    show2(nElements, texts);
    show3(texts);    

    const char *pStr = getMemory();
    pStr = "This is a char array";

    //char pStr[] = "This is a char array";
    
   
    char *pTmp = (char *)pStr;

    while (*pTmp != 0) {
        cout << *pTmp << " " << flush;
        pTmp++;
    } 

    //freeMemory(pStr);

    return 0;
}
