# Fibonacci Analysis - Cs 201, Fall 2018 Homework Assignment 2
 
The problem of finding the nth Fibonacci number. Two alternative algorithms that solve this problem. Each algorithm has a different time complexity. The goal of this assignment is to simulate the growth rates of both algorithms using different inputs.
 
## Algorithm 1: An iterative algorithm which works in O(n) time. 
    long fib(long n){
         long current = 1;
         long prev = 1;
         long result = 1;

         if(n == 0)
             result = 0;

         for(int i = 3 ; i <= n ; i++){
             result = current + prev;
             prev = current;
             current = result;
         }
         return result;
     }


## Algorithm 2: A recursive algorithm which works in O(2n) time.
    long fib(int n){
	        if (n <= 1)
	            return 1;
	        return fib(n - 1) + fib(n - 2);
	    }


## Copyright and Licence

© Burak Korkmaz, Bilkent University Computer Science

Licenced under the [MIT Licence](LICENCE).
