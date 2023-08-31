/**
 * @file test2.cpp
 * @author wsc
 * @brief 给定一个 n 个元素有序的（升序）整型数组 nums 和一个目标值 target，
 * 写一个函数搜索 nums 中的 target，如果目标值存在返回下标，否则返回 -1。
 * 输入: nums = [-1,0,3,5,9,12], target = 9
 * 输出: 4
 * 解释: 9 出现在 nums 中并且下标为 4
 * @version 使用线性查找方法
 * @date 2023-08-31
 */
/*
class Solution {
public:
    int search(vector<int>& nums, int target) {
        for (int i = 0; i<nums.size(); i++ ){
            if (target==nums[i]){
                return i;
            }else{
                continue;
            }
        }
        return -1;

    }
};
*/

/**
 * @file test2.cpp
 * @author wsc
 * @version 有序数列使用二分查找
 * @date 2023-08-31
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <vector>

class Solution {
public:
    int search(std::vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            if (target == nums[i]) {
                return i;
            } else {
                continue;;
            }
        }
        return -1;
    }
};

int main() {
    Solution solution;
    std::vector<int> nums = {0, 1, 2, 4, 5, 6, 7};
    int target = 4;
    int result = solution.search(nums, target);
    std::cout<<result<<std::endl;
    return 0;
}

/**
 * @brief 
 * 
 */