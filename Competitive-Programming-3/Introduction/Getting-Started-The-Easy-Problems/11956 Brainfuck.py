t = int(input())
for i in range(t):
    s = input()
    l = [0] * 100
    point = 0
    for j in s:
        if j == '+':
            l[point] += 1
            if l[point] == 256:
                l[point] = 0
        elif j == '-':
            l[point] -= 1
            if l[point] == -1:
                l[point] = 255
        elif j == '>':
            point += 1
            if point >= 100:
                point = 0
        elif j == '<':
            point -= 1
            if point < 0:
                point = 99
    print(f'Case {i+1}:', end='')
    for j in l:
        ans = hex(j).replace('0x', '').upper()
        if len(ans) == 1:
            ans = '0' + ans
        print(' '+ans, end='')
    print()
