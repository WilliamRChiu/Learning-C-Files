#include <iostream>

int main(){
/*
lesson 10: If statements
the order of if and else if statements matter!
*/
    int age;
    std::cout<<"What is your age? ";
    std::cin>>age;

    if(age>=18){
        std::cout<<"Welcome to the site!";

    }
    else if(age<=0){
        std::cout<<"How could you have not been born yet?";
    }
    else{
        std::cout<<"Not old enough!";
    }


    /*
    lesson 11: switches
    this is a alternate way to using many else if statements
    compares one value against many other matching cases
    */
    int month;
    std::cout<<"Enter what month (1-3) it is: ";
    std::cin>>month;
   
    switch(month){
        case 1:
            std::cout<<"It is January";
            break;
        case 2:
            std::cout<<"It is February";
            break;
        case 3:
            std::cout<<"It is March";
            break;
        default:
            std::cout<<"Please enter in only numbers 1 to 3";

    }

    char grade;
    std::cout<<"What was your grade of achievement? ";
    std::cin>>grade;

    switch(grade){
        case 'A':
            std::cout<<"You did great!";
            break;
        case 'B':
        std::cout<<"You did good!";
        break;
        case'C':
        std::cout<<"You did okay...";
        break;
        default:
        std::cout<<"Please enter a valid letter grade!";

    }

/* lesson 13: Making a calculator
This lesson will not be completed as it is very self explanatory
*/

/* lesson 14: Ternary operator
    Replacement to if/else statement
    this is useful if the response is binary (pass fail, can purchase or not, etc)
    condition ? expression1: expression2;
*/

    int percentage = 75;

    percentage>=60 ? std::cout<<"You pass!" : std::cout<<"You fail!";


/*  lesson 15: logical operators
    && = check if 2 conditions are true
    || = or statement (check if one of the conditions is true)
    ! = reverse logical state of operand

*/
    int temp;
    std::cout<<"Enter the temperature: ";
    std::cin>>temp;

    if (temp>0 && temp<30){
        std::cout<<"Temperature is good";
    }
    else{
        std::cout<<"Temeprature is bad";
    }
    
/* Lesson 16: Another making a program lesson
Note done due to simplicity
*/


    return 0;



}