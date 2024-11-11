class Solution 
  public:
    vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
        // write code here
        vector<int> ans;
        queue<int> pos;
        int i=0, j=0, n = arr.size();
        while(j<n){
            if(arr[j] < 0) pos.push(arr[j]); 
            if(j-i+1 == k){
                if(pos.empty()) ans.push_back(0);
                else{
                    ans.push_back(pos.front());
                    if(arr[i] == pos.front()) pos.pop();
                };
                i++;
            }
            j++;
        }
        return ans;
    }
};