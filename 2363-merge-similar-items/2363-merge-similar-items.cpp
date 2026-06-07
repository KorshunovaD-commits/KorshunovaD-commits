class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int, int> weightSum;
        for (auto& item : items1) {
            weightSum[item[0]] += item[1];
        }
         for (auto& item : items2) {
            weightSum[item[0]] += item[1];
         }
         vector<vector<int>> result;
        for (auto& entry : weightSum) {
            result.push_back({entry.first, entry.second});
        }
        return result;
    }
};