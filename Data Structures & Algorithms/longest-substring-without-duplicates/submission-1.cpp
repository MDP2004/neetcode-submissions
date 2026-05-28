class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int front = 0;
        int arr[256] = {0};
        int ans = 0;
        for (int back = 0 ; back < s.length() ; back++){
            arr[s[back]]++;
            while (arr[s[back]] == 2) {
                arr[s[front++]]--;
            }
            ans = max (ans , back-front+1);
        }

        return ans;

    }
};
