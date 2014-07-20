inicio

  variavel real pesoDoSacoEmKG, quantidadeDeRacaoDiariaPorGatoEmG, quantidadeDeGatos
  variavel real pesoDoSacoEmG, quantidadeDeRacaoDiariaEmG, quantidadeDeRacaoRestanteEmG
  
  escrever "Informe o peso do saco da ração (em quilogramas): "
  ler pesoDoSacoEmKG
  
  escrever "Informe a quantidade de ração diária por gato (em gramas): "
  ler quantidadeDeRacaoDiariaPorGatoEmG
  
  escrever "Informe a quantidade de gatos: "
  ler quantidadeDeGatos
  
  pesoDoSacoEmG <- pesoDoSacoEmKG * 1000.0
  quantidadeDeRacaoDiariaEmG <- quantidadeDeRacaoDiariaPorGatoEmG * quantidadeDeGatos
  quantidadeDeRacaoRestanteEmG <- pesoDoSacoEmG - (quantidadeDeRacaoDiariaEmG * 5.0)
  
  escrever "Quantidade restante de ração (em quilogramas): ", quantidadeDeRacaoRestanteEmG / 1000.0
  
fim
