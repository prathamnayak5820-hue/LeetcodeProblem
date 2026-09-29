class Solution:
    def findMaxConsecutiveOnes(self, nums: list[int]) -> int:
        count =0
        max =0
        for i in range(len(nums)):
            if nums[i]==1:
                count+=1
                if count>max:
                    max=count

            else:
                count =0
        return max
        