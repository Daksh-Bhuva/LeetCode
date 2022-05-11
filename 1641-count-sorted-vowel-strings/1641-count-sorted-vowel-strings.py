class Solution:
    def countVowelStrings(self, n: int) -> int:
        a, e, i, o, u = 1,1,1,1,1
        
        for x in range(2, n+1):
            e += a
            i += e
            o += i
            u += o
            
        
        
        return a + e + i + o + u