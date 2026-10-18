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

bool isPerfectNumber(int number){
    int sum=0;
    for(int i=1;i<number;i++)
    {
        if(number%i == 0)
        {
         sum+=i;
        }

    }
    return number==sum;
 }

 void PrintAllNumberToN(int number)
{
    for(int i=1;i<number;i++)
        {
        if(isPerfectNumber(i))
        {
           cout<<i<<endl;
        }
        }

 }
int main()
{
    int number= ReadPositiveNumber("Enter number to find the Perfect number to N : " );
    PrintAllNumberToN(number);
}
