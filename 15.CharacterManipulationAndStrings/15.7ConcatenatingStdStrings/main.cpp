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

  //A few ways around string literal concatenation
    /*
	std::cout << std::endl;
	std::cout << "A few ways around string literal concatenation" << std::endl;
            
	std::string str5 {"Hello World"}; 	// Make the string one literal
										//in the first place
	std::string str6 {"Hello" " World"};// Put the literals side by side
										//without the + in between
	std::string str7{std::string{"Hello"} + " World"};//Turn one or both into a std::string
													 //object  and do the concatenation
	std::cout << "str5 : " << str5 << std::endl;
	std::cout << "str6 : " << str6 << std::endl;
	std::cout << "str7 : " << str7 << std::endl;
                                                     
	using namespace std::string_literals; // necessary for the s suffix
										  // This polutes the namespace in main
	std::string str8 {"Hello"s + " World"};// Turn one or both into strings using the 
                                    //s suffix . the string_literals namespace has to be imported
                                    //for this to work
	std::cout << "str8 : " << str8 << std::endl;
									
	//A better way to not polute the namespace
	std::string str9;
	{
		using namespace std::string_literals;
		str9 = "Hello"s + " World";
	}
	std::cout << "str9 : " << str9 << std::endl;
    */
  return 0;

}
