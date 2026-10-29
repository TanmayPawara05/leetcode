class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> ans;
        string res = "";

        for (int i = 0; i < m; i++) {
            res = "";
            for (int j = 0; j < n; j++) {
              
                if (i == 0) {
                    res += ".";
                } else {

                    if (j == n - 1)
                        res += ".";
                    else
                        res += "#";
                }
            }
            ans.push_back(res);
        }
        return ans;
    }
};