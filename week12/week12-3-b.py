#week12-3.py ��ƿz�l�k
table=[True]*240000
ans=0
for i in range(2,240000):
  if table[i]==True:
    ans+=1
    for k in range(i*i,240000,i): table[k]=False
print('���',ans,'�ӽ��')