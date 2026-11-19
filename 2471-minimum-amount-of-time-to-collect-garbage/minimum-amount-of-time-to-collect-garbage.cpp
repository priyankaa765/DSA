class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int time = 0;

        int n = garbage.size();

        int G_idx = 0;
        int M_idx = 0;
        int P_idx = 0;

        for(int i = 0; i<n; i++){
            for(int j = 0; j< garbage[i].length(); j++){
                if(garbage[i][j] == 'M'){
                    M_idx = i;
                }else if(garbage[i][j] == 'G'){
                    G_idx = i;
                }else{
                    P_idx = i;
                }
                time++;
            }
        } 
        for(int i = 1; i<travel.size(); i++){
            travel[i] += travel[i-1];
        }

        time += M_idx > 0 ? travel[M_idx-1] : 0 ; //time taken to travel house for M truck 
        time += G_idx > 0 ? travel[G_idx-1] : 0 ; // time taken to travel house for G truck
        time += P_idx > 0 ? travel[P_idx-1] : 0 ; // time taken to travel house for P truck

        return time;
        
    }
};