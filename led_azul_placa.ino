const int LED_PLACA = 2; // Led que já vem na placa, ligado ao GPIO2

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PLACA, OUTPUT); // configurando led como saída
  Serial.begin(115200); // abre a comunicação com o computador. Serial é o canal de comunicação, a placa manda texto pro computador por ele, sendo possível verificar o comportamento dentro da ESP32. O ".begin" abre o canal. 115200 é a velocidade da conversa [baud] -> bits por segundo, os 2 lados precisam estar nessa velocidade, 115200 é um dos valores padrões.
  // Fica no setup porque só roda uma vez, depois disso todo Serial.println por exemplo passa a ser no Serial monitor
  Serial.println("ESP32 ativa e funcionando!");
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_PLACA, HIGH); // acende o LED -> HIGH
  Serial.println("Led aceso!");
  delay(2000); // delay em ms
  digitalWrite(LED_PLACA, LOW); // apaga o LED -> LOW
  Serial.println("Led apagado!");
  delay(2000); // delay em ms
}
