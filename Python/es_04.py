from itertools import count

# 4. Inserire 10 numeri,
# contare quanti numeri pari e dispari sono stati inseriti.

n_pari = n_disp = 0

for i in count (start=1, step=1):
    n = int(
        input(
            f"{i}. Inserisci un numero: "
        )
    )
    
    if n%2==0:
        n_pari += 1
    else:
        n_disp += 1

    if i == 10: break

print(
    f"I numeri pari sono: {n_pari} e i numeri dispari sono: {n_disp}"
)