# 7. Inserire da tastiera finché non inserisco -1,
# calcolare la media dei numeri inseriti e
# la percentuale dei numeri pari.

i = somma = n_pari = 0

while True:
    n = int(
        input('Inserisci un numero: ')
    )

    if n == -1: break

    somma += n
    i += 1

    if n % 2 == 0:
        n_pari += 1

if i > 0:
    media = somma / i
    perc_pari = (n_pari / i) * 100

    print(
        f'Media dei numeri inseriti: {media}',
        f'Percentuale dei numeri pari: {perc_pari}%', sep='\n'
    )
else:
    print('Nessun numero inserito.')
