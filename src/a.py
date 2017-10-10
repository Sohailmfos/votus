t=int(raw_input())
while(t):
    n,m=map(int,raw_input().split())
    l=[]
    for i in range(n):
       c=raw_input()
       l.append(list(c))
    s=str(raw_input())
    flag=0
    for i in range(n):
      dicts={}
      for k in range(m):
          if l[i][k] in dicts:
             dicts[l[i][k]] +=1
          else:
             dicts[l[i][k]]=i
      for p in range(i,len(s),n):
          if (dicts[s[p]]>=i):
              dicts[s[p]] -=1
          else:
              flag=1
              break
      if (flag==1):
          break

    if (flag==0):
       print "YES"
    else:
       print "NO"
    t-=1
             
             
