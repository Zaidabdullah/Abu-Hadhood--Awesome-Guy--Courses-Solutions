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

int  sumOfNumberDigits(int number)
{
    int  Remainder = 0; 
    int sum =0;
    while (number > 0)     
    {
        Remainder = number % 10; 
        number = number / 10;         
        sum += Remainder;     
    }  
    return sum;
}

int main ()
{
    cout << sumOfNumberDigits(12345) << endl;
}
