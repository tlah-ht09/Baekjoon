n=int(input())
l=list(map(int,input().split()))
r=list(map(int,input().split()))
sum=0
while len(l)>0:
  sum+=min(l)*max(r)
  l.pop(l.index(min(l)))
  r.pop(r.index(max(r)))


print(sum)