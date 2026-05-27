#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
        std::vector<int> holder; // temp holder
        for(int i = 0; i <= digits.size(); i++) {
            if(i == digits.size()-1) {
                if(digits[i] == 9) {
                    //if 9 then current turns to 1 and then a 0 at then
                    digits[i] = 1;
                    digits.push_back(0);
                    break;
                } else {
                    digits[i] += 1;
                }
            }
        }
        std::cout << "[";
        for(int i = 0; i < digits.size(); i++) {
            std::cout << digits[i];
            if(i != digits.size()-1) {
                std::cout << ", ";
            }
        }
        std::cout << "]";
        return digits;
    }
    
};  

int main() {
    Solution s;
    std::vector<int> user;
    //user.push_back(1);
    //user.push_back(2);
    //user.push_back(3);
    //user.push_back(4);
    user.push_back(9);
    /*for(std::vector<int>::iterator it = user.begin(); it != user.end(); it++) {
        std::cout << *it << " ";
    }*/
    /*for(int value : user) {
        std::cout << value << " ";
    }*/
    std::cout << "[";
    for(int i = 0; i < user.size(); i++) {
        std::cout << user[i];
        if(i != user.size()-1) {
            std::cout << ", ";
        }
    }
    std::cout << "]";

    // passing vector into PlusOne
    std::vector<int> addedVec = s.plusOne(user);
    for(std::vector<int>::iterator it = addedVec.begin(); it != addedVec.end(); it++) {
        // std::cout << user[*it];
        std::cout << *it;
    }


    return 0;
}