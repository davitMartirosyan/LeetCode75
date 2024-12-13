#include <iostream>
#include <vector>

bool canPlaceFlowers(std::vector<int>& flowerbed, int n)
{
    int placed = 0;
    if (flowerbed.size() == 1)
    {
        return (flowerbed[0] == 1 && n ? false : true);
    }
    for(int i = 0; i < (int)flowerbed.size(); i++)
    {
        if (i == 0 && flowerbed[i + 1] == 0 && flowerbed[i] == 0 && ++flowerbed[i])
            placed++;
        else if (i == (int)flowerbed.size()-1 && flowerbed[i - 1] == 0 && flowerbed[i] == 0 && ++flowerbed[i])
            placed++;
        else if (i > 0 && i < (int)flowerbed.size()-1)
            if (flowerbed[i - 1] == 0 && flowerbed[i] == 0 && flowerbed[i + 1] == 0 && ++flowerbed[i])
                placed++;
    }

    std::cout << placed << " : " << n << std::endl;
    return (placed >= n);
}