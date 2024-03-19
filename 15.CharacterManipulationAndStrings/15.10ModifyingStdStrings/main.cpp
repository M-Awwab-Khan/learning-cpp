#include <iostream>
#include <string>


int main(){

     //Clear : Removes all characters from the string.
     /*
    std::string str1 {"The Lion Dad"};
    
    std::cout << "str1 is : " << str1 << std::endl;
    std::cout << "str1 size : " << str1.size() << std::endl;
    std::cout << "str1 capacity : " << str1.capacity() << std::endl;
    
    str1.clear();

	std::cout << std::endl;
    std::cout << "str1 is : " << str1 << std::endl;
    std::cout << "str1 size : " << str1.size() << std::endl;
    std::cout << "str1 capacity : " << str1.capacity() << std::endl;
    */

    //Insert (1)
	//(1)basic_string& insert( size_type index, size_type count, CharT ch );
	//Inserts count characters in the string starting at index index
    /*
    std::string str2 {"122"};
    std::cout << "str2 : " << str2 << std::endl;
    
    str2.insert(1,4,'3');//Count can be 1,2,5,..
	
	std::cout << std::endl;
    std::cout << "str2 : " << str2 << std::endl;//1322
    */

	//Insert (2)
    //(2)basic_string& insert( size_type index, const CharT* s );
    //Inserts null-terminated character string pointed to by s
    //at the position index. The length of the string is determined 
    //by the first null character.
	/*
    std::string str3 {"Hello!"};
    const char * txt3{" World"};
	
	std::cout << "str3 : " << str3 << std::endl;//Hello
	
    str3.insert(5,txt3);
	
    std::cout << std::endl;
    std::cout << "str3 : " << str3 << std::endl;//Hello World!
    */


	//Insert (3)
    //(3)basic_string& insert( size_type index, const CharT* s, size_type count );
    //Inserts the characters in the range [s, s+count) at the position index.
    //The range can contain null characters.
	/*
	std::string str4{"Hello!"};
    const char * txt4{" World Health Organization"};
	
	std::cout << "str4 : " << str4 << std::endl;

    str4.insert(5,txt4,6);
	
    std::cout << std::endl;
    std::cout << "str4 : " << str4 << std::endl;
    */


	//Insert (4)
    //(4)basic_string& insert( size_type index, const basic_string& str );
    //Inserts string str at the position index
	/*
	std::string str5{" World"};
    std::string str6{"Hello!"};
	
	std::cout << "str6 : " << str6 << std::endl;

    str6.insert(5,str5);
	
    std::cout << std::endl;
    std::cout << "str6 : " << str6 << std::endl;
    */


	//Insert (5)
    //(5)basic_string& insert( size_type index, const basic_string& str,
    //                  size_type index_str, size_type count = npos);
    //Inserts a string, obtained by str.substr(index_str, count) at the position index
	/*
	std::string str7{"Hello!"};
    std::string str8{"Statistical Analysis of the World Population."};
	
	std::cout << "str7 : " << str7 << std::endl;

    str7.insert(5,str8,27,6);
	
    std::cout << std::endl;
    std::cout << "str7 : " << str7 << std::endl;
    */


    return 0;
}