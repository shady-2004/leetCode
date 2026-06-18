1class Solution:
2    symp = {
3        1: 'I',
4        5: 'V',
5        10: 'X',
6        50: 'L',
7        100: 'C',
8        500: 'D',
9        1000: 'M'
10    }
11    def intToRoman(self, num: int) -> str:
12        res = ''
13        string = f"{num}"
14        e = len(string)
15        i = 0
16        while e-i :
17            t = int(string[i])
18            if e - i == 4 :
19                res+=self.symp[1000]*t
20            elif e-i == 3 and t != 0 :
21                if t * 100 in self.symp :
22                    res+=self.symp[t * 100]
23                elif t < 4 :
24                    res += self.symp[100]*t
25                    
26                elif  t == 4 or t == 9  :
27                    res += self.symp[100]
28                    res += self.symp[(t+1)*100]
29                else :
30                    temp = t * 100
31                    res+=self.symp[500]
32                    temp -= 500
33                    temp //= 100
34                    res += self.symp[100]*temp
35            elif e-i == 2 and t!= 0 :
36                if t * 10 in self.symp :
37                    res+=self.symp[t * 10]
38                elif int(t < 4) :
39                    res += self.symp[10]*t
40
41                elif  t == 4 or t == 9  :
42                    res += self.symp[10]
43                    res += self.symp[(t+1)*10]
44
45                else :
46                    temp = t * 10
47                    res += self.symp[50]
48                    temp -= 50
49                    temp //= 10
50                    res += self.symp[10]*temp
51            else :
52                if t  in self.symp :
53                    res+=self.symp[t]
54                elif int(t < 4) :
55                    res += self.symp[1]*t
56
57                elif  t == 4 or t == 9  :
58                    res += self.symp[1]
59                    res += self.symp[(t+1)*1]
60
61                else :
62                    temp = t 
63                    res+=self.symp[5]
64                    temp -= 5
65                    temp 
66                    res += self.symp[1]*temp
67            i+=1
68        return res