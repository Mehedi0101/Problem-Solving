/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
    const arr = s.trim().split(" ");
    const filtered = arr.filter(item => item != "");
    const resultArray = [];
    while(filtered.length){
        const item = filtered.pop();
        resultArray.push(item);
    }
    const ans = resultArray.join(" ");
    
    return ans;
};