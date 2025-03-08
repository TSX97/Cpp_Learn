class Solution { //решил не полностью сам, был близок, но с обьяснением понял
    public:
        string restoreString(string s, vector<int>& indices) {
            string result = s;
            for(int i = 0; i < indices.size(); i++){
                result[indices[i]] = s[i];
            }
            return result;
        }
    };