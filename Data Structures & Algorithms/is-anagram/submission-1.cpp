class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
        {
            return false;

        }
        int arr[128];
        for (int i = 0;i<128;i++)
        {
            arr[i] = 0;
        }
        for (char c : s)
        {
            arr[(int)c] +=1;
        }
        for (char n : t)
        {
            arr[(int)n]-=1;
            if (arr[(int) n ]<0)
            {
                return false;
            }
        }
        return true;
        
    }
};
