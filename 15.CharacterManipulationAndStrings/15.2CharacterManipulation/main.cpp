#include <iostream>
#

int main(){

    //Check if character is alphanumeric
    
    std::cout << std::endl;
    std::cout << "std::isalnum : "<<std::endl;
	
    std::cout << "C is alphanumeric : " << std::isalnum('C') << std::endl;
    std::cout << "^ is alphanumeric : " << std::isalnum('^') << std::endl;
	
	//Can use this as a test condition
	char input_char {'*'};
	if(std::isalnum(input_char)){
		std::cout << input_char << " is alhpanumeric." << std::endl;
	}else{
		std::cout << input_char <<  " is not alphanumeric." << std::endl;
	}
   

    //Check if character is alphabetic
    
    std::cout << std::endl;
    std::cout << "std::isalpha : "<<std::endl;
    std::cout <<   "C is alphabetic : " << std::isalpha('e') << std::endl; // 1
    std::cout <<   "^ is alphabetic : " << std::isalpha('^') << std::endl; // 0
    std::cout <<   "7 is alphabetic : " << std::isalpha('7') << std::endl; // 0

    if(std::isalpha('e')){
        std::cout << 'e' << " is alphabetic" << std::endl;
    }else{
        std::cout << 'e' << " is NOT alphabetic" << std::endl;        
    }
   

	//Check if a character is blank
    
    std::cout << std::endl;
    std::cout << "std::isblank : "<<std::endl;
    char message[] {"Hello there. How are you doing? The sun is shining."};
    std::cout << "message : " << message << std::endl;
    
    //Find and print blank index
    size_t blank_count{};
    for (size_t i{0} ; i < std::size(message); ++i){
        //std::cout << "Value : " << message[i] << std::endl;
        if(std::isblank(message[i])){
            std::cout << "Found a blank character at index : [" << i << "]" << std::endl;
            ++blank_count;
        }
    }
    std::cout << "In total we found " << blank_count << " blank characters."<< std::endl;
  


    return 0;
}