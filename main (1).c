#include <string.h>
#include <stdio.h>

int main(){
    
double nota,nota1,nota2,nota3;
  char resultado[16], c, b;
  float preresult, ap, bb;
  
  printf("Valor da variavel texto =");
  scanf("%lf", &nota);
  printf("Valor da variavel texto =");
  scanf("%lf", &nota1);
   printf("Valor da variavel texto =");
  scanf("%lf", &nota2);
   printf("Valor da variavel texto =");
  scanf("%lf", &nota3);
  
        ap = (nota+nota2+nota3+nota1)/4;
        if (ap >= 10)
        {
        sprintf(resultado, "%.1f", ap);
        goto fim;

        }
        
        sprintf(resultado, "%.1f", ap);
        
        c = resultado[2];
        preresult = (c - '0') + 0;
        
        if ( preresult <= 3){
            preresult = 0;
            c = preresult + '0';
            resultado[2] = c;
        
        }else{ 
             if (preresult >= 7){
            b = resultado[0];
            bb = (b - '0') + 1;
            b = bb + '0';
            resultado[0] = b;
            preresult = 0;
            c = preresult + '0';
            resultado[2] = c;
        }   else{
            preresult = 5;
            c = preresult + '0';
            resultado[2] = c;
        }}
       
       fim:
       
        printf("   ****************************************** *\n");
        printf("   *       Notas           Provas             *\n");
        printf("   *        %.2f", nota);
        printf("               1º             *\n");
        printf("   *        %.2f", nota1);
        printf("               2º             *\n");
        printf("   *        %.2f", nota2);
        printf("               3º             *\n");
        printf("   *        %.2f", nota3);
        printf("               4º             *\n");
        printf("   *_________________________________________ *\n");
        printf("   * Media |");
        printf("%s", resultado);
        printf("                              *\n");
        printf("   *                                          *\n");
        printf("   ****************************************** *\n");
        return 0;
        return 0;
        }