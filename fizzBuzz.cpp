// FizzBuzz is a problem that's pattern can be associated with Mathematical Logic
// The task is to print numbers from 1 to N where for example, if the number is
// a multiple of 3, print "Fizz", if the number is a multiple of 5, print "Buzz"
// if the number is a multiple of BOTH, print "FizzBuzz" otherwise just print
// the numebr itself

// The tool to solve this problem is the Modulo Operator (%)

// Time Complexity: O(N)
// Space Complexity: O(1)

#include <iostream>
#include <string>

using namespace std;

void fizzBuzz(int n){
    for(int i = 1; i <= n; i++){
        // This is how we avoid the common "fizzbuzz" trap.
        // The order in which we check the divisibility of
        // number matters. We must check if it is divisible
        // by both multiples FIRST rather than last or we
        // end up failing a test case.
        if(i % 3 == 0 && i % 5 == 0){
            cout << "FizzBuzz" << endl;
        }
        // Follow this by checking individual multiples
        else if(i % 3 == 0){
            cout << "Fizz" << endl;
        }
        // Follow this by checking individual multiples
        else if(i % 5 == 0){
            cout << "Buzz" << endl;
        }
        // Finally if its not divisible of neither, just print the number
        else{
            cout << i << endl;
        }
    }
}
int main(){


    return 0;
}