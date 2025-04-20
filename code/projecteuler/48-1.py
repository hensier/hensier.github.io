mod = int(1e10)
ans = 0
for i in range(1, 1001): ans = (ans + pow(i, i, mod)) % mod
print(ans)