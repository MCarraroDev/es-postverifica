from itertools import count

# 10. Inserire 10 numeri,
# compresi tra 10 e 20 (con controllo finchè non è compreso),
# calcolare il prodotto dei numeri inseriti.

def chiedi_n() -> int:
    while True:
        n = int(
            input('Inserisci un numero tra 10 e 20: ')
        )
        
        if 10 <= n <= 20: break
        else: print('Numero non valido')
        
    return n

prod = 1
for i in count (start=1, step=1):
    n = chiedi_n()
    prod *= n
    
    if i >= 10: break

print(
    f'Il prodotto è: {prod}'
)