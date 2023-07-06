while True:
    n = int(input())
    if n == 0:
        break
    s = input()
    ans = n
    d = -1
    r = -1
    for i, j in enumerate(s):
        if j == 'D':
            d = i
            if r != -1:

                ans = min(ans, abs(r-d))
        elif j == 'R':
            r = i
            if d != -1:
                ans = min(ans, abs(r - d))
        elif j == 'Z':
            ans = 0
            break
    print(ans)
