#include <stdio.h>
#include <stdlib.h>


                    /* Escreva um trecho de codigo para fazer a criacao dos novos tipos de dados conforme solicitado abaixo:

                    • Horario: composto de hora, minutos e segundos.
                    • Data: composto de dia, mes e ano.
                    • Compromisso: composto de uma data, horario e texto que descreve o compromisso. */



typedef struct{
    int hora, minuto, segundo;
}Horario;

typedef struct{
    Horario tempo;
    int dia, mes, ano;
}Data;

typedef struct{
    Data calendario;
    char compromisso[30];

}Compromisso;

int main(void) {
    Compromisso agenda;

    printf("\n\tCompromissos\n");
    printf("Digite o compromisso...:");
    scanf("%s",&agenda.compromisso);

    printf("Digite a dia mes e ano no formato dd  mm aaaa ");
    scanf("%d%d%d", &agenda.calendario.dia, &agenda.calendario.mes, &agenda.calendario.ano);

    printf("Digite agora o horrario no formato HH MM SS: ");
    scanf("%d%d%d",&agenda.calendario.tempo.hora,&agenda.calendario.tempo.minuto,&agenda.calendario.tempo.segundo );


    printf("O compromisso %s esta reservado para data %d/%d/%d as %d horas ,  %d minutos  e %d segundos :) ", agenda.compromisso, agenda.calendario.dia,agenda.calendario.mes,agenda.calendario.ano,agenda.calendario.tempo.hora,agenda.calendario.tempo.minuto,agenda.calendario.tempo.segundo);

  return 0;
}
