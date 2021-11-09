#include <iostream>
#include <math.h>
using namespace std;

int main()
{
cout << "The list of three-digit numbers, which are equal to the sum of their digits, powered to 3:" << endl;

for(int hundred = 1; hundred <= 9; hundred++)
    {
        for(int ten = 0; ten <= 9; ten++)
        {
            for(int one = 0; one <= 9; one++)
            {
                int sum = pow(hundred, 3) + pow(ten, 3) + pow(one, 3);
                int number = hundred * 100 + ten * 10 + one;
                
                if(sum == number)
                {
                    cout << number << endl;
                }
            }
        }
    }
}