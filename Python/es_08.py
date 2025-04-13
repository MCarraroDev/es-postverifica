from itertools import count

# 8. Chiedere all’utente un numero N, calcolare la somma dei numeri precedenti.
# (Es. N=5, 1+2+3+4+5), mostra a video il risultato.

while True:
    n = int(
        input('Inserisci un numero N: ')
    )

    if n > 0: break


somma = 0

for i in count (start=n, step=-1):
    somma += i

    if i <= 1: break

print(
    f'La somma è {somma}'
)