from itertools import count

# 9. Inserire da tastiera un numero N, calcolare la sua tabellina dall’1 al 10.

while True:
    n = int(
        input('Inserire un numero N > 0: ')
    )
    
    if n > 0: break

for i in count (start=1, step=1):
    print(
        f'{n * i}', end=', ' if i < 10 else '\n'
    )
    
    if i >= 10: break