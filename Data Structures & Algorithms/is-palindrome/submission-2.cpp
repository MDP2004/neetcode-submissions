class Solution {
public:
    bool isPalindrome(string s1) {
        string s = "";
        for (char c : s1){
            if (c>='A' && c<='Z') s += c-'A'+'a';
            else if ((c>='a' && c<='z') || (c>='0' && c<='9')) s += c;
        }
        int i=0 , j=s.length()-1;
        while (i<j) {
            if (s[i++] != s[j--]) return false;
            
        }

        return true;
    }
};
