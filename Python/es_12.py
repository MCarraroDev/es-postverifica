from itertools import count

# 12. Chiedere in input un numero n positivo,
# inserire n numeri in input e calcolarne la media.

while True:
    n_iter = int(
        input('Inserisci un numero n > 0: ')
    )
    
    if n_iter > 0: break
    else: print('Numero non valido')

somma = 0 
for i in count (start=1, step=1):
    n = int(
        input(
            f'({i} di {n_iter}): Inserisci un numero: '
        )
    )
    
    somma += n
    
    
    if i >= n_iter: break

print(
    f'{somma / n_iter}'
)
