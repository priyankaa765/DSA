class Solution {
    static bool comp(vector<int> &fp, vector<int> &sp){
        if(fp[1] < sp[1])return true;

        return false;
    }
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(),comp);

        int n = points.size();
        int arrow = points[0][1];
        int count = 1;

        for(int i = 1; i<n; i++){
            if(points[i][0] > arrow){
                arrow = points[i][1];
                count++;
            }
        }
        return count;
        
    }
};