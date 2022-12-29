#include <iostream>

using namespace std; 


int main ()
{
    int number = -44;
    string result ;
    
    result = (number < 0)?  "negative" :  " positive";
    cout << "number is " << result << endl;
    
    result = (number == 0)?  "zero" : (number < 0)?  "negative" : "positive";
    cout << "number is " << result << endl;    
}

