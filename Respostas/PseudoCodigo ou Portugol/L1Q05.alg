inicio

  variavel real valorDoSalarioMinimo, quatidadeConsumidaDeKW, valorDoKW, valorDoConsumo
  variavel real valorDoDesconto, valorDoConsumoComDesconto
  
  escrever "Informe o valor do salário mínimo: "
  ler valorDoSalarioMinimo
  
  escrever "Informe a quantidade consumida de KW(s): "
  ler quatidadeConsumidaDeKW
  
  valorDoKW <- valorDoSalarioMinimo / 5.0
  valorDoConsumo <- valorDoKW * quatidadeConsumidaDeKW
  valorDoDesconto <- valorDoConsumo * 0.15
  valorDoConsumoComDesconto <- valorDoConsumo - valorDoDesconto
  
  escrever "\nValor do KW: ", valorDoKW
  escrever "\nValor a ser pago: ", valorDoConsumo 
  escrever "\nValor a ser pago com 15% de desconto: ", valorDoConsumoComDesconto 
  
fim
