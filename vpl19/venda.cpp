#include "venda.hpp"

#include <iomanip>

Venda::~Venda() {
  // TODO: Implemente este metodo
  /**
   * Aqui voce deve deletar os ponteiros contidos na lista m_pedidos
   */
  for (Pedido* pedido : m_pedidos) {
    delete pedido;  // Deleta o objeto apontado pelo ponteiro
  }
  m_pedidos.clear();
}

void Venda::adicionaPedido(Pedido* p) {
  // TODO: Implemente este metodo
  m_pedidos.push_back(p);
}

void Venda::imprimeRelatorio() const {
  // TODO: Implemente este metodo
  /**
   * Aqui voce tem que percorrer a lista de todos os pedidos e imprimir o resumo
   * de cada um. Por ultimo, devera ser exibido o total de venda e a quantidade
   * de pedidos processados.
   */
  int quant = 0;
  float sales = 0.00;
  for (Pedido* it : m_pedidos){
    quant++;
    sales += it->calculaTotal(); 
    std::cout << "Pedido " << quant << std::endl;
    std::cout << it->resumo() << std::endl;
  }
  std::cout << "Relatorio de Vendas" << std::endl;
  std::cout << "Total de vendas: R$ "<< std::fixed << std::setprecision(2) << sales << std::endl; 
  std::cout << "Total de pedidos: "<< quant << std::endl; 
  
}