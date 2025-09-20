class Solution:
    def permute(self, a: List[int]) -> List[List[int]]:
        if a:
            res = []
            for v in a:
                b = [u for u in a if u != v]
                for p in self.permute(b):
                    res.append([v]+p)

            return res

        return [[]]