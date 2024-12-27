#include <iostream>
#include <vector>
#include <string>
#include <bitset>

int maxVowels([[maybe_unused]]std::string s, [[maybe_unused]]int k)
{
    std::bitset<128> vUMask;
    vUMask['A'] = 1;
    vUMask['E'] = 1;
    vUMask['I'] = 1;
    vUMask['O'] = 1;
    vUMask['U'] = 1;
    vUMask['a'] = 1;
    vUMask['e'] = 1;
    vUMask['i'] = 1;
    vUMask['o'] = 1;
    vUMask['u'] = 1;
    int max = 0;
    int curr = 0;
    for(int i = 0, j = 0; j < (int)s.size(); j++)
    {
        if (vUMask[ s[j] ])
            curr++;
        if (j >= k)
        {
            if (vUMask[ s[j - k]] )
                curr--;
            max = std::max(curr, max);
            i++;
        }
        max = std::max(curr, max);
    }
    return (max);
}