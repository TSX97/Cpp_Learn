class Solution {
    public:
        int numberOfChild(int n, int k) {
            int step = 1;
            k++;
            for(int i = 0; i < n; i += step){
                cout << i << " ";
                if (i == n - 1){ step = -1; }
                else if(i == 0){ step = 1; }
                k--;
                if(k == 0){
                    return i;
                }
    
            }
            return 69;
        }
    };