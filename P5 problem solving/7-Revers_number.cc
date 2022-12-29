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

int  reversedNumber(int number)
{
    int  reversedNum = 0; 
    int Remainder =0;
    while (number > 0)     
    {
        Remainder = number % 10; 
        number = number / 10;         
        reversedNum = reversedNum*10 + Remainder;     
    }  
    return reversedNum;
}

int main ()
{
    cout << reversedNumber(12345) << endl;
}
