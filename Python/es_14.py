from itertools import count

# 14. Inserire numeri in input numeri finché la loro somma è minore di 100,
# trovare il massimo ed il minimo,
# contare quanti numeri pari sono stati inseriti.

somma = conto_pari = 0
for i in count (start=0, step=1):
    n = int(
        input(
            f'({somma}/100) Inserisci un numero: '
        )
    )
    
    if i == 0: min = max = n
    if n > max: max = n
    if n < min: min = n
    
    if n%2 == 0: conto_pari += 1
    
    somma += n
    if somma >= 100: break
    
print(
    f'Il numero massimo è: {max}',
    f'Il numero minimo è {min}',
    f'Sono stati inseriti {conto_pari} numeri pari', sep="\n"
)