###Busca binaria

Geralmente o primeiro algoritmo que aprendemos!


seu conceito se baseia em achar tal item numa pratileira com menos passos possivel.
se eu te pedir pra procurar o 50 numa lista que vai de 1 a 100?
provavelmente voce começaria procurando no meu certo? bem mas digamos que esta lista não esta ordenada, dai temos um problema mas depois falamos disso!
Vamos voltar na lista de 1 a 100 ordenada. pra achar o 50 vamos começar procurando no meio
meio é 100 / 2 dai é 50 veja só achamos o 50!. ok agora vamos dizer que não é o 50 o item a procura, agora é um nemero menor que 50, apartir dessa informação podemos iliminar tudo que é maior que 50 e podemos voltar a procurar no meio! veja so o meio de 50 é 25! será que é 25 o item a procura? não, não é o item. é maior que 25. ou seja podemos iliminar tudo que é menor que 25. agora vamos procurar no meio de novo. como vamos fazer isso?
vamos somar 25 e 50 depois dividir por 2 dai da 37.5 mas vamos arredondar pra 37.
e vamos chegar no concenço que 37 é o numero que queremos. veja so chegamos no nosso "objetivo" so com 3 "passos" se eu tem pedice pra ir perguntando pra mim numero por numero ate chegar no 37 que é o item que procuramos seriam 37 perguntas ou seja 37 passos veja o poder da Busca binaria!

isso é simples de implementar vejá

podemos fazer um loop pra "cortando" na metade tudo que é menor ou maior que nosso item.
podemos usar while ou for, mas vou usar while. (sintasse a vontade em implementar com for)
primeiramente vamos definir algumas variaveis:

lista = vetor de inteiros
começo = 0
fim = lista.size() - 1; isso aq significa fim, a ultima casa em uma lista

com isso podemos começar o loop

  //enquanto começo for menor que fim
while (começo < fim) {
  //isso aqui é muito legal é uma forma de medição muito interessante
  meio = começo + (começo - fim) / 2;
  chute = lista[meio];
  if (chute == meio) {
    return meio;
  }else if (chute < item) {
    fim = meio - 1;
} else {
    começo = meio - 1;
  }

meu Dues!!  eu num entendi nada! por que meio -1 ?? 
-porque se nos sabemos que num é 50 a gente olha pra esquerda dele e joga fora o 50. como fazemos isso? com  -1 que da  49!
a mesma coisa se for maior.
meu Deus pq precisamos da que formula pra fazer meio?? 
-porque sim! se quer saber tanto corre atras (sintasse a vontede em procurar o motivo) isso é um desafio!

bem na pasta treino tem uns arquivos bem melhores, da uma olhada lá!

