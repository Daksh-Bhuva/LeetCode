class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int> pq;
        
        for (int i = 1; i < heights.size(); i++) {
            if (heights[i] > heights[i-1]) {
                pq.push(heights[i] - heights[i-1]);
                if (bricks >= heights[i] - heights[i-1]) {
                    bricks -= heights[i] - heights[i-1];
                }
                else {
                    if (ladders) {
                        bricks += pq.top();
                        bricks -= heights[i] - heights[i-1];
                        pq.pop();
                        ladders--;
                    }
                    else {
                        return i - 1;
                    }
                }
            }
        }
        return (int)heights.size() - 1;
    }
};