class Solution {
    public:
        int maxContainers(int n, int w, int maxWeight) { //гениальный код
            return (n*n > maxWeight/w) ? maxWeight / w : n*n; //я его украл
        } 
};