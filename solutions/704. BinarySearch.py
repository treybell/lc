#initial solution from scratch
#does more work than needed, so needs revising

class Solution:
    def search(self, nums: List[int], target: int) -> int:
        l = 0
        r = len(nums) - 1
        middle = (r - l) // 2

        if nums[l] == target:
            return l
        if nums[r] == target:
            return r
        
        while middle != l and middle != r:
            if target > nums[middle]:
                l = middle
                middle = middle + ((r - l) // 2)
                if nums[middle] == target:
                    return middle
            if target < nums[middle]:
                r = middle
                middle = l + ((r - l) // 2)
                if nums[middle] == target:
                    return middle
            if nums[middle] == target:
                return middle
                
        
        return -1