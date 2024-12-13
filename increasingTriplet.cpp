#include <iostream>
#include <vector>
#include <limits>
#include <stack>

bool increasingTriplet(std::vector<int> nums)
{
    int64_t x = std::numeric_limits<int64_t>::max();
    int64_t y = std::numeric_limits<int64_t>::max();
    for(size_t i = 0; i < nums.size(); i++)
    {
        if ((int64_t)nums[i] <= x)
            x = nums[i];
        else if ((int64_t)nums[i] <= y)
            y = nums[i];
        else
            return (true);
    }
    return (false);
}
