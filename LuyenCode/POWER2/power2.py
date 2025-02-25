a = int(input())
b = int(input())

res = 1
while (b):
    if (b & 1):
        res *= a;
    a *= a;
    b >>= 1;
print(res)
