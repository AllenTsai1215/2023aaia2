# week16-1 ���U�`��1 collections.Counter
# import collections �ק�e
from collections import Counter #�ק��
words=["bella","lable","roller"]
for i in range(3):
  # counter=collections.Counter(words[i]) �ק�e
  counter=Counter(words[i]) #�ק��
  print(words[i],counter)
#ans =collections.Counter(words[0])&collections.Counter(words[1])&collections.Counter(words[2]) �ק�e
ans=Counter(words[0])&Counter(words[1])&Counter(words[2]) #�ק��
print(ans)
