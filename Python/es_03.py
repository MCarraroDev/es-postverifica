# 3. Dati due numeri in input A e B,
# maggiori di 10 (con controllo),
# se A è maggiore di B scambiare le due variabili,
# sennò stampare la somma dei due.

while True:
    A = int(
        input("Inserisci un numero per A: ")
    )

    if A > 10: break

while True:
    B = int(
        input("Inserisci un numero per B: ")
    )

    if B > 10: break

if A > B:
    A, B = B, A
    print(
        f"A: {A}, B: {B}"
    )
else: 
    print(
        f"La somma è: {A + B}"
    )
