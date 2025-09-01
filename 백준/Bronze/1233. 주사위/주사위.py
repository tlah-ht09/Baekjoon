l=list(map(int,input().split()))
d={

}
for i in range(1,l[0]+1):
    for j in range(1,l[1]+1):
        for k in range(1,l[2]+1):
            if not (i+j+k) in d:
                d[i+j+k]=1
            else:
                d[i+j+k]+=1

m=0


for i in d.values():
    if i>m:
        m=i

for i in d:
   
    if d[i]==m:
        print(i)
        break