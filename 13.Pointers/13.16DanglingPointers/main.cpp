#include <iostream>



int main(){

	//Case1 : Uninitialized pointer
    /*
	int * p_number; // Dangling uninitialized pointer
   
	std::cout << std::endl;
	std::cout << "Case 1 : Uninitialized pointer : ." << std::endl;
	std::cout << "p_number : " << p_number << std::endl;
    std::cout << "*p_number : " << *p_number << std::endl; //CRASH!
    */


   //Case 2 : deleted pointer
   
   std::cout << std::endl;
   std::cout << "Case 2 : Deleted pointer" << std::endl;
   int * p_number1 {new int{67}};
   
   std::cout << "*p_number1 (before delete) : " << *p_number1 << std::endl;
   
   delete p_number1;
		
   std::cout << "*p_number1(after delete) : " << *p_number1 << std::endl;
  

    std::cout << "Program is ending well" << std::endl;
  
    return 0;
}