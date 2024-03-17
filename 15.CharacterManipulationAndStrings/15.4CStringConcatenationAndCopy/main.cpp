#include <iostream>
#include <cstring>

int main(){

	//Concatenation
    /*
	std::cout << std::endl;
	std::cout<< "std::strcat : " << std::endl;
	//doc : https://en.cppreference.com/w/cpp/string/byte/strcat
	
	char dest[50] = "Hello ";
    char src[50] = "World!";
    std::strcat(dest, src); // Some compilers (MSVC) think these functions are unsafe!
    std::cout << "dest : " << dest << std::endl; // Hello World
    std::strcat(dest, " Goodbye World!"); 
    std::cout << "dest : " << dest << std::endl; // Hello World Goodbye World!
    */


	//More concatenation
    /*
	std::cout << std::endl;
	std::cout << "More std::strcat : " << std::endl;
	
    char *dest1 = new char[30]{'F','i','r','e','l','o','r','d','\0'};
    char *source1 = 
        new char[30]{',','T','h','e',' ','P','h','e','n','i','x',' ','K','i','n','g','!','\0'};
		
	//NOTE TO SELF : 
			//Describe what's going to happen in std::strcat before you do the cat :
			//source is going to be appended to dest, and the process
			//will start by overriding the null character in dest
			
    std::cout << "std::strlen(dest1) :" << std::strlen(dest1) << std::endl;
    std::cout << "std::strlen(source1) : " << std::strlen(source1) << std::endl;
    
	std::cout << "Concatenating..." << std::endl;
    std::strcat(dest1,source1);
    
    std::cout << "std::strlen(dest1) :" << std::strlen(dest1) << std::endl;
    std::cout << "dest1 : " << dest1 << std::endl;
    */


    return 0;
}
