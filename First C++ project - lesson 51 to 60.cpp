#include <iostream>
#include <cmath>

class animal{
    private:
        bool alive = true;
    public:
        void eat(){
            std::cout<<"This animal is eating!\n";
        }
        bool getAlive(){
            return alive;
        }

};
class Dog : public animal{
    
};
//this is how to do inheritance
class Pizza{
    private:
        std::string topping1;
        std::string topping2;
        std::string topping3;

    public:
        Pizza (std::string topping1){
            this->topping1 = topping1;
        }
        Pizza (std::string topping1, std::string topping2){
            this->topping1 = topping1;
            this->topping2 = topping2;
        }
        Pizza(){

        }
};
class Human{
    private:
        std::string name;
        std::string occupation;
        int age;
    public:
        void setAge(int newage){
            age = newage;
        }
        void setName(std::string newname){
            name = newname;
        }
        void setOccupation(std::string newoccupation){
            occupation = newoccupation;
        }
        void eat(){
            std::cout<<"This person is eating\n";
        }
        void drink(){
            std::cout<<"This person is drinking\n";
        }
        Human (std::string name, int age, std::string occupation){
            this->name = name;
            this->age = age;
            setOccupation(occupation);
        }
        Human(){

        }
    
    
};
enum Day {sunday = 0, monday = 1, tuesday = 2, wednesday = 3, thursday = 4, friday = 5, saturday = 6};
void walk(int steps);
int factorial (int num);
struct student{
    std::string name;
    double gpa;
    bool enrolled;
};
void printStudent(student student);
void changeGrade(student &student, int newgrade);

template<typename T>
//this is like declaring the data type as a variable
//if i declare the helper function as a double, than it will formulate answer using doubles

T max(T x, T y){
    return (x>y)?x:y;
    //this says if x is greater than y, return x, otherwise return y!
}

template<typename H, typename U>
auto maximum (H x, U y){
    return (x>y)?x:y;
}
//the auto keyword lets complier deduce what return type should be

int main(){
    /*
    lesson 51: recursion: programming technique where function invokes itself from within
    break a complex concept into repeatable single steps

    advantages = less code = cleaner
    useful for sorting and searching algorithms

    disadvantages = slower
    uses more memory
    */
    

    /*
    lesson 52: function templates - describes what a function looks like
    Can be used to generate as many overloaded functions as needed, each using different data types  
    
    Ex. "It's like a cookie-cutter..."
    cookies are same shape, but dough can vary from cookie to cookie
    
    */
    std::cout<<max(1,2)<<"\n";
    std::cout<<max(1.2,2.2)<<"\n";
    std::cout<<max("1","2")<<"\n";


    /*
    lesson 53: struct = a structure that groups related variables under one name
    structs can contain many different data types (strings, ints, booleans, etc)
    variables within structs are "members"
    members can be accessed with . "Class Member Access Operator"
    */
   student student1;
   student1.name = "spongebob";
   student1.gpa = 3.2;
   student1.enrolled = true;

   student student2;
   student2.name = "patrick";
   student2.gpa = 4.0;
   student2.enrolled = true;

   /*
   lesson 54: passing structs to functions
   */
    std::cout<<&student1<<"\n";
    printStudent(student1);
    //passed by value instead of by reference

   changeGrade(student1, 3.5);
   
   
   /*
   lesson 55: enums = a user-defined data type that consists of paired named-integer constants
   GREAT if you have a set of potential options
   */

  Day today = wednesday;

  switch(today){
    case sunday: std::cout<<"It is sunday!\n";
                    break;
    case monday: std::cout<<"It is monday!\n";
                    break;
    case tuesday: std::cout<<"It is tuesday!\n";
                    break;
    case wednesday: std::cout<<"It is wednesday!\n";
                    break;
    case thursday: std::cout<<"It is tursday!\n";
                    break;
    case friday: std::cout<<"It is friday!\n";
                    break;
    case saturday: std::cout<<"It is saturday!\n";
                    break;
  }


    /*
    lesson 56: object = collection of attributes and methods
    */

    Human human1;

    human1.setName("Rick");
    human1.setOccupation("scientist");
    human1.setAge(70);

    human1.eat();
    human1.drink();


    /*
    lesson 57: constrctors = special method that automatically called when an object is instantiated
    used for assignening values to attributes as arguments
    */

    Human schoolboy ("bob", 22, "Construction");


    /*
    lesson 58: overloaded constructors = multiple constructors w/ the same name but different parameters
    allow for varying argumnets when instantiating an object
    */

    Pizza cheese("cheese");
    Pizza Peperoni ("Cheese", "Peperoni");

    /*
    lesson 59: getters and setters
    getter = function that makes a private attribute readable
    setters = function that makes a private attribute writeable
    */


    /*
    lesson 60: inheritance
    a class can recieve attributes and methods from another class
    children classes inherit from a parent class
    helps to reuse imilar code found within multiple classes
    */
    return 0;
}

void walk(int steps){
    if (steps>0){
        std::cout<<"You take a step!\n";
        walk(steps-1);
        //recursion as it recalls the same function
    }
}
int factorial (int num){
    int result = 1;
    if (num>0){
        result*=num;
        factorial(num - 1);
    }
    else{
        return result;
    }
}
void printStudent (student student){
    std::cout<<&student<<"\n";
    std::cout<<student.name<<"\n";
    std::cout<<student.gpa<<"\n";
    std::cout<<student.enrolled<<"\n";
}
void changeGrade (student &student, int newgrade){
    student.gpa = newgrade;
}