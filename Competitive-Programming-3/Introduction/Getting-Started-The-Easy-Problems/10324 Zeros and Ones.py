t = 1
while True:
    try:
        s = input()
        if len(s) == 0:
            break
        arr = []
        for i in enumerate(s):
            if len(arr) == 0:
                arr.append(0)
            else:
                if i[1] != s[i[0]-1]:
                    arr.append(arr[-1]+1)
                else:
                    arr.append(arr[-1])
        n = int(input())
        print(f'Case {t}:')
        for _ in range(n):
            i, j = map(int, input().split())
            if arr[i] == arr[j]:
                print('Yes')
            else:
                print('No')
        t += 1
    except EOFError:
        break
