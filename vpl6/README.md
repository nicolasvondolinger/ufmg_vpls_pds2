Neste VPL vocês implementarão um Tipo Abstrato de Dados (TAD) usando classes.

Este TAD representa números complexos. 

A descrição dos dados e dos métodos associados a este TAD encontram-se no arquivo complexo.h

Qualquer código que opere sobre este TAD deve incluir este arquivo.


OBS: O arquivo main.cpp já está implementado. Você não pode em nenhuma hipótese alterar este arquivo.


Exercício 1:

Implemente, no arquivo complexo.cpp, o TAD Complexo utilizando coordenadas Euclideanas. 

Certifique-se que sua implementação passa em todos os testes.

OBS: Esta primeira parte do VPL vale *zero* pontos.


Exercício 2:
Uma vez que sua implementação utilizando coordenadas Euclideanas esteja correta, 
Você deve reescrever a classe Complexo utilizando coordenadas polares. Note que você não pode alterar a interface pública da classe complexo, mas pode alterar os dados privados, ou seja, em vez de "real_" e "imag_", os dados privados podem ser "modulo_" e "argumento_".

Detalhes sobre a representação polar de números complexos podem ser encontrados no link abaixo.

https://webpages.ciencias.ulisboa.pt/~ommartins/seminario/euler/numeroscomplexos.htm#Inverso%20de%20um%20N%C3%BAmero%20Complex


O objetivo principal deste VPL é que você observe que pode reimplementar completamente a classe Complexo sem precisar  alterar em absolutamente nada no arquivo main.cpp. 
OBS: Não esqueça de resubmeter e reavaliar esta nova implementação no moodle. Implementações deste VPL que utilizam apenas coordenadas Euclideanas vale *zero* pontos.
