#include <stdio.h>
#define SIZE 200
char nome[SIZE][50];
char end[SIZE][50];
int datanasc[SIZE];
char sexo[SIZE][1];
int visita[SIZE][10];
char problema[SIZE][50];
int numero [SIZE];
int op;

void inicializa();
void cadastro();


int main(void){
	void inicializa();
    int opc=0;
    int cod_prodproc=0;
        while(opc!=9){
             
             printf("1. Cadastro do paciente \n");
             printf("Escolha sua opcao: ");
             scanf("%d", &opc);
            switch(opc){
              case 1:
                while(opc!=9){  // opcoes no menu para selecao
                        printf("Seja bem vindo ! \n");
                        printf("1. Cadastrar paciente \n");
                        printf("2. Visita do paciente \n");
                      
                        printf("Escolha sua opcao: ");
                        scanf("%d", &opc);
                        switch(opc){
                        	
                        case 1:
                            printf("\n Digite o nome do paciente:");
							scanf("%s" , &nome[linha]);
							printf("\n Digite o endereco:");
							scanf("%s" , &end[linha]);
							printf("\n Numero casa:");
							scanf("%d" , &numero[linha]);
							printf("\n Data de nascimento:");
							scanf("%d" , &datanasc[linha]);
							printf("\n Digite o sexo para (F)de feminino ou (M) de masculino:");
							scanf("%s" , &sexo[linha]);
							printf("\n Dia de visita do paciente:");
							scanf("%d" , &visita[linha]);
							printf("\n Laudo de problema:");
							scanf("%s" , &problema[linha]);
                            break;
                        case 2:
                            printf("Dias de visita ");
                            main();
                            break;
                        default:
                            printf("invalida \n");
                         }
                    }
              break;
              
                          // FALTA DADOS       // LISTAR COM VALOR VALOR DOS PRODUTOS
                          //STATICA ALOCADA E SE PRECISAR nao deixa outros 
                          //MEMORIA DINAMIDA voce  RESERVA  e deixa outros programar usarem 
              
            }
        }
    return 0;
}
