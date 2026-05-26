#include <iostream>
#include <vector>


class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++) {
            for(int j = i + 1; j < nums.size(); j++) {
                if(nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return{};
    }
};

int main() {
    int target = 18;
    Solution solution;
    std::vector<int> nums = {2,7,11,15};
    std::vector<int> endResult = solution.twoSum(nums, target);
    std::cout << "Index: ";
    for(int x : endResult) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    std::cout << "The numbers are: ";
    for(int x : endResult) {
        std::cout << nums[x] << " ";
    }
    std::cout << std::endl;
    std::cout << "Using iterators: ";
    for(std::vector<int>::iterator it = endResult.begin(); it != endResult.end(); it++) {
        std::cout << nums[*it] << " ";
    }

    return 0;
}