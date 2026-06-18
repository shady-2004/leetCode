1class Solution:
2    def angleClock(self, hour: int, minutes: int) -> float:
3        angle2 = (minutes/60)*360
4        if hour == 12 :
5            hour = 0
6        angle1 = (hour*30) + (minutes/60)*30
7        return min(abs(angle1-angle2),360 - abs(angle1-angle2))
8