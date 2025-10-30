#include <stdio.h>
#include <time.h>

int main () {
    //cabecalho
    printf("**********************************\n");
    printf("*bem vindo ao jogo de adivinhacao*\n");
    printf("**********************************\n");
    
    //variaveis
    int numerogrande = time(0);
    srand(numerogrande);
    int numerosecreto = numerogrande % 100;
    int chute;
    int numero_de_tentativas;
    int ganhou = 0;
    int nivel;
    int i;
    int check;
    
    
    //validation check for level select between the options
    while (check == 0){   
        printf("escolha o nivel de dificulade \n");
        printf("1-easy , 2-medium,3-hard \n");
        printf("escolha: ");
        scanf("%d",&nivel);
        printf("\n");
        if(nivel >=1,nivel <=3){
            switch (nivel){
                case 1:
                    numero_de_tentativas = 20;
                    check = 1;
                    printf(" nivel easy selecionado \n ");
                    break;
            
                case 2:
                    numero_de_tentativas = 12;
                    check = 1;
                    printf(" nivel medio selecionado \n ");
                    break;
            
                default:
                    numero_de_tentativas = 6;
                    check = 1;
                    printf(" nivel hard selecionado \n ");
                    break;
            }
        }
        else {
            printf("escolha entre as opcoes 1 e 3 seu merda! \n\n\n");
            continue; 
        }  
    }

    int tentativa = numero_de_tentativas;
    for (i = 0; i = numero_de_tentativas; i++){
       
      
        printf("%d tentativa(s) restante(s) \n", tentativa);        
        printf("chute um numero de 0 ate 100 \n");
        printf("escolha: ");
        scanf("%d", &chute);
        printf("\n");
        printf("seu chute foi %d \n\n",chute);
        
  
        if (chute < 0){
            printf("numeros negativos nao sao permitidos\n\n");
            
            
            continue;
        }
        else if(chute > 100){
            printf("numeros maiores que 100 nao sao permitidos \n\n");
            
            continue;
        }
        
        int acertou = (chute == numerosecreto);
        
        int maior = (chute >  numerosecreto);
               
        if(tentativa == 1){
            printf("************************* \n");
            printf("**** VOCE PERDEU !!! **** \n");
            printf("************************* \n");
            printf("\n");
            break;
        }

        else if (acertou){ 
            printf("************************* \n");
            printf("**** VOCE ACERTOU !!! *** \n");       
            printf("************************* \n");
            printf("\n");
            break;
        }
        
        else if(maior){
            printf("o numero secreto eh menor que %d \n",chute);
            printf("\n");
            tentativa = tentativa - 1;
            
        }
        else{
            printf("o numero secreto eh maior que %d \n",chute);
            printf("\n");
            tentativa = tentativa - 1;
        }
    }   
        
    
        
    
return 0;
}