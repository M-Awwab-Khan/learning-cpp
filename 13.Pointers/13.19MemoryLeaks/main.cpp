#include <iostream>

int main(){

    
    int *p_number {new int{67}}; // Points to some address, let's call that address1
    
    //Should delete and reset here 
    
    int number{55}; // stack variable
    
    p_number = &number; // Now p_number points to address2 , but address1 is still in use by 
                        // our program. But our program has lost access to that memory location.
						//Memory has been leaked.
   

    std::cout << "Program ending well" << std::endl;
    return 0;
}