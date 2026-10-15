#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

string CheckPrime(int Number)
{
    int M = round(Number / 2);

    for (int Counter = 2; Counter <= M; Counter++)
    {
        if (Number % Counter == 0)
            return "not primary number";
    }


    return "Primary number";
}

int main()
{
    int number= ReadPositiveNumber("Enter number to find if it primary or not : " );
    cout<<CheckPrime(number);
}
