#include <iostream>
#include <cstring>

int main(){

    
	//std::strlen : Find the length of a string
    // real arrays and those decayed into pointers
    const char message1 [] {"The sky is blue."};
	
	//Array decays into pointer when we use const char*
	const char* message2 {"The sky is blue."};
    std::cout << "message1 : " << message1 << std::endl;
	
	//strlen ignores null character
    std::cout << "strlen(message1) : " << std::strlen(message1) << std::endl;
	
	// Includes the null character
    std::cout << "sizeof(message1) : " << sizeof(message1) << std::endl;
	
	//strlen still works with decayed arrays
	std::cout << "strlen(message2) : " << std::strlen(message2) << std::endl;
	
	//Prints size of pointer
    std::cout << "sizeof(message2) : " << sizeof(message2) << std::endl;
   


   
    return 0;
}