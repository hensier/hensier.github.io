i = 1
while True:
    a = []
    for j in range(1, 7):
        s = []
        k = str(i * j)
        for c in k:
            s.append(c)
        s.sort()
        a.append(s)
    flag = True
    for j in range(1, 6):
        if a[j] != a[j - 1]:
            flag = False
            break
    if flag:
        print(i)
        exit()
    i += 1