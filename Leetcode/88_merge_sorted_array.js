/**
 * @param {number[]} nums1
 * @param {number} m
 * @param {number[]} nums2
 * @param {number} n
 * @return {void} Do not return anything, modify nums1 in-place instead.
 */
var merge = function(nums1, m, nums2, n) {
    let nums3 = [], i = 0, j = 0;

    while(i<m && j<n){
        if(nums1[i] < nums2[j]){
            nums3.push(nums1[i]);
            i++;
        }
        else{
            nums3.push(nums2[j]);
            j++;
        }
    }

    while(i<m){
        nums3.push(nums1[i]);
        i++;
    }

    while(j<n){
        nums3.push(nums2[j]);
        j++;
    }

    for(let q=0; q<m+n; q++){
        nums1[q] = nums3[q];
    }
};