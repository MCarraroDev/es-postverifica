from itertools import count

# 6. Inserisci 10 numeri,
# calcolare il modulo (matematico) di ogni numero,
# fare la media dei numeri inseriti.

somma = 0

for i in count (start=1, step=1):
    n = int(
        input(
            'Inserisci un numero: '
        )
    )

    print(
        f'Il modulo è {abs(n)}', end='\n\n'
    )

    somma += n

    if i == 10: break

print(
    f'La media è: {somma / i}'
)