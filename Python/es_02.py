# 2. Dati in input due lati di un quadrilatero,
# stampare in output se è un quadrato o un rettangolo,
# calcolare l’area e il perimetro.

l1 = int(
    input('Inserisci il primo lato: ')
)

l2 = int(
    input('Inserisci il secondo lato: ')
)

print(
    'È un quadrato.' if l1 == l2 else 'È un rettangolo.'
)

area = l1 * l2
perimetro = 2 * (l1 + l2)

print(f'L\'area è {area}.',
      f'Il perimetro è {perimetro}.', sep='\n'
)