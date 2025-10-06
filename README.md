O QUE O PROGRAMA FAZ:
Este projeto implementa uma calculadora científica em linguagem C, que oferece suporte a diversas operações matemáticas básicas e avançadas.

TECNOLOGIAS E RECURSOS UTILIZADOS:
•	Linguagem: C
•	Compilador: GCC (recomendado)
•	Bibliotecas usadas:
•	math.h – funções matemáticas (ex: pow, sqrt, log, etc.)
•	stdio.h – entrada e saída padrão
•	stdlib.h – utilitários gerais
•	Padrão da linguagem: C99

COMO INSTALAR, COMPILAR E EXECUTAR:

1. Pré-requisitos
•	GCC instalado (ou outro compilador C)
•	Terminal ou prompt de comando
•	Git (opcional, para clonar o repositório)

2. Clonar o repositório
git clone https://github.com/seu-usuario/calculadora-cientifica-c.git
 cd calculadora-cientifica-c

3. Compilar o código
gcc -o calculadora calculadora.c -lm

4. Executar o programa
./calculadora    # Linux / macOS
calculadora.exe  # Windows

 EXEMPLOS DE USO:
 
Escolha a operacao (+, -, *, /, ...): +
Digite o primeiro numero: 5
Digite o segundo numero: 3
Resultado: 8.00

OBSERVAÇÕES:
•	Algumas operações esperam valores positivos (como logaritmo e raiz). O programa retorna mensagens de erro apropriadas quando necessário.
•	Para funções trigonométricas (s, c, t), os ângulos devem ser informados em radianos.
•	A função de fatorial aceita apenas números inteiros não-negativos.
