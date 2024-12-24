#include <iostream>
#include <vector>
#include <unistd.h>
int maxArea(std::vector<int>& height)
{
    int max = 0;
    for(size_t l = 0, r = height.size()-1; l < r;)
    {
        int middleArea = r - l;
        int minSide = std::min(height[l], height[r]);
        max = std::max(max, middleArea * minSide);
        if (height[l] < height[r])
            l++;
        else
            r--;
    }
    return (max);
}