#freq array is a tuple because it's unmutable
#hashmap of [freq array -> list of strs]
#time - O(n * m)
#space - O(m)
#defaultdict(list) -> initializes a missing key as empty list
class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        res = defaultdict(list)
        for s in strs:
            count = [0] * 26
            for c in s:
                count[ord(c) - ord('a')] += 1
            res[tuple(count)].append(s)
        return list(res.values())


        
        