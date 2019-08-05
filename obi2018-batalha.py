a1 = int(input())
d1 = int(input())
a2 = int(input())
d2 = int(input())

if(d1==a2 and a1!=d2):#jogador 1 não desmaia, jogador desmaia
    print(1)
elif(a2!=d1 and d2==a1):#jogador 1 desmaia, jogador 2 não desmaia
    print(2)
else:
    print(-1)
