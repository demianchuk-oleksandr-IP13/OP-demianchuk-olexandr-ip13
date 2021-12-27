#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;
/* srand(time(NULL));
rand() % (max - min + 1) + min; */

const int size = 7;
int p, q;
int array[size];

void input_array(int*);
void output_array(int*);
int search_max(int*);
int max_squared(int*);

int main()
{
    cout << "Enter p and q (p>0):";
    cin >> p >> q;
    input_array(array);
    max_squared(array);
    cout << "array: ";
    output_array(array);
}

void input_array(int *ptr)
{
    srand(time(NULL));
    for(int i=0; i<size; i++)
    {
        *ptr = rand() % 19 - 9;
        p++;
    } 
}

void output_array(int *ptr)
{
    for(int i=0; i<size, i++)
    {
        printf("%3d", *(ptr+i));
        printf("\n")
    }
}

int search_max(int *ptr)
{
    int max = *ptr;
    for(int i=0; i<size; i++)
    {
        if(max<*(ptr+i)) max = *(ptr+i);
    }
    return max;
}

int max_squared(int *ptr)
{
    int max = search_max(ptr);
    for(int i=0; i<size; i++)
    {
        if(abs(*(ptr+i))/p == q)
        {
            *(ptr+i) = max;
        }
    }
}
