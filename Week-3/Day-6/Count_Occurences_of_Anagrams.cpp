//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    map<char,long long> mp1, mp2;
	    long long k = pat.size(), n = txt.size();
	    for(char c:pat) mp1[c]++;
	    long long i=0, j=0, ans=0;
	    while(j<n){
	        mp2[txt[j]]++;
	        if(j-i+1 == k){
	            if(mp1 == mp2){
	                ans++;
	            }
	            mp2[txt[i]]--;
	            if(mp2[txt[i]] == 0) mp2.erase(txt[i]);
	            i++;
	        }
	        j++;
	    }
	    return ans;
	}

};