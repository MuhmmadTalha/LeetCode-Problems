class Solution {
public:
    string convert(string s, int numRows) {
        int x = numRows;
        // int rows = 0;
        // string newString;
        vector<string> letters(x);
        bool down = true;
        if (numRows == 1)
            return s;
        
        for (int i = 0, j = 0; i < s.size(); i++) {

            letters[j].push_back(s[i]);
            if (down) {
                if (j == numRows - 1) {
                    j--;
                    down = false;
                } 
                else {
                    j++;
                }
            } 
            else {
                if (j == 0) {
                    j++;
                    down = true;
                } 
                else {
                    j--;
                }
            }
        }

        string ans;

        for (int i = 0; i < letters.size(); i++) {
            ans += letters[i];
        }

        return ans;
    }
};