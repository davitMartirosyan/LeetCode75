#include <iostream>
#include <string>
#include <vector>
#include "trie.hpp"

int compress(std::vector<char>& chars)
{
    std::string s;
    for(size_t i = 0; i < chars.size();)
    {
        for(size_t j = i; j < chars.size();)
        {
            if ( chars[i] == chars[j])
            {
                j++;
                if (j == chars.size())
                {
                    s+= chars[i];
                    if ((j - i) > 1)
                        s += std::to_string(j-i);
                    i = j;
                    break;
                }
            }
            else
            {
                s += chars[i];
                if ((j - i) > 1)
                    s += std::to_string(j-i);
                i = j;
                break;
            }
        }
    }
    for (size_t i = 0; i < s.size(); i++)
        chars[i] = s[i];
    chars.erase(chars.begin() + s.size(), chars.end());
    return (s.size());
}