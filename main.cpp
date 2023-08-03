#include <iostream>
int main(){
    //initialising an array
    // int scores[10];
    //writing data into array
    /*
    scores [0] = 1;
    scores [1] = 2;
    scores [2] = 3;
    scores [3] = 4;
    scores [4] = 5;
    scores [5] = 6;
    scores [6] = 7;
    scores [7] = 8;
    scores [8] = 9;
    scores [9] = 10;*/
    /*entering data with a loop
    for(size_t i {};i < 10;++i){
        scores[i] = i*10;
    }*/

    /*initializing only some values*/
    
    

    /*reading data
    std::cout <<scores[0]<< std::endl;
    */
    //reading with a loop
    /*for(size_t i {0};i < 10; ++i ){
        std::cout << scores[i] << std::endl;
    }*/
    /*another example
    
    double decimals[]{1,2,3,4,5,66,24,56};
    int sum {0};
    for(auto i:decimals){
        sum += i;
    }
    std::cout<<sum;*/
    /*
    size of an array
    int numbers[] {1,2,3,4,5,6,7,8,9};
   int size{std::size(numbers)};
   for(auto i{0};i<size;++i){
    std::cout<<numbers[i]<<std::endl;
   }
    */

   char message[6]{'h','e','l','l','o'};
   std::cout<<message<<std::endl;
   char message1[] {"hi my name is parthiv"};
   std::cout<<message1<<std::endl;
    int numbers[]{1,2,3,4,5,6};
    for(size_t i;i<6;++i){
        std::cout<< numbers[i]<<std::endl;
    }
    
   

}