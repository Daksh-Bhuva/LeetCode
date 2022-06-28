class Solution:
    def minimumHealth(self, damage: List[int], armor: int) -> int:
        s = sum(damage)
        maxi = max(damage)
        
        if armor >= maxi:
            return s - maxi + 1
        else:
            return s - armor + 1