#include <iostream>
#include <vector>
#include <ranges>
#include <algorithm>

std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies)
{
    std::vector<bool> res(candies.size(), false);
    int max = *std::max_element(candies.begin(), candies.end());
    std::ranges::for_each(candies.begin(), candies.end(), [&](int& c){
        if (c+extraCandies >= max)
            res[ &c - (int*)&candies[0] ] = true;
    });
    return (res);
}