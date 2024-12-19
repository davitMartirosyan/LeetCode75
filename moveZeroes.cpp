#include <iostream>
#include <vector>

void moveZeroes(std::vector<int>& nums)
{
    for(size_t i = 0, j = 1; j < nums.size(); j++)
    {
        if (nums[i] == 0 && nums[j] == 0)
            continue;
        else if (nums[i] == 0 && nums[j] != 0)
        {
            int tmp = nums[i];
            nums[i] = nums[j];
            nums[j] = tmp;
            i++;
        }
        else
            i++;
    }
}