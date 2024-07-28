#include <iostream>
#include <cmath>
#include <ctime>

int myNum = 3;
double square (double length);
void bakePizza();
void bakePizza(std::string topping1);
void printMyNum();

int main(){
    /* 
    lesson 27: return keyword
    returns a value where you called a function
    function must be the same data type as the return function
    
    */

   double length = 5.0;
   double area = square (length);


/* 
    lesson 28: overloaded functions
    functions with same name but different parameters
*/
    bakePizza();
    bakePizza("Mushroom");

/*
    lesson 29: Variable scope
    local variable = declared inside a function or block
    global variable = declared outside of all functions

*/
    int myNum = 2;
    std::cout<<myNum;
    printMyNum();


/*
    lesson 30: Banking Practice

*/



/*
    lesson 32: Arrays


*/
    std::string car = "Corvette";

    std::cout<<car;

    std::string cars[] = {"Corvette", "Mustang", "Camry"};
    //to define a empty 1D array, i do this:
    //std::string cars[(insert array size)];
    //or std::string cars[];
    std::cout<<car[0];
    //this prints corvette

    std::string cardealership[3][3]={{"Mercedes AMG", "Mercedes S Class", "Mercedes A Class"}, {"BMW M3", "BMW M4", "BMW Performance"}, {"Porsche 911", "Porsche Macan", "Porsche Taycan"}};



    /*
    Lesson 33: sizeof() command
    determines the size in bytes of a:
    variable,d ata type, class, object, etc
    */

   double gpa = 2.5;

   std::cout<<sizeof(gpa)<<" bytes\n";


    return 0;
}

double square (double length){
    double result = length * length;
    return result;
}

void bakePizza(){
    std::cout<<"here is your pizza\n";
}
void bakePizza(std::string topping1){
    std::cout<<"Here is your pizza with " <<topping1 <<".\n";
}
void MyNum(){
    std::cout<<myNum;
}