import json

with open("dados.json", encoding='utf-8') as arqDados:
    dados = json.load(arqDados)

total = 0
maiorDia = 0
menorDia = 0
numDias = 0
count = 0

for i in range(len(dados)):
    if dados[i]['valor'] > 0:
        total = total + dados[i]['valor']
        count += 1
        if i > 0 and dados[maiorDia]['valor'] < dados[i]['valor']:
            maiorDia = i
        if i > 0 and dados[menorDia]['valor'] > dados[i]['valor']:
            menorDia = i

media = total/count
for i in dados:
    if i['valor'] > media:
        numDias += 1

print('O maior valor foi o do dia {} = {:.2f}'.format(dados[maiorDia]['dia'], dados[maiorDia]['valor']))
print('O menor valor foi o do dia {} = {:.2f}'.format(dados[menorDia]['dia'], dados[menorDia]['valor']))
print('O numero de dias cujo valor foi maior que a media e: {}'.format(numDias))
