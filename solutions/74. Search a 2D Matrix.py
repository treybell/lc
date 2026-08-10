class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        for i in range (len(matrix)):
            left = 0
            right = len(matrix[i]) - 1
            

            while left <= right: 
                mid = left + (right - left) // 2
                if matrix[i][mid] == target:
                    return True
                elif matrix[i][mid] < target:
                    left = mid + 1
                else:
                    right = mid - 1
        return False
            
#this was my initial approach and it works in terms of obtaining the correct answer, however it fails the time constraint of O(log(m * n))
#this is because it does not use binary search when it comes to the rows, instead it iterates through them one by one
#was accepted by neetcode but not leetcode



            
                
