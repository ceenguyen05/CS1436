#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std ;

int main () 
{
    // simple code for displaying letters to the output / user 
    
    cout << "Hello I am trying to learn code." ;
    cout << endl ;
    cout << "Wish me luck." ;
    cout << endl ;
    cout << "Goodbye." ;
    cout << endl ;
    cout << "My mom said: " ;
    cout << "\"Goodluck son!\"" ;
    cout << endl << endl ;
    
    // defining variables with type and int 

    int number1 , number3 ;
    double number2 ;
    
    // initializing the vairbales with values given by their data type 
    
    number1 = 10 ;
    number2 = 12.5 ;
    number3 = 20 ;
    
    // basic math functions , put into new variables 
    
    int sum = number1 + number3 ;
    int times = number1 * number3 ;
    int divise = number3 / number1 ;
    int minus = number3 - number1 ;
    
    // displays value to output by inputing variables
    
    cout << number1 ;
    cout << endl ;
    cout << number2 ;
    cout << endl ;
    cout << sum ;
    cout << endl ;
    cout << times ;
    cout << endl ;
    cout << divise ;
    cout << endl ;
    cout << minus ;
    cout << endl << endl ;
    
    // uses the string type with the variables 
    // initializes the variable with the string using ""
    
    string kermit , kirby ;
    kermit = "I am the best frog to ever grace your lives" ;
    kirby = "I am the best smash bro's character to ever live on this galaxy" ;
    
    // displays contents of string to output 
    
    cout << kermit ;
    cout << endl ;
    cout << kirby ;
    cout << endl ;
    cout << endl ;
    
    string name ;
    int age , birthYear ;
    
    // asks the user what is their name , age and birth year and then displays it 
    
    cout << "What is your name? : " ;
    cin >> name ;
    cout << endl ;
    cout << "What is your age and birth year? : " ;
    cin >> age >> birthYear ;
    cout << endl ;
    cout << endl ;
    
    cout << "Your name is " << name << endl ;
    cout << "Your age is " << age << endl ;
    cout << "Your birth year is " << birthYear << endl << endl ;

    // Shows the use of the pow function in the cmath library
    // takes in two arguments to perform the function 
    
    int power ;
    power = 4 ;
    power = pow(power,3) ;
    
    cout << "4 to the power of 3 is " << power << "." << endl << endl ;
    
    // get the radius of a circle given data by the user 
    
    const double PI = 3.14 ;
    double radius, area ;
    
    cout << "What is the radius of the circle? : " ;
    cin >> radius ;
    cout << endl << endl ;
    
    area = PI * pow(radius, 2) ;
    
    cout << "The area of the circle is " << area << "." << endl << endl ;
    
    // try coercion 
    
    int value1 ;
    double value2 ;
    
    cout << "Enter a whole number then a real number. " ;
    cin >> value1 >> value2 ;
    cout << endl ;
    
    double divise1 = value1 / value2 ;
    
    cout << value1 << " divided by " << value2 << " is " << divise1 << "." << endl << endl ;
    
    // try static cast with int and char 
    
    int num1 , num2 ;
    double result ;

    cout << "Enter in two whole numbers. " ;
    cin >> num1 >> num2 ;
    cout << endl ;
    
    result = static_cast<double> (num1) / num2 ;
    
    cout << "The result is " << result << "." << endl << endl ;
    
    char letter ;
    
    cout << "Enter a letter. " ;
    cin >> letter ;
    cout << endl ;
    
    cout << "The value for " << letter << " is " << static_cast<int> (letter) << "." << endl << endl ;
    
    // try using combined assignment operators 
    
    int age1 , multiple ;
    
    cout << "Enter your age : " ;
    cin >> age1 ;
    cout << endl ;
    cout << "Enter what you would like to multiply your age by : " ;
    cin >> multiple ;
    cout << endl << endl ;
    
    int ageMultiple ;
    
    ageMultiple = age1 * multiple ;
    ageMultiple *= 2 ;
    
    cout << "Your age multipled by " << multiple << " and then multipled by 2 equals " << ageMultiple << "." ;
    cout << endl << endl ;
    
    // format numbers and words 
    
    double value3 , value4 , value5 , value6 ;
    value3 = 5.0 ;
    value4 = 10.075 ;
    value5 = 200.00600 ;
    value6 = 10 ;
    
    cout << "These are different output formats. " << endl ;
    cout << value3 << endl ;
    cout << showpoint << value3 << noshowpoint << endl ;
    cout << value4 << endl ;
    cout << setprecision(4) << value4 << setprecision(6) << endl ;
    cout << value5 << endl ;
    cout << fixed << setprecision(2) << value5 
         << defaultfloat << setprecision(6) << endl << endl ;
    cout << left << setw(10) << value6 << endl ;
    cout << right << setw(10) << value6 << endl << endl ;
    
    // try getline and get 
    // use cin.ignore to ignore all the newlines from previous "cin >>"
    
    cin.ignore (20 , '\n') ;
    
    string city , state ;

    cout << "What city do you live in? " ;
    getline (cin , city) ;
    cout << "What state do you live in? " ;
    getline (cin , state) ;
    cout << endl << endl ;
    
    cout << city << endl << state << endl << endl ;
    
    char character1 ;
    
    cout << "Enter in a single character. : " ;
    cin.get(character1) ;
    
    cout <<endl << character1 << " is the character you enetred. " << endl << endl ;
    
    // try and generate random numbers 
    // random number between 20-29
    
    unsigned int seed = time(0) ;
    srand(seed) ;
    int integer1 , integer2 ;
    integer1 = rand() % 10 + 20 ;
    integer2 = rand() % 10 + 20 ;
    
    cout << "Your two random integers generated between 20 and 29 are " << integer1 << " and " 
         << integer2 << " ." << endl << endl ;
    
    // try if and else statements 
    // try nested if statements 
    
    int grossPay , hours ;
    
    cout << "How much do you make per year? " ;
    cin >> grossPay ;
    cout << "How many hours do you work per two weeks? " ;
    cin >> hours ;
    
    if (grossPay >= 100000 && hours >= 40)
        {
            if (grossPay >= 1000000)
            {
                cout << endl << "You're a millionaire!" << endl ;
            }
            else 
            {
                cout << endl << "You make at least six figures." << endl ;
            }
        }
        else 
        {
            cout << endl << "You make below six figures man." << endl ;
        }
        
        cout << "$" << grossPay << " is great, keep working hard." << endl << endl ;

    // create a menu driven program 
    
    int choice ;
    
    cout << "Select a choice from the menu below: "
         << endl << "1. Male " 
         << endl << "2. Female " 
         << endl << "3. Non-Binary "
         << endl << "4. Other " << endl ;
    cin >> choice ;
    cout << endl ;
    
    if (choice == 1 || choice ==2)
        {
            cout << "You are a normal human." << endl << endl ;
        }
    else 
    {
        cout << "You're a fucking gay." << endl << endl ;
    }
    
    // try a switch statement
    // switches are for single characters or for one number 
    
    char grade ;
    
    cout << "What letter grade did you get? " ;
    cin >> grade ;
    cout << endl ;
    
    switch (grade)
    {
        case ('A') :
        case ('a') :
            cout << "Excellent work." << endl << endl ;
            break ;
        case ('B') :
        case ('b') :
            cout << "Getting to where you need to be. " << endl << endl ;
            break ;
        case ('C') :
        case ('c') :
            cout << "Barely passed. " << endl << endl ;
            break ;
        case ('D') :
        case ('d') :
            cout << "Study harder. " << endl << endl ;
            break ;
        case ('F') :
        case ('f') :
            cout << "Disgraceful. " << endl << endl ;
            break ;
    }
    
    return 0 ;
}