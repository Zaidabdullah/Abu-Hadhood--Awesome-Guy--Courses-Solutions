#include <iostream>
#include <iomanip>

using namespace std;

void printTableHeader()
{
    cout << setw(3*4)<< " " << "multiplicatio table from 1 to 10\n";
    cout << setw(2) << "";
    for(short i =1; i <= 10; i++)
    {
        cout << setw(4*2) << right << i ;
    }
    cout << endl;
    cout << "______________________________________________________________________\n";
}
void printMultiplicationTable()
{
  
    printTableHeader();
    for(short i =1; i <= 10; i++)
    {
        cout << setw(4*2) << left << i <<"|";
        for(short j =1; j <= 10; j++)
        {
            cout << setw(4*2) << left << i*j;
        }
        cout << endl;
    }
}

int main ()
{
    printMultiplicationTable();
}