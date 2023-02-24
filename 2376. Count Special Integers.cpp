    int countSpecialNumbers(int n)
    {
        string s = to_string(n);
        int digits = s.size(), ans = 0;
        for (int i = 1; i < digits; i++)
        {
            int x = 1, k = 9;
            for (int j = 0; j < i - 1; j++)
                x *= k, k--;
            ans += 9 * x; // ways to get special integers with digits less than that in n
        }
        vector<int> done(10, 0);
        for (int i = 0; i < digits; i++)
        { // ways for equal digits
            int smaller = 0;
            for (int j = 0; j < s[i] - '0'; j++)
                if (!done[j])
                    smaller++; // counting digits less than s[i]
            if (i == 0 && s[i] > '0')
                smaller--; // we cannot keep 0 at the first index
            int aage = 1, rem = 10 - i - 1;
            for (int j = i + 1; j < digits; j++)
                aage *= rem, rem--;
            ans += smaller * aage;
            if (!done[s[i] - '0'])
                done[s[i] - '0'] = 1;
            else
                return ans;
        }
        return ans + 1;
    }
