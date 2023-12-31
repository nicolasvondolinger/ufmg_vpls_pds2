Neste VPL, vocês vão continuar trabalhando com a classe Vetor, no qual trabalhamos em um VPL anterior. Sendo assim, primeiramente vocês devem implementar o que é pedido naquele VPL antes de prosseguir.

Neste VPL, nós vamos alterar a classe Vetor de forma a utilizar vários tipos de polimorfismo. Primeiramente, utilizaremos Polimorfismo Aparente para podermos acessar diretamente os elementos do vetor atráves do operador [ ]. Além disso, utilizaremos Polimorfismo Paramétrico para podermos criar vetores de qualquer tipo (não apenas string, como no caso do VPL09).

Além disso, continuaremos praticando alocação dinâmica. Para isso, nós implementaremos um novo método a classe Vetor, chamado 

void Vetor::Redimensionar(int inicio2, int fim2);

Este método redimensiona o vetor de forma que os índices passam a variar de inicio2 até fim2. O valor associado aos índices que estão na interseção de [inicio_, fim_] e [inicio2, fim2], não se alteram. Já o valor dos demais índices é definido pelo contrutor da classe Tipo (que é passada como parâmetro para o template).

Por exemplo: Seja o "vetor<string> v(-2, 2)", de forma que 
 v[-2] = "-22"
 v[-1] = "-11"
 v[0] = "0"
 v[1] = "11"
 v[2] = "22"

Após uma chamda de v.Redimensionar(-4,4) temos que  
v[-4] = ""
v[-3] = ""
v[-2] = "-22"
 v[-1] = "-11"
 v[0] = "0"
 v[1] = "11"
 v[2] = "22"
 v[3] = ""
 v[4] = ""

Implemente as alterações descritas acima no arquivo vetor.h. O arquivo main.cpp já está implementado de forma a testar este VPL. Ele não deve ser alterado.
