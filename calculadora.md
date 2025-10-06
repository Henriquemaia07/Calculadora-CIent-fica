
#include <stdio.h>
#include <math.h> // Biblioteca para funções matemáticas

int main() {
    char operador;
    float num1, num2, resultado;

    
    printf("Escolha a operacao (+, -, *, /, ^(potencia), r(raiz), l(log), s(sen), c(cos), t(tan), d(log10), e(exp), v(valorabs) f(fatorial): ");
    scanf(" %c", &operador); 

    switch (operador) {
        case '+':
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);
            printf("Digite o segundo numero: ");
            scanf("%f", &num2);
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;

        case '-':
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);
            printf("Digite o segundo numero: ");
            scanf("%f", &num2);
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;

        case '*':
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);
            printf("Digite o segundo numero: ");
            scanf("%f", &num2);
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;

        case '/':
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);
            printf("Digite o segundo numero: ");
            scanf("%f", &num2);
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro! Divisao por zero nao e permitida.\n");
                return 1;
            }
            break;

        case '^':
            printf("Digite o numero base: ");
            scanf("%f", &num1);
            printf("Digite o expoente: ");
            scanf("%f", &num2);
            resultado = pow(num1, num2);
            printf("Resultado: %.2f\n", resultado);
            break;

        case 'r':
            printf("Digite o numero para calcular a raiz quadrada: ");
            scanf("%f", &num1);
            if (num1 >= 0) {
                resultado = sqrt(num1);
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro! Nao e possivel calcular a raiz de um numero negativo.\n");
                return 1;
            }
            break;

        case 'l':
            printf("Digite o numero para calcular o logaritmo natural: ");
            scanf("%f", &num1);
            if (num1 > 0) {
                resultado = log(num1);
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro! O logaritmo so e definido para numeros positivos.\n");
                return 1;
            }
            break;

        case 's':
            printf("Digite o angulo em radianos para calcular o seno: ");
            scanf("%f", &num1);
            resultado = sin(num1);
            printf("Resultado: %.2f\n", resultado);
            break;
            
        case 'c':
            printf("Digite o angulo em radianos para calcular o cosseno: ");
            scanf("%f", &num1);
            resultado = cos(num1);
            printf("Resultado: %.2f\n", resultado);
            break;

        case 't':
            printf("Digite o angulo em radianos para calcular a tangente: ");
            scanf("%f", &num1);
            resultado = tan(num1);
            printf("Resultado: %.2f\n", resultado);
            break;

        case 'd':
            printf("Digite o numero para logaritmo decimal (base 10): ");
            scanf("%f", &num1);
            if (num1 > 0) {
                resultado = log10(num1);
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro! O logaritmo decimal so e definido para numeros positivos.\n");
                return 1;
            }
            break;
            
        case 'e':
            printf("Digite a base: ");
            scanf("%f", &num1);
            printf("Digite o expoente: ");
            scanf("%f", &num2);
            resultado = pow(num1, num2);
            printf("Resultado: %.2f\n", resultado);
            break;
            
        case 'v':
            printf("digite o numero para valor absoluto: ");
            scanf("%f", &num1);
            if (num1 < 0) {
                resultado = num1 * -1;
            } else {
                resultado = num1;
            }
            printf("O valor absoluto de %.2f e: %.2f\n", num1, resultado);
            break;
            
            case 'f':
        printf("Digite um numero inteiro nao-negativo para calcular o fatorial: ");
        scanf("%f", &num1);
        if (num1 >= 0) {
            long long resultado_fatorial = 1;
            for (int i = 1; i <= num1; i++) {
                resultado_fatorial *= i;
            }
            printf("Resultado: %lld\n", resultado_fatorial);
        } else {
            printf("Erro! O fatorial so e definido para numeros inteiros nao-negativos.\n");
            return 1;
        }
        break;

        default:
            printf("Operacao invalida.\n");
            return 1; 
    }

    
    return 0;
}
