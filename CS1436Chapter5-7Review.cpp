#include <iostream>
#include <fstream>
#include <string>
using namespace std ;

// function parameters 

void displayQuestion ( int & , double & , int & ) ;
void displayValues ( int , double , int ) ;
double mathmatics ( int , double , int ) ;

const int SIZE = 100 ;

int main () 
{
    
    
    // simple while loop 
    
    int x = 1 ;
    
    while (x > 0) 
    {
        cout << "Enter a number. " ;
        cin >> x ;
        cout << endl ;
        
        cout << "Your number was " << x << "." << endl << endl ;
    }
    
    cout << "That is all. " << endl << endl ;
    
    // simple while loop that ensures you pick a valid month
    
    int month ;
    
    cout << "Enter in a month ranging from 1-12. " ;
    cin >> month ;
    
    while (month < 1 || month > 12)
    {
        cout << endl << "Error, invalid month chosen. " << endl ;
        cout << "Please enter a valid month. " ;
        cin >> month ;
    }
    
    cout << endl ;
    
    switch (month) 
    {
        case 1 :
        cout << "Your month is January. " << endl << endl ;
        break ;
        
        case 2 :
        cout << "Your month is Febuary. " << endl << endl ;
        break ;
        
        case 3 :
        cout << "Your month is March. " << endl << endl ;
        break ;
        
        case 4 : 
        cout << "Your month is April. " << endl << endl ;
        break ;
        
        case 5 :
        cout << "Your month is May. " << endl << endl ;
        break ;
        
        case 6 :
        cout << "Your month is June. " << endl << endl ;
        break ;
        
        case 7 :
        cout << "Your month is July. " << endl << endl ;
        break ;
        
        case 8 :
        cout << "Your month is August. " << endl << endl ;
        break ;
        
        case 9 :
        cout << "Your month is September. " << endl << endl ;
        break ;
        
        case 10 :
        cout << "Your month is October. " << endl << endl ;
        break ;
        
        case 11 :
        cout << "Your month is November. " << endl << endl ;
        break ;
        
        case 12 :
        cout << "Your month is December. " << endl << endl ;
        break ;
    }
    
    // try a do while loop with a math game 
    
    double number1 , number2 , result ;
    int choice ;
    char answer ;
    
    do 
    {
        cout << "Pick a number. " ;
        cin >> number1 ;
        cout << "Pick another number. " ;
        cin >> number2 ;
        cout << "Choose what action to do. " << endl ;
        cout << "1. Addition" << endl ;
        cout << "2. Subtraction" << endl ;
        cout << "3. Multiplication" << endl ;
        cout << "4. Division" << endl ;
        cin >> choice ;
        cout << endl << endl ;
        
        switch (choice) 
        {
            case 1 :
            result = number1 + number2 ;
            cout << number1 << " plus " << number2 << " equals " << result << "." << endl << endl ;
            break ;
            
            case 2 :
            if (number1 > number2)
            {
                result = number1 - number2 ;
                cout << number1 << " minus " << number2 << " equals " << result << "." << endl << endl ;
            }
            else 
            {
                result = number2 - number1 ;
                cout << number2 << " minus " << number1 << " equals " << result << "." << endl << endl ;
            }
            break ;
            
            case 3 :
            result = number1 * number2 ;
            cout << number1 << " times " << number2 << " equals " << result << "." << endl << endl ;
            break ;
            
            case 4 :
            if (number1 > number2)
            {
                result = number1 / number2 ;
                cout << number1 << " divided by " << number2 << " equals " << result << "." << endl << endl ;
            }
            else 
            {
                result = number2 / number1 ;
                cout << number2 << " divided by " << number1 << " equals " << result << "." << endl << endl ;
            }
            break ;
        }
        
        cout << "Would you like to calculate two numbers again? ( Y or N ) " ;
        cin >> answer ;
        cout << endl ;
    }
    while (answer == 'Y') ;
    
    cout << "Thank you for using my calculator. " << endl << endl ;
    
    // try a for loop , adding up hours worked for the weekday
    
    int hours, totalhours ;
    totalhours = 0 ;
    
    for (int count = 1 ; count <= 5 ; count++)
    {
        cout << "How many hours did you work today? " ;
        cin >> hours ;
        cout << endl ;
        
        totalhours += hours ;
    }
    
    cout << "Total hours worked this week was " << totalhours << "." << endl << endl ;
    
    // try and open and close files 
    
    ofstream outputFile ;
    int rent , houses ;
    int result1 = 0 ;
    int counter = 1 ;
    outputFile.open ("rent.txt") ;
    
    cout << "How many houses do you have for rent? " ;
    cin >> houses ;
    cout << endl ;
    
    for (houses ; houses > 0 ; --houses)
    {
        cout << "How much money does house " << counter << " make? " ;
        cin >> rent ;
        outputFile << "House " << counter << " makes $" << rent << " per month." << endl ;
        counter++ ;
        result1 += rent ;
    }
    
    outputFile << "The total rent for this month is $" << result1 << ". " << endl << endl ;
    
    outputFile.close () ;
    
    cout << endl << "The rent has been written onto rent.txt" << endl << endl ;
    
    ifstream inputfile ;
    string txt ;
    int counter1 = 1 ;
    int rentcollected ;
    
    cout << "Enter the file name. " ;
    cin >> txt ;
    cout << endl ;
    
    inputfile.open (txt) ;
    
    while (inputfile >> rentcollected)
    {
        cout << "The rent collected from house " << counter1 << " was $" << rentcollected << endl ;
        counter1++ ;
    }
    
    inputfile.close () ;

    // create multiple fucntions to execute the follow code 
    
    int value1, value3 ;
    double value2 ;
    
    // fucntion call sending values to display function
    
    displayQuestion (value1 , value2 , value3) ;
    displayValues (value1 , value2 , value3) ;
    
    // fucntion call sending values to mathmatics function 
    // gets the return value and sends it to the variable total
    
    double total = mathmatics (value1 , value2 , value3) ;
    
    cout << "The total of these three numbers is " << total << endl << endl ;
    
    ifstream inputFile ;
    string fileName ;
    
    cout << "What is the file name?    " ;
    cin >> fileName ;
    cout << endl ;
    
    inputFile.open (fileName) ;
    
    if (!inputFile)
    {
        cout << "Corrupted or non-existent file on record." << endl << endl ;

        return 0 ;
    }
    
    int rent1 [SIZE] ;
    int houseNumber1 = 1 ;
    int counter2 = 0 ;
    int result2 = 0 ;
    
    while (inputFile >> rent1[counter2])
    {
        cout << "Rent for house " << houseNumber1 << " was $" << rent1[counter2] << " for this month." << endl ;
        result2 += rent1[counter1] ;
        houseNumber1++ ;
        counter2++ ;
    }
    
    inputFile.close () ;
    
    cout << endl << "The total rent collected for this month is $" << result1 << "." << endl ;
    cout << "That is all the rent for this month. " << endl << endl ;
    
    // ranage based for loop 
    
    string cars [] = { "Tesla" , "Honda" , "Acura" } ;
    int count = 1 ;
    
    for (string carsOwned : cars)
    {
        cout << "Car " << count << " for the Nguyen Family is a " << carsOwned << "." << endl ;
        count++ ;
    }
    
    count-- ;
    cout << endl << "The total cars owned is " << count << " cars." << endl << endl ;
    return 0;
    
} 

void displayQuestion (int &num , double &num2 , int &num3) 
{
    cout << endl << "Enter a integer." << endl ;
    cin >> num ;
    cout << endl ;
    
    cout << "Enter a real number." << endl ;
    cin >> num2 ;
    cout << endl ;
    
    cout << "Enter another integer." << endl ;
    cin >> num3 ;
}

// function header

void displayValues (int num , double num2 , int num3) 
{
      cout << endl << "The numbers are " << num << ", " << num2 << ", " << num3 << endl << endl ;
}

// function header

double mathmatics (int num , double num2 , int num3)
{
    return ( static_cast<double> (num) + num2 + num3 ) ;
}
