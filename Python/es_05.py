from itertools import count

# 5. Inserisci 10 numeri,
# contare quanti numeri compresi tra 10 e 20 sono stati inseriti,
# contare anche i multipli di 3.

num_10_20 = mult_3 = 0

for i in count (start=1, step=1):
    n = int(
        input(
            'Inserisci un numero: '
        )
    )

    if 10 <= n <= 20:
        num_10_20 += 1
    
    if n%3 == 0:
        mult_3 += 1
    

    if i == 10: break

print(
    f'I numeri tra 10 e 20 sono {num_10_20}',
    f'I multipli di 3 sono {mult_3}', sep='\n'
)