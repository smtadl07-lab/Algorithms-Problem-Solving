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

bool isPerfectNumber(int number)
{
    int sum=0;
    for(int i=1;i<number;i++)
    {
        if(number%i == 0)
            sum+=i;
    }
    return number==sum;
 }

 void PrintResult(int number )
{
    if(isPerfectNumber(number))
        cout <<number <<" is a perfect number " << endl;
    else
        cout << number << " is not a perfect number " << endl;
 }

int main(){
    int number= ReadPositiveNumber("Enter number to find if it Perfect number: " );
    PrintResult(number);
}
