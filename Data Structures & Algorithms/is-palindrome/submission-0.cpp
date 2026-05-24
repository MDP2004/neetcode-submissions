class Solution {
private:
    bool isAlphaNumeric (char c){
        return (c>='A' && c<='Z') || (c>='a' && c<='z') || (c>='0' && c <='9');
    }
public:
    bool isPalindrome(string s1) {
        string s = "";
        for (char c : s1){
            if (c>='A' && c<='Z') s += c-'A'+'a';
            else s += c;
        }
        int i=0 , j=s.length()-1;

        while (i<s.length() && !isAlphaNumeric(s[i])) i++;
        while (j>=0 && !isAlphaNumeric(s[j])) j--;
        while (i<j) {
            if (s[i++] != s[j--]) return false;
            while (i<s.length() && !isAlphaNumeric(s[i])) i++;
            while (j>=0 && !isAlphaNumeric(s[j])) j--;
        }

        return true;
    }
};
