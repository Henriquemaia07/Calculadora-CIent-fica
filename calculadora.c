#include <stdio.h> #include <math.h> // Biblioteca para funções matemáticas

#define M_PI 3,14159

int main() { char operador; float num1, num2, resultado,quociente;

printf("Escolha a operacao (+, -, *, /, ^(potencia), r(raiz), l(log), s(sen), c(cos), t(tan), d(log10), "
       "e(exp), v(valorabs), f(fatorial), n(logBaseN), m(max), i(min), a(arredondar),o(Modulo),h(hipotenusa),p(pi),u(euler),z(modulo fluente)): ");
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
        printf("Digite o numero para calcular e^x: ");
        scanf("%f", &num1);
        resultado = exp(num1);
        printf("Resultado: %.2f\n", resultado);
        break;
        
    case 'v':
        printf("Digite o numero para valor absoluto: ");
        scanf("%f", &num1);
        resultado = fabs(num1);
        printf("O valor absoluto de %.2f e: %.2f\n", num1, resultado);
        break;
        
    case 'f':
        printf("Digite um numero inteiro nao-negativo para calcular o fatorial: ");
        scanf("%f", &num1);
        if (num1 >= 0) {
            long long resultado_fatorial = 1;
            for (int i = 1; i <= (int)num1; i++) {
                resultado_fatorial *= i;
            }
            printf("Resultado: %lld\n", resultado_fatorial);
        } else {
            printf("Erro! O fatorial so e definido para numeros inteiros nao-negativos.\n");
            return 1;
        }
        break;

    case 'n':
        printf("Digite o numero: ");
        scanf("%f", &num1);
        printf("Digite a base do logaritmo: ");
        scanf("%f", &num2);
        if (num1 > 0 && num2 > 0 && num2 != 1) {
            resultado = log(num1) / log(num2);
            printf("Resultado: %.2f\n", resultado);
        } else {
            printf("Erro! Base invalida ou numero invalido.\n");
            return 1;
        }
        break;

    case 'a':
        printf("Digite o numero para arredondar: ");
        scanf("%f", &num1);
        resultado = round(num1);
        printf("Resultado arredondado: %.0f\n", resultado);
        break;

    case 'm':
        printf("Digite dois numeros: ");
        scanf("%f %f", &num1, &num2);
        resultado = fmax(num1, num2);
        printf("O maior valor e: %.2f\n", resultado);
        break;

    case 'i':
        printf("Digite dois numeros: ");
        scanf("%f %f", &num1, &num2);
        resultado = fmin(num1, num2);
        printf("O menor valor e: %.2f\n", resultado);
        break;

    default:
        printf("Operacao invalida.\n");
        return 1;
        
    case 'o': 
        printf("Digite o dividendo: ");
        scanf("%f", &num1);
        printf("Digite o divisor: ");
        scanf("%f", &num2);
        if (num2 != 0) {
            resultado = fmod(num1, num2); 
            printf("Resultado (Resto): %.2f\n", resultado);
        } else {
            printf("Erro! Divisao por zero nao e permitida.\n");
            return 1;
            
    case 'h':
        printf("Digite o valor do primeiro cateto: ");
        scanf("%f", &num1);
        printf("Digite o valor do segundo cateto: ");
        scanf("%f", &num2);
        resultado = sqrt(pow(num1, 2) + pow(num2, 2));
        printf("A hipotenusa e: %.2f\n", resultado);
        break;
        }
        
        case 'p':
        printf("Digite o raio do circulo: ");
        scanf("%f", &num1);
        if (num1 > 0) {
        resultado = M_PI * num1 * num1;
        printf("Area do circulo: %.2f\n", resultado);}    
        else {
        printf("Erro! Raio deve ser positivo.\n");
        return 1;
        
        case 'z':
    printf("Digite o dividendo (a): ");
            scanf("%f", &num1);
        printf("Digite o divisor (b): ");
        scanf("%f", &num2);

        if (num2 != 0) {
        resultado = fmod(num1, num2); 
        quociente = num1 / num2;
        printf("%.2f = %.2f * %.2f + %.2f\n", num1, num2, quociente, resultado);
        printf("Resto: %.2f\n", resultado); }   
        else {
        printf("Erro! Divisor nao pode ser zero.\n");
        return 1;  
        }
        break; 
        
        case 'u':
        printf("Digite o valor de x: ");
        scanf("%f", &num1);
        resultado = exp(num1);
        printf("e^%.2f = %.2f\n", num1, resultado);
    }
} return 0;}
