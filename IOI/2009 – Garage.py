n, m = map(int, input().split())
garage = [0] * n
for i in range(n):
    garage[i] = int(input())
car = [0] * m
for i in range(m):
    car[i] = int(input())
ans = 0
stack = []
freeGarage = set([i for i in range(n)])
busyGarage = {}
for _ in range(m * 2):
    x = int(input())
    if x >= 0:
        if len(freeGarage) > 0:
            ans += car[x-1] * garage[min(freeGarage)]
            busyGarage[x] = min(freeGarage)
            freeGarage.remove(min(freeGarage))
        else:
            stack.append(x)
    else:
        x = abs(x)
        if x in busyGarage:
            if len(stack) == 0:
                freeGarage.add(busyGarage[x])
            else:
                busyGarage[stack[0]] = busyGarage[x]
                ans += car[stack[0]-1] * garage[busyGarage[x]]
                del stack[0]
            del busyGarage[x]

print(ans)
