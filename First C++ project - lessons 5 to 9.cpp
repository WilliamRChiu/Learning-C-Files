#include <iostream>
#include <algorithm>
#include <cmath>

/*
Lesson 5: Typedef
These are reserved keywords used to create an additional name (alias) for another data type
It's a new identifier for an existing type
helps with readability and reduces types
*/
//Note: Has been replaced with 'using' keyword

//typedef examples
typedef std::string text_t;
typedef int number_t;

//using keyword examples
using text_u = std::string;
using number_u = int;

int main(){
    std::string firstname = "bob";
    text_t Firstname = "Bob";
    number_t lilbobAge = 5;
    number_u BigBobAge = 21;
    text_u BigBobName = "BigBOB";
    std::cout<<firstname<<std::endl;
    std::cout<<Firstname<<std::endl;
    std::cout<<lilbobAge<<std::endl;
    std::cout<<BigBobName<<std::endl;
    std::cout<<BigBobAge<<std::endl;


/* Lesson 6: arithmetic operators
return result of artimetic operation
(+ - * /)
*/
    int students = 20;
    students+=2;
    students++;
    students--;
    students *=2; //multiplies students by 2
    students /=2; //divides students by 2
    //Note: if I divide the int by a non-factor and result has a decimal, decimal is voided

    int remainder = students % 3; //finds the remainder


/* lesson 7: type conversion 
 convert a value of one type to another
 implicit = automatic
 explicit = precede a value with new data type (int)
*/
    int y = 3.15;
    std::cout<<y; //implicit conversion

    double x = (int) 3.15; //explicit conversion
    std::cout<<x;

    char z =100;
    std::cout<<z; //implicit conversion (look at ascii table)

    std::cout<<(char) 100; //explicit conversion
    
    
/* lesson 8: User Input
    cout<<(insertion operator)
    cin>>(extraction operator)
*/
    std::string name;
    int age;
    std::string fullname;

    std::cout<<"\nWhat is your name: ";

    std::cin >> name; //this takes the input and stores it into variable name
    //this only works if the string has no spaces
    //need to use getline function if you want full line with spaces 


    std::cout<<"Hello "<<name;

    std::cout<<"\nWhat is your age: ";

    std::cin>> age;

    std::cout<<"\nYou are " << age << " years old.";

    std::cout<<"\nWhat is your FULL name: ";
    std::getline(std::cin >> std::ws, fullname);//need the std::ws to remove whitespace between inputs
    std::cout<<"Hello "<< fullname;


 

/* lesson 9: MOR MATH 

*/
    double p = 3;
    double l = 4;
    double u;
    double m;

    u = std::max(p,l);
    m=std::min(p,l);

    std::cout<< "\n"<<u;
    int pop = sqrt (9);
    int yellow = abs (-3);
    int red = round (3.14);
    int blue = ceil (3.14);
    int green = floor (3.14);
    
    

    return 0;
}