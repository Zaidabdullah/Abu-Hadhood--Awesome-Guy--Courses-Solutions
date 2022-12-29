#include <iostream>

using namespace std;


int ReadPositiveNumber(string Message)
{ 
    int Number = 0; 
    do
    {               
      cout << Message << endl;
      cin  >> Number;          
    }
    while (Number <= 0); 
        
    return Number; 
} 

bool isPrime(int number)
{
    for(int i =2; i < number; i++)
    {
        if(number%i == 0)
        {
            return true;
        }      
    }
    return false;
}

void printPrimeInRange(int range)
{
    for(int i =1; i < range; i++)
    {
        if(isPrime(i))
        cout << i << "\n";
    }
}

int main ()
{
    printPrimeInRange(7);
}
