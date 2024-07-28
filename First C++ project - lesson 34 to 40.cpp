#include <iostream>
#include <cmath>
#include <ctime>

int main(){

    /*
    lesson 34: Iterating through a array
    */

   std::string students[] = {"Spongebob","patrick","Squidward", "Sandy"};

   for (int i=0; i<sizeof(students)/sizeof(std::string);i++)
   //need to do sizeof students over sizeof string as it is calculated in BYTES (4 bytes/byte = 4)
   {
        std::cout<< students[i]<<"\n";


   }

   /*
   lesson 35: For each loop
   loop that eases traversal over an iterable data set
   */

  for(std::string student : students){
    std::cout<<student<<"\n";
  }

  int grades[] = {65,22,33,14};

  for (int grade : grades){
    std::cout<<grade<<"\n";
  }

  /*
  lesson 36: pass array into a function
  */

 double prices[] = {49.99, 15.05, 76, 9.99};
 int size = sizeof(prices)/sizeof(prices[1]);
 double total = getTotal(prices, size);

 

 /*
 
 lesson 37: searching arrays for a element
 
 */

 int keynumbers[] = {1,2,3,4,5,6,7,8,9,10};
 int size = sizeof(keynumbers)/sizeof(keynumbers[0]);
 int index;
 int myNum;
 std::cout<<"Enter element to search for: "<<"\n";
 std::cin>>myNum;

 index = searchArray(keynumbers, size, myNum);


 if (index!=-1){
    std::cout<<myNum <<" is at index "<<index;
 }

 else{
    std::cout<<"That number is not in the array!";
 }


 /*
 lesson 38: Bubble sorting an Array
 */
 int numbersarray[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
 int size = sizeof(numbersarray)/sizeof(numbersarray[0]);

 sort (numbersarray, size);

 
 for (int element : numbersarray){
    std::cout<<element<<" ";
 }

 /*
 lesson 39: Fill()
 this fills a range of elements with a specificed value
 fill(begin, end, value)
 */
 const int SIZE = 100;
 std::string foods[SIZE];
 
 fill(foods, foods+SIZE, "Pizza");
 //this would fill the whole array with the word "pizza"
 

 /*
 lesson 40: fill array with user input
 */

 std::string coolfoods[5];
 int size = sizeof(foods)/sizeof(foods[0]);
 std::string temp;
 for (int i=0; i<size;i++){

    std::cout<<"Enter a food you like or 'q' to quit #"<<i<<": ";
    std::getline(std::cin, temp);
    if (temp == "q"){
        break;
    }
    else{
        foods[i]=temp;
    }

    std::cout<<"You like the following for: \n";

for (int i=0; foods[i].empty();i++){
    std::cout<<foods[i]<<"\n";
    }
 }


    return 0;
}

double getTotal(double prices[], int size){

    //when passing a array through a helper function, the passed array becomes a pointer
    //therefore, not working with array, working with a pointer pointing towards the address of where array begins
    //need to instead pass through the size of array
    double total = 0;
    for (int i = 0; i< size; i++){
        total+=prices[i];
    }
    return total;

}

int searchArray (int array[], int size, int element){

    for (int i=0; i<size; i++){

        if(array[i]==element){
            return i;
        }

        else{
            return -1;
        }
    }
}

void sort (int array[], int size){
//bubble sort
    int temp;
    for (int i = 0; i<size-1; i++){
        for (int j =0; j<size - i - 1; j++){
            if (array[j]>array[j+1]){
                temp = array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }

}
