#include <iostream>



int main(){

    //Declare an array of ints
   int scores [10]; // Junk data

    //Read data

   std:: cout << " scores [0] : " << scores[0] << std::endl;
   std:: cout << " scores [1] : " << scores[1] << std::endl;
   

    //Read with a loop
    for( size_t i {0} ; i < 10 ; ++i){
        std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
    }
  


    return 0;
}