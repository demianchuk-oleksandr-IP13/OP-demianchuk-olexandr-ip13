#include <iostream>
using namespace std;
void Input();
int Divisors_sum(int);
void Output();
int number;

int main()
{
    Input();
    Output();
}

void Input()
{
    cout << "Enter the number to count every perfect number before it: ";
    cin >> number;
}

int Divisors_sum(int n)
{
    int sum = 0;
    for(int i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}

void Output()
{
    for(int j = 1; j <= number; j++)
    {
        if(j == Divisors_sum(j))
        {
            cout << j << endl;
        }
    }
}
