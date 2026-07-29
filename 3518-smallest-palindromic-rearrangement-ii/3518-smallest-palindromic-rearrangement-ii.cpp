class Solution {
public:
    const long long LIM = 1000000LL + 1;

    long long ways(vector<int>& cnt) {
        int total = 0;
        for (int x : cnt) total += x;

        long long ans = 1;

        for (int c : cnt) {
            if (c == 0) continue;

            int take = c;
            for (int i = 1; i <= take; i++) {
                ans = ans * (total - take + i) / i;
                if (ans > LIM) ans = LIM;
            }
            total -= take;
        }

        return ans;
    }
    string smallestPalindrome(string s, int k) {
        vector<int> freq(26);

        for (char c : s)
            freq[c - 'a']++;

        vector<int> half(26);
        char mid = 0;

        int len = 0;

        for (int i = 0; i < 26; i++) {
            half[i] = freq[i] / 2;
            len += half[i];
            if (freq[i] & 1)
                mid = 'a' + i;
        }

        if (ways(half) < k)
            return "";

        string left;

        for (int pos = 0; pos < len; pos++) {

            for (int c = 0; c < 26; c++) {

                if (half[c] == 0) continue;

                half[c]--;

                long long cnt = ways(half);

                if (cnt >= k) {
                    left.push_back('a' + c);
                    break;
                }

                k -= cnt;
                half[c]++;
            }
        }

        string right = left;
        reverse(right.begin(), right.end());

        if (mid)
            return left + mid + right;

        return left + right;
    }
};