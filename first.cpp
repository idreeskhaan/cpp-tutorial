#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <string>
#define RAD2DEG 180/3.14 //define constants

int fact(int n){

    if (n>1){
        return n * fact(n-1);
    }
    else{
        return 1;
    }
} 

int main(){
    
    //random number generator
    srand(time(nullptr));
    int num= rand() % 6 + 1;
    //std::cout<< "Dice is: " << num << std::endl;

    //integral data types
    short a; 
    int b;
    long c;
    long long d;

    std::cout<< "short: " << sizeof(short) << std::endl;
    std::cout<< "int: " << sizeof(int) << std::endl;
    std::cout<< "long: " << sizeof(long) << std::endl;
    std::cout<< "long long: " << sizeof(long long) << std::endl;

    //floating data types
    double e;
    float f;

    std::cout<< "double: " << sizeof(double) << std::endl;
    std::cout<< "float: " << sizeof(float) << std::endl;

    //chars
    char grade= 'A';
    std::cout << "grade: " << (int) grade << std::endl;

    //Fun example. Generate the characters for ASCII 0 to 127
    for (short i=0; i<= 127; i++){
        std::cout << "ASCII: " << i << " Character: " << (char) i << std::endl;
    }

    //booleans
    bool is_true= true;
    bool is_false= 0;

    std::cout<< std::boolalpha << is_false << std::endl; // std::boolalpha takes 0 or any other value and dumps it into false/true.

    int n = 6;
    std::cout << "Factorial of " << n << ": " << fact(n) << std::endl;

    //const, macro, enum
    const float PI= 3.14;
    enum {INDEX = 5}; //is constant
    std::cout<< "enum INDEX: " << INDEX << std::endl;

    //remainder function
    std::cout << remainder(10, 3.25) << std::endl;

    //strings
    std::string my_str = "I learned this in C++ 10 hours tutorial";
    std::cout << my_str << " length: " << my_str.length() << std::endl;

    //c style string
    char c_str[]= "Terminator";  //char array

    //cin terminates parsing after a white space
    // getline() can be used to get a complete string
    std::string greeting;
    getline(std::cin, greeting);  // OR cin.getline(greeting) for numeric inputs
    std::cout << greeting << std::endl;

    //HEX, OCT, BIN
    std::cout << std::hex << 54 << std::endl;

    //operator precedence
    int x=10;
    int y;
    y= (x= 100);  // x= 100, y= 100
    y= x= 100;  // y=x, y=100, x doesnt change. Default order is left to right

    //ternary conditions

    // (condition) ? true : false ;

    return 0;
}