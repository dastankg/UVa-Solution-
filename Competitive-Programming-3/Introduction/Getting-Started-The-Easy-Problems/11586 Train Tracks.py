for _ in range(int(input())):
    d = {}
    l = input().split()
    for i in l:
        d[i[0]] = d.get(i[0], 0) + 1
        d[i[1]] = d.get(i[1], 0) + 1
    if d.get('M', 0) == d.get('F', 0) and d.get('M', 0) > 1:
        print('LOOP')
    else:
        print('NO LOOP')
