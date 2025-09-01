n=int(input())
l=[]
done=[]
for i in range(n):

    x=input()
    
    if not x in done:

        l.append([len(x),x])
    done.append(x)
l.sort()

for i in l:
    print(i[1])