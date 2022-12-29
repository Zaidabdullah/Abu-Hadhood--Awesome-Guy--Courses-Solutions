#include<iostream>
using namespace std;

int readNumber()
{
    int number;
    cout << "enter Positive number\n";
    cin >> number;
    
    while(cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<T>::max(), '\n');
        cout << "Invalid Number, Enter a valid one:" << endl;
        cin >> number;
    } 
    return number; 
        
}
    
int main()
{
    readNumber();
}