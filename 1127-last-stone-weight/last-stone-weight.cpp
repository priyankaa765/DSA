class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
      // max heap by default
      priority_queue<int> pq(stones.begin(), stones.end()); 

       // smash stones together until 0 or 1 stone remain
       while(pq.size() > 1){
        int y = pq.top() ; pq.pop(); // heaviest
        int x = pq.top() ; pq.pop(); // second heaviest

        if(x != y){
            pq.push(y-x); // Remaining weight
        }
       }

       // return the last stone's weight
       return pq.empty() ? 0 : pq.top();
    }
};