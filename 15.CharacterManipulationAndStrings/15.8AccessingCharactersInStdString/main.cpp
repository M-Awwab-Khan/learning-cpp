#include <iostream>
#include <string>

int main (int argc, char *argv[]) {
  /*
    std::string str1 {"Hello there"};
	
	//Size of a string : doesn't count the null terminator
	std::cout << "str1.size() : " << str1.size() << std::endl;
    
    //Reading characters in std::string : array index operator
    //Regular indexed loop. Can also be adapted to use while and do-while
	//This is left as an exercise.
    std::cout << std::endl;
    std::cout << "For loop with array index notation : "<< std::endl;
	
	std::cout << "str1(for loop) : " ;
    for(size_t i{}; i < str1.size(); ++i){
        std::cout << " " << str1[i] ;
    }
	std::cout << std::endl;
    */

    //Can also use range based for loop
    /*
    std::string str1 {"Hello there"};
    std::cout << std::endl;
    std::cout << "Using range based for loop : "<< std::endl;
	
	std::cout << "str1(range based for loop) : " ;
    for(char value : str1){
        std::cout << " " << value ;
    }
	std::cout << std::endl;
    */

   //at() syntax to target characters
   /*
    std::cout << std::endl;
    std::cout << "Using the std::string::at() method : "<< std::endl;

    std::string str1 {"Hello there"};
	std::cout << "str1 : (for loop with at()) : " ;

    for(size_t i{}; i < str1.size(); ++i){
        std::cout << " " << str1.at(i) ;
    }
	std::cout << std::endl;
    */ 
  return 0;
}
