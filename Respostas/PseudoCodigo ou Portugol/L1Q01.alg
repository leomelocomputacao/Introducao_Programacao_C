inicio

  variavel real MedidaEmPes, MedidaEmPolegadas, MedidaEmJardas, MedidaEmMilhas

  escrever "Informe a medida em pés: "
  
  ler MedidaEmPes
  
  MedidaEmPolegadas <- MedidaEmPes * 12.0
  MedidaEmJardas <- MedidaEmPes / 3.0
  MedidaEmMilhas <- MedidaEmJardas / 1760.0
  
  escrever "\n\nValor convertido em polegadas: ", MedidaEmPolegadas
  escrever "\nValor convertido em jardas: " , MedidaEmJardas
  escrever "\nValor convertido em milhas: " , MedidaEmMilhas

fim
