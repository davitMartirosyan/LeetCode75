#include <string>
#include <bitset>


std::string reverseVowels(std::string s)
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
        for(size_t i = 0, j = s.size()-1; i < j;)
        {
            if (vUMask[ s[i] ] && vUMask[ s[j] ])
            {
                s[i] = s[i] + s[j];
                s[j] = s[i] - s[j];
                s[i] = s[i] - s[j];
                i++;
                j--;
            }
            else if ( vUMask[ s[i] ] && !vUMask[ s[j] ])
                j--;
            else if (!vUMask[ s[i] ] && vUMask[ s[j] ])
                i++;
            else {i++; j--;};
        }
        return (s);
    }
