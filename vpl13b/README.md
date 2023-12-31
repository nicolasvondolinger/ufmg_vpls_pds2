Este é uma continuação do VPL anterior. Sendo assim, primeiramente você deve implementar o que é pedido naquele VPL antes de prosseguir. Em seguida, copie-e-cole sua implementação de jogo_davida.cpp neste VPL.

Como comentado em sala de aula, mesmo um software correto pode apresentar um comportamento indeterminado/inesperado diante de condições adversas. Um software robusto precisa antever estes episódios e tratá-los de alguma forma, mesmo que seja apenas abortando o programa e explicando claramente ao usuário o que foi que aconteceu.

Para ilustrar como lidar com estes tipos de exceções, nós vamos alterar o código do VPL anterior de forma a lançar e tratar uma determinada exceção. A função main já está implementada. Ela capta (catch) corretamente exceções do tipo ExcecaoCelulaInvalida, e neste caso pergunta se o usuário quer continuar sem esta célula, ou abortar a execução.

O que você tem que fazer neste VPL é garantir que as funções que recebem as coordenadas de uma célula como parâmetro lancem (throw) uma exceção deste tipo toda vez que uma célula inválida seja passada como parâmetro.
