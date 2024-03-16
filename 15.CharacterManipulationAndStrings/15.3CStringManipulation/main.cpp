#include <iostream>
#include <cstring>

int main(){

    /*
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
    */


   //std::strcmp - signature : int strcmp( const char *lhs, const char *rhs );
    //Returns negative value if lhs appears before rhs in lexicographical order,
    //Zero if lhs and rhs compare equal.
    //and Positive value if lhs appears after rhs in lexicographical order. 

    std::cout << std::endl;
    std::cout << "std::strcmp : " << std::endl;
    const char* string_data1{ "Alabama" };
    const char* string_data2{ "Blabama" };

    char string_data3[]{ "Alabama" };
    char string_data4[]{ "Blabama" };

    //Print out the comparison
    std::cout << "std::strcmp (" << string_data1 << "," << string_data2 << ") : "
        << std::strcmp(string_data1, string_data2) << std::endl;

    std::cout << "std::strcmp (" << string_data3 << "," << string_data4 << ") : "
        << std::strcmp(string_data3, string_data4) << std::endl;


    string_data1 = "Alabama";
    string_data2 = "Alabamb";

    //string_data3 = "Alabama";
    //string_data4 = "Alabamb";

    //Print out the comparison
    std::cout << "std::strcmp (" << string_data1 << "," << string_data2 << ") : "
        << std::strcmp(string_data1, string_data2) << std::endl;


        string_data1 = "Alacama";
    string_data2 = "Alabama";

    //Print out the comparison
    std::cout << "std::strcmp (" << string_data1 << "," << string_data2 << ") : "
        << std::strcmp(string_data1, string_data2) << std::endl;

    string_data1 = "India";
    string_data2 = "France";

    //Print out the comparison
    std::cout << "std::strcmp (" << string_data1 << "," << string_data2 << ") : "
        << std::strcmp(string_data1, string_data2) << std::endl;

    string_data1 = "Kigali";
    string_data2 = "Kigali";

    //Print out the comparison
    std::cout << "std::strcmp (" << string_data1 << "," << string_data2 << ") : "
        << std::strcmp(string_data1, string_data2) << std::endl;


	//std::strncmp : int strncmp( const char *lhs, const char *rhs, std::size_t count );
	//Compares n characters in the strings
	//Returns : Negative value if lhs appears before rhs in lexicographical order.
    //Zero if lhs and rhs compare equal, or if count is zero.
    //Positive value if lhs appears after rhs in lexicographical order. 
    //Print out the comparison

    const char* string_data1{ "Alabama" };
    const char* string_data2{ "Blabama" };
    size_t n{3};
    std::cout << std::endl;
    std::cout << "std::strncmp : " << std::endl;
    std::cout << "std::strncmp (" << string_data1 << "," << string_data2 << "," << n << ") : " 
              << std::strncmp(string_data1,string_data2,n) << std::endl;
              
    string_data1 = "aaaia";
    string_data2 = "aaance";
    
    std::cout << "std::strncmp (" << string_data1 << "," << string_data2 << "," << n << ") : " 
              << std::strncmp(string_data1,string_data2,n) << std::endl;
              
              
    n = 5;
    
    std::cout << "std::strncmp (" << string_data1 << "," << string_data2 << "," << n << ") : " 
              << std::strncmp(string_data1,string_data2,n) << std::endl;
              
    string_data1 = "aaaoa";
    string_data2 = "aaance";
    
    
    std::cout << "std::strncmp (" << string_data1 << "," << string_data2 << "," << n << ") : " 
              << std::strncmp(string_data1,string_data2,n) << std::endl;
   
    return 0;
}