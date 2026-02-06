class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();

        vector<int> front(n,1), back(n,1);

        int increment_rate = 0;

        for(int i=1; i<n; i++){
            if(ratings[i]>ratings[i-1]){
                increment_rate++;
                front[i]+=increment_rate;
            }
            else{
                increment_rate = 0;
            }
        }

        increment_rate = 0;

        for(int i=n-2; i>=0; i--){
            if(ratings[i]>ratings[i+1]){
                increment_rate++;
                back[i] += increment_rate;
            }
            else{
                increment_rate = 0;
            }
        }

        vector<int> final(n,1);

        for(int i=0; i<n; i++){
            final[i] = max(front[i],back[i]);
        }

        return accumulate(final.begin(),final.end(),0);
    }
};