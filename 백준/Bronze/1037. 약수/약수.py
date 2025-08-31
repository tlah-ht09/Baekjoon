n=int(input())

l=list(map(int,input().split()))

a=max(l)
b=min(l)

a*=b

while sum(l)/len(l) != a:
    for i in range(len(l)):
        if a % l[i] != 0:
            a*=b
        else:
            l[i]*=a/l[i]

print(int(l[0]))