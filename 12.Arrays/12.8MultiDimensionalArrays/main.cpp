#include <iostream>


int main(){

    //2D array
    //int packages [3][4] ; // 12 where we can store ints

    int packages [] [4] {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {3,4,5,6}
    };



    //Read data from a 2D array
    for(size_t i{0} ; i < 3; ++ i){

        for(size_t j{0}; j < 4 ; ++j){

            std::cout << packages[i][j] << "   ";
        }
        std::cout << std::endl;

    }
   
    return 0;
}