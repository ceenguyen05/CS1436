#include <iostream>
using namespace std ;

const int COLS = 3 ;

int main () 
{
    int row1 , row2 ;
    
    // ask user for size of rows for the two tables 
    
    cout << "Enter the size of the row for your first table. " ;
    cin >> row1 ;
    cout << endl << endl ;
    
    // create the arrays for each table 
    
    int array1 [row1][COLS] ;
    
    // ask the user to fill out numbers for the tables 
    
    cout << "Enter the numbers for your first table's rows." << endl ;
    
    for (int count = 0 ; count < row1 ; count++)
    {
        for (int count1 = 0 ; count1 < COLS ; count1++ )
        {
            cin >> array1 [count][count1] ;
        }
    }
    
    cout << "The table is as shown : " << endl ;
    
    for (int count2 = 0 ; count2 < row1 ; count2++)
    {
        for (int count3 = 0 ; count3 < COLS ; count3++ )
        {
            cout <<  array1 [count2][count3] << " " ;
        }
    }
    
    return 0 ;
}