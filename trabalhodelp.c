#include <stdio.h>


float porcentagem (float, float);
int main(void){

    int matrix[5][20][2],clientes,op, contEncontrou, contNaoEncontrou, contSatisfeito, contInsatisfeito, dias, cliente[5] = {0, 0, 0, 0, 0}, relatorio, dia, totalDeRespostas[5]= {0,0,0,0,0}, h, pergunta, maisRelatorio, relatorioCliente, totalCliente, contDia5, porcentagemDia5;
   float porcentagemSIM, porcentagemNAO;

    contEncontrou = 0;
    contNaoEncontrou = 0;
    contInsatisfeito = 0;
    contSatisfeito = 0;
    contDia5 = 0;
    for(dias = 0; dias <= 4;dias++){
            printf("Dia: %d\n", dias + 1);
        for(clientes = 0; clientes<= 19; clientes++){
            printf("Encontrou o que procurava? Digite 1 para SIM  e 2 para NAO\n");
            scanf("%d", &matrix[dias][clientes][0]);
                if(matrix[dias][clientes][0] == 1){
                    contEncontrou++;
                }else{
                    contNaoEncontrou++;
                }
            printf("Esta satisfeito? Digite 1 para SIM e 2 para NAO\n");
            scanf("%d", &matrix[dias][clientes][1]);
                if(matrix[dias][clientes][1] == 1){
                    contSatisfeito++;
                }else{
                    contInsatisfeito++;
                }
                
                if(matrix[4][clientes][1] == 1){
                    contDia5++;
                }
            for(h = 0; h <= 4; h++){
                totalDeRespostas[h] = totalDeRespostas[h]+2;
            }
            printf("Deseja continuar? Digite 1 para SIM e 2 para NAO\n");
            scanf("%d", &op);
            cliente[dias]++;
            if(op == 2){
                break;
            }

        }
    }
      printf("Informe o dia\n"); 
      scanf("%d", &dia);
      for(h = 0; h <=4; h++){ 
             printf("TOTAL DO DIA %d: %d\n", dia, totalDeRespostas[dia]);
             break;

      }
         
        do{
        printf("Deseja imprimir mais um relatorio? Digite 2 para RELATORIO POR PERGUNTA, 3 para RELATORIO POR CLIENTE e 4 para RELATORIO GERAL, digite 1 caso queira parar\n"); 
        scanf("%d", &relatorio); 
        
        if(relatorio == 2){
            printf("Informe a pergunta que deseja saber as porcentagens, digite 0 para - ENCONTROU O QUE PROCURAVA e 1 para - SATISFEITO OU NAO\n"); 
            scanf("%d", &pergunta);
            
            if(pergunta == 0){
                for(dias = 0; dias <= 4; dias++){
                    porcentagemSIM = porcentagem(contEncontrou, cliente[dias]);
                    porcentagemNAO = porcentagem(contNaoEncontrou,cliente[dias]);
                 }
                printf("PORCENTAGEM NAO:  %2.f\n", porcentagemNAO);
                printf("PORCENTAGEM SIM:  %2.f\n",  porcentagemSIM);
            }else{
                for(dias = 0; dias <= 4; dias++){
                    porcentagemSIM = porcentagem(contSatisfeito,cliente[dias]); 
                    porcentagemNAO = porcentagem(contInsatisfeito,cliente[dias]);
                }
                
                printf("PORCENTAGEM SIM: %2.f\n", porcentagemSIM); 
                printf("PORCENTAGEM NAO: %2.f\n", porcentagemNAO);
            }
        }else{
            if(relatorio == 3){
                printf("Informe o cliente\n"); 
                scanf("%d", &relatorioCliente); 
                printf("Informe o dia\n"); 
                scanf("%d", &dia);
                for(dias = 0; dias <= 4; dias++){
                    for(clientes = 0; clientes <= 19; clientes++){
                        printf("RESPOSTAS DO CLIENTE: %d\n %d\n", matrix[dia][relatorioCliente][0], matrix[dia][relatorioCliente][1]);
                        break;
                    }
                }
            }else{
                if(relatorio == 4){
                for(dias = 0; dias <= 4; dias++){
                    totalCliente = cliente[0] + cliente[1] + cliente[2] + cliente[3]+cliente[4];
                    porcentagemDia5 = porcentagem(contDia5,cliente[dias]);
                    
                }
                printf("TOTAL DE CLIENTES: %d\n",totalCliente );
                printf("QUANTOS CLIENTES DISSERAM NÃO PARA AS DUAS PERGUNTAS: %d\n", contInsatisfeito + contNaoEncontrou );
                ("QUANTOS CLIENTES ESTÃO SATISFEITOS: %d\n", contSatisfeito);
                ("CLIENTES QUE ENCONTRAVAM O QUE PRECISAVAM NO DIA 5: %d\n", porcentagemDia5);
                }else{
                    break;
                }
            }
            
            }
        
            
            
            printf("Deseja imprimir mais relatorios? DIGITE 1 para PARAR e 2 para continuar:\n"); 
            scanf("%d", &maisRelatorio);
       } while(maisRelatorio != 1);

}
float porcentagem(float a, float c){
    return (a*c/100);
}
