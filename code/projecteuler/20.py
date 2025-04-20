import math
s = str(math.factorial(100))
ans = 0
for i in s:
    ans += int(i)
print(ans)