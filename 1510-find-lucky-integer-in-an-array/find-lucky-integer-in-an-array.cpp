class Solution {
public:
    int findLucky(vector<int>& arr) {
     unordered_map<int , int> hm; 

     for (int i = 0 ; i < arr.size() ; i++){
        int ele = arr[i];
        hm[ele]++ ;            
    }
    int Lucky = -1;

    for(auto const& [key , val]: hm){
        if(key == val){
            Lucky = max(Lucky, key);
        }
    }
    return Lucky;   
    }
};