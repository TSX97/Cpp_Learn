class Solution {
    public:
        int diagonalSum(vector<vector<int>>& mat) {
            if(mat.size() <= 1 || mat[0].size() <= 1){
                return mat[0][0];
            }
            int count = 0;
            for(int i = 0; i < mat.size(); i++){
                if(mat.size() % 2 != 0 && i == mat.size() / 2){
                    count += mat[i][i];
                    
        
                }
                else{
                    count += mat[i][i];
                    count += mat[mat.size()-i-1][i];
        
                }
                
                
            }
            return count;
        }
    };