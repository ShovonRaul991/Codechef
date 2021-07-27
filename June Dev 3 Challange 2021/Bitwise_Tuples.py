t = int(input())
mod = 1000000007
while(t):
    N,M=[int(x) for x in input().split()]
    x= (2 ** N-1)%mod
    print(x**M%(mod))
    print('\n')
    t = t-1