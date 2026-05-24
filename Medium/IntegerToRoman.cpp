#include <iostream>
#include <string>
#include <vector>
#include <map>

class Solution {
public:
    std::string intToRoman(int num) {
        std::string result = "";
        std::vector<std::pair<int, std::string>> roman = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {3, "III"}, {2, "II"}, {1, "I"}
        };
        for(const auto& pair : roman) {
            while(num >= pair.first) {
                result += pair.second;
                num -= pair.first;
            }
        }
        return result;
    }
};

int main() {
    int number;
    Solution s;
    std::cout << "What number do you want to convert to Roman Integers? " << std::endl;
    std::cin >> number;
    std::cout << std::endl;
    std::cout << "Your roman numeral is: ";
    std::string romanNumeral = s.intToRoman(number);
    std::cout << romanNumeral << std::endl; 
    return 0;
}