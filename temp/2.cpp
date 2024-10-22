#include<bits/stdc++.h>
#include<cctype>

using namespace std;

class Solution {
public:
    bool isalphanumeric(char c)
    {
       if(('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z') || (48 <= c && c <= 57))
       {
         return true;
       }
       else
        return false;
    }

    bool isPalindrome(string s) {
        bool flag = false;
        int start =0;
        int end = s.length()-1;
        while(start<=end)
        {
          if(!isalphanumeric(s[start]))
          {
            start++;
            continue;
          }
          if(!isalphanumeric(s[end]))
          {
            end--;
            continue;
          }
          if((tolower(s[start])) != (tolower(s[end])))
          {
            return false;
          }
          else
          {
            start++; end--;
          }    
        }
     return true;;   
    }
};