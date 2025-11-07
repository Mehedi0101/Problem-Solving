/**
 * @param {string} s
 * @return {number}
 */
var romanToInt = function(s) {
    const dictionary = {
        'I': 1,
        'V': 5,
        'X': 10,
        'L': 50,
        'C': 100,
        'D': 500,
        'M': 1000
    }

    var ans = 0;

    for(let i=0; i<s.length-1; i++){
        if(dictionary[s[i]] < dictionary[s[i+1]]){
            ans -= dictionary[s[i]];
        }
        else{
            ans += dictionary[s[i]];
        }
    }

    ans += dictionary[s[s.length-1]];

    return ans;
};