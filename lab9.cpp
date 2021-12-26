#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;
int* counter(char[]);

int main()
{
    cout << "enter the string up to 100 symbols:\n";
    char str[100];
    gets(str);
    int* amount = counter(str);
    for(int i = 0; i < 255; i++)
    {
        if(amount[i] != 0) cout << "char [" << char(i) << "] is found " << amount[i] << " times\n"; 
    }
}

int* counter(char str[])
{
    int length = strlen(str);
    int *char_count = new int[255];
    for(int i = 0; i < length; i++)
    {
        char_count[(int)str[i]]++;
    }
    delete [] char_count;
    return char_count;
}