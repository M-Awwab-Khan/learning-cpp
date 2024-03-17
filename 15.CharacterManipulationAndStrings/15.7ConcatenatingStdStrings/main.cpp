#include <iostream>
#include <string>

int main(){

	//Concatenating two strings : The + operator
    /*
	std::cout << std::endl;
	std::cout << "Concatenating two strings : " << std::endl;

	std::string str1{"Hello"};
	std::string str2{"World"};

	std::string message = str1 + " my " + str2;
        
	std::cout << "message : " << message << std::endl;
    */

	//Concatenating string literals : No, No - Compiler Error
	//String literals are expanded into const char* arrays and C++ doesn't know
	//how to add arrays with the + operator. Hence the compiler error.
    /*
	std::cout << std::endl;
	std::cout << "Concatenating string literals : No,No! Compiler Error " << std::endl;
	
	//std::string str3 { "Hello" + "World"}; // Compiler Error
	//std::string str4 = "Hello" + "World";  // Compiler Error
    */

  return 0;

}
