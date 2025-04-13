from random import randint

# Generare 5 numeri randomici [30, 100], trovare il maggiore e il minore

for i in range (5):
    n = randint(30, 100)     # randint include gli estremi, randrange() esclude estremi
    print(n)
    
    if i == 0: max = min = n
    
    if n > max: max = n
    if n < min: min = n
    
print(
    f'Il maggiore è {max}',
    f'Il minore è: {min}', sep="\n"
)