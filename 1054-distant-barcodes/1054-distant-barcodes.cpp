class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
        int n = barcodes.size();
        unordered_map<int, int> freq;
        
        // Count the frequency of each barcode
        for (int b : barcodes) {
            freq[b]++;
        }
        
        // Transfer to a vector of pairs to sort by frequency
        vector<pair<int, int>> sorted_barcodes;
        for (auto& p : freq) {
            sorted_barcodes.push_back({p.second, p.first});
        }
        
        // Sort in descending order of frequency
        sort(sorted_barcodes.begin(), sorted_barcodes.end(), greater<pair<int, int>>());
        
        vector<int> ans(n);
        int idx = 0;
        
        // Place barcodes at even indices first, then odd indices
        for (auto& p : sorted_barcodes) {
            for (int i = 0; i < p.first; ++i) {
                ans[idx] = p.second;
                idx += 2;
                if (idx >= n) {
                    idx = 1; // Wrap around to the first odd index
                }
            }
        }
        
        return ans;
    }
};