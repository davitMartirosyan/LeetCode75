#include <iostream>
#include <string>

std::string gcdOfStrings(std::string str1, std::string str2)
{
    if (str1+str2 != str2+str1)
        return ("");
    auto gcd = [&](size_t s1, size_t s2){
        size_t min = std::min(s1, s2);
        while (min > 0)
        {
            if (s1 % min == 0 && s2 % min == 0)
                break;
            min--;
        }
        return (min);
    };
    size_t gcdiv = gcd(str1.size(), str2.size());
    return (str2.substr(0, gcdiv));
}