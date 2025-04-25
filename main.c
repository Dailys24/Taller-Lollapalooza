//Integrante 1: Angelo 
//Integrante 2: Moisés 
//Profesor(a): Jorge Cornejo 
//Sección: 301
//Compilador utilizado: onlinegdb
#include <stdio.h>
#include <stdlib.h>

int M;

int main()
{
    //Declaracion de vriables
    int aux_edad, aux_dias;
    printf("Ingrese la cantidad de asistentes: ");
    scanf("%i",&M);
    int edad[M];
    int dias[M];

    //Inicio de ciclo for
    for(int contador=0; contador < M; contador++){
        printf("Ingrese la edad de la persona (entre 15-100 años): ");
        scanf("%i",&aux_edad);

            //Ciclo de la condiocion de las edades de los asistentes
            while(aux_edad < 15 || aux_edad > 100){
            printf("ERROR: ingrese nuevamente la edad:");
            scanf("%i",&aux_edad);
            }

      //Leer dias de asistencia de los asistentes 
        edad[contador] = aux_edad;
        printf("Ingrese la cantidad de dias que asistirá su asistente (entre 1-3 dias): ");
        scanf("%i",&aux_dias);

          //Ciclo de condicion de dias de los asistentes
            while(aux_dias < 1 || aux_dias > 3){
            printf("ERROR: ingrese nuevamente el dia:");
            scanf("%i",&aux_dias);
            }
       dias[contador] = aux_dias;
    }
    //Variables
    int menor_edad = 0;
    //inicio de ciclo for
    for(int contador=0; contador<M; contador++){
        if(edad[contador] < edad[menor_edad]){
            menor_edad = contador;
        }
    }
    //Imprimir asistente numero identificador del asistente de menor edad, su edad y los dias que asistira al evento
    printf("\n(inicializando en 0)El numero identificador de la persona con menor edad es el: %i", menor_edad);
    printf("\nLa edad de la persona con menor edad es: %i", edad[menor_edad]);
    printf("\nLa cantidad de dias que asistira al evento son: %i", dias[menor_edad]);

    //Variables
    int suma_edad=0, suma_dias=0, promedio_edad, promedio_dias, contador_edad=0;

    //Inicio de ciclo for
    for(int contador=0; contador<M; contador++){

      //Personas que asistiran 2 dias al evento
      if(dias[contador] == 2){
        suma_edad = suma_edad + edad[contador]; 
        contador_edad++;
      }
    }
    promedio_edad = suma_edad / contador_edad;

    //Inicio ciclo for
    for(int contador=0; contador<M; contador++){
        suma_dias = suma_dias + dias[contador];
    }
    promedio_dias = suma_dias / M;

    //Imprimir el promedio de edad de las personas que asistieron 2 dias al evento y el primedio de edad de las personas ingresadas
    printf("\nPromedio de edad de las personas que asistieron 2 dias al evento: %i", promedio_edad);
    printf("\nPromedio de dias de las personas ingresadas: %i", promedio_dias);

    //Variables e imprimir lo total recaudado en el evento
    int recaudacion;
    recaudacion = suma_dias * 25000;
    printf("\nLo recaudado es %i",recaudacion);
    return 0;
}
