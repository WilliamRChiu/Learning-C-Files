#include <iostream>
//this is a single line comment
/*
This is a long comment used for documentation
it is for multiline comments
*/
namespace first{
    int w = 10000;
}

int main(){
    std::cout<<"Hello World"<<std::endl;
    std::cout<<"I'm a robot"<<std::endl;
    int x = 5;
    int y = 6;
    double price = 10.10;
    double gpa = 4.32;
    double temperatuere = 25.1;
    char grade = 'A'; //char's are single characters and use single quotations
    char currency = '$';
    bool isastudent = true;
    bool isagraduate = false;
    std::string name = "Vathany";
    std::cout<<"hello "<<name<<std::endl;
    std::cout<<x<<std::endl;
    std::cout<<x+y;


    /*
    This is lesson 3 material
    it is based on the const keyword that specieis a variable is a constant
    it informs the computer that this variable should never be changed
    */
   const double PI = 3.14159; //for constants, it is good practice to capitalize the variable name
   double radius = 10;
   double circumference = 2*PI*radius;
   std::cout<<circumference<<std::endl;



    /* 
    Lesson 4: Namespaces
    solution for preventing name conflicts in large projects
    each entity needs a unique name.  A namespace allows for identically named entities as long as namespaces are different
    */
   

   int w = 0;
   
   std::cout<<"The local variable 'w' is named: "<<w<<std::endl; //this calls upon the LOCAL variable named w
   std::cout<<"The NameSpace variable 'w' is named: "<< first::w<<std::endl; //this calls upon the NAMESPACE variable named w
   
   
   
   return 0;
}

