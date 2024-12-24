#include <iostream>
#include <vector>
#include <algorithm>
#include <unistd.h>
int maxOperations(std::vector<int>& nums, int k)
{
    int op = 0;
    std::sort(nums.begin(), nums.end());
    for(size_t l = 0, r = nums.size()-1; l < r;)
    {
        int sum = nums[l] + nums[r];
        if (sum == k)
        {
            op++;
            l++;
            r--;
        }
        else if (sum < k)
            l++;
        else if (sum > k)
            r--;
    }
    return (op);
}
