class Solution {
private:
    int charCount (int arr[]){
        int maxCount = 0;
        int sum = 0;
        for (int i=0 ; i<26 ; i++){
            maxCount = max (maxCount , arr[i]);
            sum += arr[i];
        }

        return sum - maxCount;
    }
public:
    int characterReplacement(string s, int k) {

        int arr[26] = {0};
        int ans = 0;
        int front = 0;
        for (int back = 0 ; back < s.length() ; back++){
            arr[s[back]-'A']++;
            while (front <= back && charCount(arr) > k){
                arr[s[front++]-'A']--;
            }
            ans = max (ans, back-front+1);

        }
        return ans;
    }
};
