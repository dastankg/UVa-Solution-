n, t, p = map(int, input().split())
l = []
lst = [0] * t
for i in range(n):
    l.append(input().split())
    for j in range(t):
        if l[-1][j] == '0':
            lst[j] += 1
ans = []
for i in range(n):
    c = 0
    for j in range(t):
        if l[i][j] == '1':
            c += lst[j]
    ans.append((c, l[i].count('1'), i + 1))
ans.sort(key=lambda x: x[1], reverse=True)
ans.sort(key=lambda x: x[0], reverse=True)
for i in range(n):
    if ans[i][2] == p:
        print(ans[i][0], i + 1)
        break
