l=[]

while 1:
  s=input()
  if s=="0":
    break
  
  
  while len(s)!=1 and s!=0:
    l=list(s)
    for i in range(len(l)):
      l[i]=int(l[i])
    s=str(sum(l))

  print(s)


