// This solution is for any problem that may require reversing a string.
// It reverses a string simply by switching Left and Right using the swap
// built in function in C++. No second array or string was needed so this
// solution is very space efficient

// Time Complexity: O(N)
// Space Complexity: O(1)

#include <vector>
#include <algorithm> // for std::swap

using namespace std;

void reverseString(vector<char> &s) {
    int left = 0;
    int right = s.size() - 1;

    while (left < right) {
        // The "Action" step (The Swap)
        swap(s[left], s[right]); // Using built-in C++ function to trade places

        // The "Movement" step where the while loop moves inward.
        // The "left" integer moves to the right and the "right"
        // integer moves to the left until they meet in the middle
        // this pincer movement is very similar to the "Two Pointers"
        // solution that is used for the Palindrome problem except these
        // are integers to access char data at an array index.
        left++;
        right--;
    }
}

int main(){

    return 0;
}