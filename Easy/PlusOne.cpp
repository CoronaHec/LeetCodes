#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
        std::vector<int> holder;
        for(int i = 0; i < digits.size(); i++) {
            holder[i] = digits[i];
        }
        for(int i = 0; i < digits.size(); i++) {
            std::cout << digits[i];
        }



        for(int i = 0; i < digits.size(); i++) {
            if(i == digits.size() - 1 && digits[i] <= 9) {
                digits[i] + 1;
            } else {

            }        
        }
        //return std::vector<2>;
        return digits;
    }
};

int main() {
    Solution s;
    std::vector<int> user;
    user.push_back(1);
    user.push_back(2);
    user.push_back(3);
    user.push_back(4);
    /*for(std::vector<int>::iterator it = user.begin(); it != user.end(); it++) {
        std::cout << *it << " ";
    }*/
    /*for(int value : user) {
        std::cout << value << " ";
    }*/
    // visual representation of the vector
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
        std::cout << user[*it];
    }


    return 0;
}