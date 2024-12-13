#include <iostream>
#include <string>
#include <vector>

std::string reverseWords(std::string s)
{
    std::string r;
    auto i = 0;
    auto j = 0;
    auto len = 0;
    for(; j <= (int)s.size(); j++)
    {
        if (j == (int)s.size() || std::isspace(s[j]))
        {
            if (len)
            { 
                r.insert(0, s.substr(i, (j - i)));
                len = 0;
            }
            i = j + 1;
            if (i < (int)s.size() && !std::isspace(s[i]))
                r.insert(0, " ");
        }
        else
            len++;
    }
    return (r);
}