#include <iostream>


bool isPalindrome(int x) {
    std::string number = std::to_string(x);
    char z;
    char y;
    int length = number.length();
    for (int i =0; i<length/2;i++){
        z = number[i];
        y = number[length-i-1];
        if (z==y){
            continue;
        }
        else{
            return false;
        }
    }
    return true;
        
}   

int main(){
    std::cout<<std::boolalpha<<isPalindrome(25)<<"\n";
    std::string bomb = "abcd";
    std::cout<<bomb[6];
    return 0;
}