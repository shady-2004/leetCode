class Solution:
    def vowelStrings(self, words: List[str], queries: List[List[int]]) -> List[int]:
        vowel = ('a','e','u','o','i')
        
        def start_end(string) :
            if   string[0] in vowel and  string[-1] in vowel :
                return 1 
            else :
                return 0
        
        prefix = [0] * len(words) 
    
        prefix[0] = start_end(words[0])

        for i in range(1,len(words)) :
            prefix[i] =  prefix[i-1] + start_end(words[i])
        
        res = []

        for query in  queries :
            
            res.append(prefix[query[-1]]-prefix[query[0]] + start_end(words[query[0]]) )     
                        
        return res