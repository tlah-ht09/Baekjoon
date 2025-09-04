n,m,s=map(int,input().split())

l={

}
l2={
    
}

t={
    1 : [2,3,4],
    2 : [1,4],
    3 : [1,4],
    4 : [1,2,3]
}

for i in range(1,m+1):
    
    a,b=map(int,input().split())

    if a in l and a in l2:
        if not b in l[a]:
            l[a].append(b)
            l2[a].append(b)
    else:
        l[a]=[b]
        l2[a]=[b]
    

    if b in l and b in l2:
        if not a in l[b]:
            l[b].append(a)
            l2[b].append(a)
    else:
        l[b]=[a]
        l2[b]=[a]

for i in l:
    l[i].sort()
for i in l2:
    l2[i].sort()

#print(l)

stack=[]

if s in l and s in l2:
    stack=l[s]
    stack.sort(reverse=True)


print(s,end=" ")
done=[s]

while stack:

    m=stack.pop()
    if not m in done:

        done.append(m)
        print(m,end=" ")

    for i in sorted(l[m],reverse=True):
        
        if i not in done:
            
            stack.append(i)


print()

qu=[]

if s in l and s in l2:
    qu=l2[s]
    qu.sort()

print(s,end=" ")
done=[s]

while qu:
    m=qu.pop(0)

    if not m in done:
        done.append(m)
        print(m,end=" ")

    for i in sorted(l[m]):
        if i not in done:
            qu.append(i)
            