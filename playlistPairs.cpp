// This problem is focused on a list of song durations in seconds where we need
// to find pairs of songs whose total duration is divisible by 60 i.e. the
// durations add up to a perfectly whole minute

// Input: [30, 20, 150, 100, 40]
// Output: 3 (30+150, 20+100, 20+40)

#include <iostream>
#include <vector>

using namespace std;

int numPairsDivisibleBy60(vector<int> &time){
    int count = 0;
    int remainders[60] = {0}; // Array of size 60, initialized to 0 acts as our hash map

    for(int t : time) {
        int r = t % 60; // Get the remainder

        // Logic: Find the complement that comples the minute
        // If r is 0, we need 0. If r is 20, we need 40 and so on..
        int target = (r == 0) ? 0 : 60 - r;

        // Add the number of times we've seen the "target" before
        count += remainders[target];

        // Add current song to the bucket for future matches
        remainders[r]++;
    }
    
    return count;
}

int main(){
    return 0;
}