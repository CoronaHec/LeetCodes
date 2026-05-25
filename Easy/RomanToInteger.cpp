#include <iostream>
#include <string>
#include <unordered_map>

class Solution {
public:
    int romanToInt(std::string s) {
        int result = 0;
        std::unordered_map<char, int> roman = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        for(int i = 0; i < s.length(); i++) {
            if(i + 1 < s.length() && roman[s[i]] < roman[s[i + 1]]) {
                result -= roman[s[i]];
            }
            else {
                result += roman[s[i]];
            }
        }
        return result;      
    }
};

int main() {
    std::string roman = "";
    Solution s;
    std::cout << "What roman numeral do you want to convert into an integer? " << std::endl;
    std::cin >> roman;
    std::cout << "The integer for " << roman << " is: " << s.romanToInt(roman);

    return 0;
}