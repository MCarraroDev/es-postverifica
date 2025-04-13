from itertools import count

# 11. Chiedere in input un numero n positivo (con controllo),
# stampare a video tutti i numeri da 0 a n.

while True:
    n = int(
        input('Inserisci un numero n > 0: ')
    )
    
    if n > 0: break
    else: print('Numero non valido')
    
for i in count (start=0, step=1):
    print(
        f'{i}'      # "0, 1, 2, 3, 4 ...\n"
    )
    
    if i >= n: break