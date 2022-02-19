class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> decoded;
        decoded.push_back(first);
        for (int i = 0; i < encoded.size(); i++) {
            int xors = first ^ encoded[i];
            decoded.push_back(xors);
            first = xors;
        }
        return decoded;
    }
};