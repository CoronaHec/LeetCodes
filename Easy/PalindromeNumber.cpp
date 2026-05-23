#include <iostream>

class Solution {
public:
    bool isPalindrome(int x) {
        int original = x;
        long reversedX = 0;

        if(x < 0) {
            return false;
        }

        while(x > 0) {
            int number = x % 10;
            reversedX = reversedX * 10 + number;
            x /= 10;
        } 
        return original == reversedX;
    }
};

int main() {
    Solution s;

    std::cout << "Enter a number to find out if it is a palindrome: ";;
    int num;
    std::cin >> num;

    bool r = s.isPalindrome(num);
    if(r) {
        std::cout << num << " is a palindrome";
    }
    else {
        std::cout << num << " is NOT a palindrome";
    }
    return 0;
}