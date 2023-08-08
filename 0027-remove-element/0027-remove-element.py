class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        idx = len(nums)-1
        i = 0
        while i in range(len(nums)):
            if nums[i] == val:
                nums[i], nums[idx] = nums[idx], nums[i]
                idx -= 1
                i -= 1
            if i == idx: break
            i += 1
        return idx+1