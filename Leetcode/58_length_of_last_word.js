/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {
    var trimmedString = s.trim();
    var j = trimmedString.length-1;
    while(trimmedString[j] != ' ' && j>0){
        j--;
    }

    if(j == 0) return trimmedString.length-j;
    else return trimmedString.length-j-1;
};