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

void printInReversedOrder(int number)
{
    int  Remainder = 0; 
    while (number > 0)     
    {
        Remainder = number % 10; 
        number = number / 10;         
        cout << Remainder << endl;     
    }  
}

int main ()
{
    printInReversedOrder(ReadPositiveNumber("entter postive num : "));
}
