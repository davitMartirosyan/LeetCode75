#include <iostream>
#include <string>

bool isSubsequence(std::string s, std::string t)
{
    size_t j = 0;
    for(size_t i = 0; i < t.size(); i++)
    {
        if (t[i] == s[j])
            j++;
    }
    return (j == s.size());
}