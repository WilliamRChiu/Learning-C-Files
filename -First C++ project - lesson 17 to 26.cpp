#include <iostream>
#include <cmath>
#include <ctime> //this is needed for random number generation

/*
lesson 26: creating FUNCTIONS
 */

void HappyBirthday(std::string name){
    std::cout<<"Happy Birthday to " << name << "!";
}





int main(){
    /* 
    lesson 17: useful string methods
    */
    std::string name;
    std::cout<<"Enter your name: ";
    std::getline(std::cin, name);

    int namelength = name.length();
    bool isnameempty = name.empty();
    name.clear();
    // this clears all values within the variable name
    name.append("Vathanyisa baddy");
    std::cout<<name.at(2);
    //this gives the value at position 2 (this would be 't')
    name.insert(0, "@");
    name.find("' '");
    name.erase(10,name.length()-1);



    /*
    lesson 18: while loops
    */
   std::string address;

    while (address.empty()){
        std::cout<<"Enter a real address";
        std::getline(std::cin, address);
    }


    /*
    lesson 19: do while loop
    unlike normal while loops, these do a block of code first
    afterwards, they repeat again if condition is still true
    */
   int number;
    do{
        std::cout<<"Enter a positive number: ";
        std::cin>>number;
    } while (number < 0);

    std::cout<< "The number is: " <<number;

/*
 lesson 20: for loops
*/
    for (int i=1; i<=3; i++){
        std::cout<<"happy new year!";
    }
/* 
lesson 21: break and continue functions
*/
    for (int j = 1; j<=20; j++)
    {
        if(j=13){
            continue;
        }
    }

/*
lesson 22: nested loops
a loop within a loop :skull:
 */
    for (int i = 1; i<=10; i++){
        for (int j = 1;j<=10; j++){
            std::cout<<j<< ' ';
        }
        std::cout<<"\n";
    }



/* 
lesson 23: Random number generation
note: needs the inclusion of #include <ctime>
*/
    srand(time(NULL)); //initializes random number generator
    //the function time(NULL) is a seed for number generator
    //this function generates a random number between the values 0 and 32,767


    int num = rand() % 6 + 1;
    //random number generator between 1 and 6

    int weirdnum = rand()%6;
    //random number generator between 0 and 5

    std::cout<<num;

/*
lesson 24: random event generator
*/
    int randnum = rand() % 5 + 1;
    
    switch(randnum){
        case 1: std::cout<<"You win a hug\n";
        break;
        case 2: std::cout<<"You win a bear\n";
        break;
        case 3: std::cout<<"You win a car\n";
        break;
        case 4: std::cout<<"You win a house\n";
        break;
        case 5: std::cout<<"You win a computer\n";
        break;
    }


/*
lesson 25: Simple number guessing game
note: Not completing because it is a simple program
1) create random number generator
2) find input value
3) Check if input is number
4) if not, loop back, but don't change random number generated
*/




/*
lesson 26: creating FUNCTIONS
 */

    HappyBirthday("Bob");
    //this invokes the function defined earlier

    return 0;

}