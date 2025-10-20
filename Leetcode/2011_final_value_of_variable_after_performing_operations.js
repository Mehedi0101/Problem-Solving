/**
 * @param {string[]} operations
 * @return {number}
 */
var finalValueAfterOperations = function(operations) {
    let ans = 0;

    operations.forEach(op => {
        if(op === "X++" || op == "++X") ans++;
        else if(op === "X--" || op === "--X") ans--;
    })

    return ans;
};