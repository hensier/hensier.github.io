a = []
for i in range(2, 101):
    for j in range(2, 101):
        a.append(i ** j)
print(len(list(set(a))))