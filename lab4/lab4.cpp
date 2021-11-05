#include <iostream>
using namespace std;
int main()
{
    int firstK = 1;
    int n;
    int prevK = firstK;
    int lastK;
    cout << "Enter the n-th order of Katalan's number: ";
    cin >> n;
    if(n >= 3)
    {
        for(int i = 3; i<=n; i++)
        {
            lastK = (prevK * (4 * i - 6) / i);
            prevK = lastK;
        }
        cout << "The " << n << "-th Katalan's number is " << lastK << endl;
    }
    else
    {
    cout << "Please type a positive number that's bigger than 3." << endl;
    }
}