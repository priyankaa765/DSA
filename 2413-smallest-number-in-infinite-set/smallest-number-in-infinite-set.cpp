class SmallestInfiniteSet {
public:
    set<int> positives;
    SmallestInfiniteSet() {
        for(int i = 1; i <= 1000; i++){
            positives.insert(i);
        }
    }
    
    int popSmallest() {
        int ans = *positives.begin();
        positives.erase(ans);
        return ans;        
    }
    
    void addBack(int num) {
        if(num>0)positives.insert(num);        
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */