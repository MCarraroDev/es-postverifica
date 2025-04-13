# 15. Inserire da tastiera 10 numeri compresi tra 2 e 10 (con controllo finchè
#     non è compreso),
#     fare la media dei 10 numeri inseriti.

somma = 0

for i in range (10):
    while True:
        n = int(
            input('Inserisci un numero tra 2 e 10: ')
        )
        
        if 2 <= n <= 10: break
    
    somma += n
    

media = somma / 10

print(f"La media dei numeri inseriti è: {media}")
