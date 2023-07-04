while True:
    s = input()
    if s == '0':
        break
    l = set(input().split())
    flag = True
    for _ in range(int(s.split()[1])):
        a, b, *c = input().split()
        if len(set(c) & l) < int(b):
            flag = False
    if flag:
        print('yes')
    else:
        print('no')
