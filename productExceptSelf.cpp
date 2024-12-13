#include <iostream>
#include <vector>

std::vector<int> productExceptSelf(std::vector<int>& nums)
{
    std::vector<int>lvalue{1};
    std::vector<int>rvalue{1};
    for(size_t i = 0; i < nums.size()-1; i++)
        lvalue.push_back(nums[i] * lvalue[i]);
    for(size_t i = nums.size()-1; i > 0; i--)
        rvalue.push_back( nums[i] * rvalue[ nums.size()-1 - i]);
    for(size_t i = 0, j = rvalue.size()-1; i < nums.size(); i++, j--)
        nums[i] = lvalue[i] * rvalue[j];
    return (nums);
}