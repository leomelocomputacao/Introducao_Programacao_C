inicio

  variavel real precoDeFabrica, percentualDoLucroDoDistribuidor, percentualDosImpostos
  variavel real valorDoLucroDoDistribuidor, valorDosImpostos, precoFinalDoVeiculo
  
  escrever "Informe o pre�o de f�brica: "
  ler precoDeFabrica

  escrever "Informe o percentual do lucro do distribuidor: "
  ler percentualDoLucroDoDistribuidor
    
  escrever "Informe o percentual dos impostos: "
  ler percentualDosImpostos
  
  valorDoLucroDoDistribuidor <- precoDeFabrica * (percentualDoLucroDoDistribuidor / 100.0)
  valorDosImpostos <- precoDeFabrica * (percentualDosImpostos / 100.0)
  precoFinalDoVeiculo <- precoDeFabrica + valorDoLucroDoDistribuidor + valorDosImpostos 
  
  escrever "\nValor do lucro do distribuidor: ", valorDoLucroDoDistribuidor
  escrever "\nValor dos Impostos: ", valorDosImpostos
  escrever "\nPre�o final do ve�culo: ", precoFinalDoVeiculo
  
fim
