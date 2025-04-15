-- 2. Dati in input due lati di un quadrilatero,
-- stampare in output se è un quadrato o un rettangolo,
-- calcolare l’area e il perimetro.

-- Leggi i lati del quadrilatero
io.write('Inserisci il primo lato (L1): ')
local l1 = io.read('n')

io.write('Inserisci il secondo lato (L2): ')
local l2 = io.read('n')

-- Determina se è un quadrato o un rettangolo
if l1 == l2 then
    print('È un quadrato.')
else
    print('È un rettangolo.')
end

-- Calcola area e perimetro
local area = l1 * l2
local perimetro = 2 * (l1 + l2)

-- Stampa i risultati
print('Area: ' .. area)
print('Perimetro: ' .. perimetro)
