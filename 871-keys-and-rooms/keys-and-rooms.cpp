class Solution {
public:
    void dfs (vector<vector<int>>& rooms,vector<bool> &visited, int currRoom){
        visited[currRoom]= true;
        for(auto room:rooms[currRoom]){
            if(!visited[room]) dfs(rooms,visited,room);
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool> visited(rooms.size(), false);
        dfs(rooms,visited,0);
        for(auto i:visited){
            if(i == false) return false;
        }
        return true;
    }
};