# 16. Inserisci da tastiera un voto (con controllo che sia compreso tra 4 e
#     10). Alla fine, visualizza una lettera corrispondente al numero inserito come
#     segue: 10=”S” 9=”A“ 8=”B” 7=”C” 6=”D“ 5=”E” 4=”F”.

while True:
    voto = int(
        input('Inserisci un voto (compreso tra 4 e 10): ')
    )
    
    if 4 <= voto <= 10: break
    print('Il voto deve essere compreso tra 4 e 10. Riprova.')

def voto_lettera(voto):
    match voto:
        case 10:
            return 'S'
        case 9:
            return 'A'
        case 8:
            return 'B'
        case 7:
            return 'C'
        case 6:
            return 'D'
        case 5:
            return 'E'
        case 4:
            return 'F'

lettera = voto_lettera(voto)
print(f'Il voto {voto} corrisponde alla lettera {lettera}')
