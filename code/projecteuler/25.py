import sys
a = b = 1
ans = 2
while True:
    a, b = b, a + b
    ans += 1
    if len(str(b)) == 1000:
        print(ans)
        sys.exit()