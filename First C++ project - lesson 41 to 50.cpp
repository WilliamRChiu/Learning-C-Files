#include <iostream>
#include <cmath>
#include <ctime>

int main(){
    /*
    lesson 41: 2d arrays
    */
    std::string cars[][3] = {{"Mustang", "Escape", "F-150"}, 
                             {"Corvette", "Equinox", "Silverado"},
                             {"Challenger", "Durango", "Ram1500"}};
    
    int rows = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars[0])/sizeof(cars[0][0]);

    for (int i = 0; i<rows;i++){
        for (int j = 0; j<columns; j++){
            std::cout<<cars[i][j]<<"\n";
        }
    }

    /*
    lesson 42: creating a trivia answering game
    Not completed
    */



   /*
   lesson 43: memory addresses
   a location in memory where data is stored
   memory address can be accessed with & (address-of operator)
   */

  std::string name = "bro";
  int age = 21;
  bool student = true;

  std::cout<<&name<<"\n";
  std::cout<<&age<<"\n";
  std::cout<<&student<<"\n";


  /*
  lesson 44: pass by values and pass by references
  */

 std::string x= "juice";
 std::string y = "punch";
 std::string temp;

 swap (x,y);

 temp = x;
 x=y;
 y=temp;

 /*
 lesson 45: const parameter = parameter that is read-only
 more secure for code and conveys intent
 useful for references and pointers
 */
    std::string shop = "Bro";
    int storehistory = 12;

    printInfo(shop, storehistory);




   /*
   lesson 46: credit card validator  
   */ 




  /*
  lesson 47: pointers = varaible that stores a memory address of another variable
                        used because it can be easier to work with an address
  */
    //& address of operator
    // * dereference operator

    std::string carname = "brostang";

    std::string *pCarname = &carname;

    std::cout<<pCarname;
    //this returns a memory address

    std::cout<<*pCarname;
    //this returns the value at said memory address


    std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

    std::string *pFreePizzas = freePizzas;
    //here no need to use the address operator as the array is already an address 

    std::cout<<*pFreePizzas <<"\n";



    /*
    lesson 48: null pointers = a special value that means something has no value
    when a pointer holds null value, pointer isn't pointing at anything
    
    nullptr = keywork representing null pointer literal

    nullptrs are helpful when determining if an address was successfully assigned to a pointer
    
    when using pointers, careful code isn't dereferencing nullptr or pointing to free memory
    this will cause undefined behaviour
    */

    int *pointer = nullptr;
    int xyz = 123;

    pointer = &xyz;

    if (pointer == nullptr){
        std::cout << "it is a nullpointer.  address not assigned \n";

    }
    else{
        std::cout<<"address was assigned\n";
    }


    /*
    lesson 50: dynamic memory
    memory that is allocated after program is already compiled and running
    use the 'new' operator to allocate memory in heap rather than the stack

    useful when we don't know how much memory is needed. 
    makes program more flexible, especially when accepting user input

    */


   int *pNum = NULL;

   pNum = new int;

   *pNum = 21;

   std::cout<<"address: "<<pNum<<"\n";
   std::cout<<"value: "<<*pNum<<"\n";

   delete pNum;
   //whenever using new operator, use delete operator once not using memory space

    char *pGrades =NULL;

    int size;
    std::cout<<"How many grades to enter in?: ";
    std::cin>>size;

    pGrades = new char[size];
    //this memory changes based on user input

    for (int q = 0;q<size;q++){
        std::cout<<"enter grade #"<<q+1<<": ";
        std::cin>>pGrades[q];
    }

    for (int i = 0; i<size; i++){
        std::cout<<pGrades[i]<<" ";
    }
    return 0;
}

void swap (std::string &x, std::string &y){
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}

void printInfo (const std::string name, const int age){
    //the const command ensures that these variables cannot be changed at all in this function
    std::cout<<name<<"\n";
    std::cout<<age<<"\n";
}