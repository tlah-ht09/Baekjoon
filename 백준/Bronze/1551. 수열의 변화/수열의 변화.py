s,n=map(int,input().split())

l=list(map(int,input().split(',')))
r=[]
for i in range(n):
    for j in range(len(l)-1):
        r.append(l[j+1]-l[j])

    l=r
    r=[]

for i in range(len(l)-1):
    print(l[i],end=",")
print(l[-1])