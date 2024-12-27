#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <unistd.h>
#include <cmath>

double findMaxAverage(std::vector<int>& nums, [[maybe_unused]]int k)
{
    double maxAvarage = -INFINITY;
    double currSub = 0;

    size_t i = 0;
    for(; (int)i < k; i++)
        currSub += nums[i];
    
    maxAvarage = currSub / k;
    for(size_t j = i; j < nums.size(); j++)
    {
        currSub += nums[j];
        currSub -= nums[j - k];
        maxAvarage = std::max(currSub / k, maxAvarage);
    }
    return (maxAvarage);
}