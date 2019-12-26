S = 0
e = 0
n = 1
while n < 1000:
    e += 1
    n = 8**e

print("E: ", e)
for i in range(e):
    acc = 8**i * (e - i + 1)
    S += acc
    print("acc: ", acc)
print(S)

def d(s):
    return sum([int(x) for x in s])

def brute(n):
    S = 0
    for i in range(n):
        if d(oct(i)[2:]) == d(bin(i)[2:]):
            print("adding", i)
            S += i
    return S

print(brute(1000))
