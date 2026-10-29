class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string  res = "";
        string first = strs[0];
        string last = strs[strs.size() -1];
        int n = first.length() , m = last.length();

        for(int i = 0 ; i<n && i<m ; i++){
            if(first[i] != last[i]){
                break;
            }
            else{
                res+=first[i];
            }
        }
        return res;
        
    }
};