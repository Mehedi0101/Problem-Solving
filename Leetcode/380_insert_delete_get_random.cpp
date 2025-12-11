class RandomizedSet {
public:
    set<int> st;

    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        int x = st.size();
        st.insert(val);
        int y = st.size();

        if(x != y) return true;
        else return false;
    }
    
    bool remove(int val) {
        int x = st.size();
        st.erase(val);
        int y = st.size();

        if(x != y) return true;
        else return false;
    }
    
    int getRandom() {
        int x = rand()%(st.size());
        auto it = st.begin();
        while(x>0){
            it++;
            x--;
        }
        return *it;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */