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

bool isPerfect(int number)
{
    int sum = 0;
    for(int i =1; i < number; i++)
    {
        if(number%i == 0)
        {
            sum += i;
        }      
    }
    return sum == number;
}

void printPefectNumInRange(int number)
{
    for(int i =1; i < number; i++)
    {
        if(isPerfect(i))
           cout << i << endl;
    }
}

int main ()
{
    printPefectNumInRange(ReadPositiveNumber("entter postive num : "));
}
