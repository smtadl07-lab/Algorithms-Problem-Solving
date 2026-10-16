#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enPrimNotPrim{Prim=1,NotPrim=2};

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

enPrimNotPrim CheckPrime(int Number)
{

    int M = round(Number / 2);

    for (int Counter = 2; Counter <= M; Counter++)
    {
        if (Number % Counter == 0)
            return enPrimNotPrim::NotPrim;
    }


    return enPrimNotPrim::Prim;
}
void LoopPrintPrimaryToN(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(CheckPrime(i)== enPrimNotPrim::Prim)
            cout << i <<endl;
    }
}

int main()
{
    int number= ReadPositiveNumber("Enter number to find Primary Number from 1 to N: " );
    LoopPrintPrimaryToN(number);
}
