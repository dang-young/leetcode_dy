class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        match = {'(':')', '{':'}', '[':']'} #dictionary
        
        for c in s:
            if c in match:
                stack.append(c)
            else:
                if len(stack)==0: return False
                if match[stack.pop()]!=c: return False
            
        return len(stack)==0