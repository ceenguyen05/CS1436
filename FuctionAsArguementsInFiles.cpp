#include <iostream>
#include <fstream>
#include <string>
using namespace std ;

// function prototypes 

void displayQuestion (string &) ;
ifstream openFile (string ) ;
int extractFile (ifstream & , int [] , int  ) ;
void displayFile (int , int [] ) ;

// global const variable 

const int SIZE = 100 ;

int main () 
{
    string fileName ; // string variable to collect file name 
    int arrayNumbers [SIZE] ; // created an array to store values as type int 
    
    // function calls 
    
    displayQuestion (fileName) ;
    ifstream file = openFile(fileName) ; // returns to ifstream and assigns to file
    int totalNumbers = extractFile (file , arrayNumbers , SIZE) ; // returns the amount 
    displayFile (totalNumbers , arrayNumbers ) ;
    
    return 0 ;
}

void displayQuestion (string & txt)
{
    cout << "Enter in the file name." << endl ;
    cin >> txt ;
    cout << endl ;
}

ifstream openFile (string txt) 
{
    ifstream inputFile ;
    inputFile.open (txt) ;
    
    if (!inputFile)
    {
        cout << "File cannot be found or is corrupted." << endl << endl ;
        
        return ifstream () ;
    }
    
    return inputFile ;
}

int extractFile (ifstream & inputFile , int array[] , int size)
{
    
    int totalNumbers = 0 ;
    
    while (inputFile >> array[totalNumbers])
    {
        totalNumbers++ ;
    }
    
    
    inputFile.close () ;
    
    return totalNumbers ; // returns the number of values in the file 
}

void displayFile (int total , int array [] )
{
    cout << "The numbers in the file are : " ; 
    
    for (int count = 0 ; count < total ; count++)
    {
        cout << array [count] << " " ;
    }
    
    cout << endl << endl << "This is all the numbers in the file." << endl << endl ;
}