//
//  main.cpp
//  Homework2
//
//  Created by Burak Korkmaz on 3.12.2018.
//  Copyright © 2018 Burak Korkmaz. All rights reserved.
//

#include <iostream>
#include <ctime>

using namespace std;

long recursive(long number){
    if (number == 2 || number == 1  )
        return 1;
    else if(number == 0)
        return 0;
    else
        return recursive(number-1) + recursive(number-2) ;
}

long iterative(long number){
    long current = 1;
    long prev = 1;
    long result = 1;
    
    if(number == 0)
        result = 0;
    
    for(int i = 3 ; i <= number ; i++){
        result = current + prev;
        prev = current;
        current = result;
    }
    
    return result;
}

int main() {
    // Recursive
    
    //Store the starting time
    double duration;
    clock_t startTime = clock();
    //Code block
    
    cout <<"Recursive of f(" << 55 << ") : " << recursive(55) << endl; // For Recursive fibonacci sequence
 
//    cout <<"Iterative of f(" << 1000000000 << ") : " <<iterative(1000000000) << endl;  // For Iterative fibonacci sequence
    
    //Compute the number of seconds that passed since the starting time
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration << " milliseconds." << endl;
    
    
    return 0;
}
