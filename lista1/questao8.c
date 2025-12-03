#include <stdio.h>

int main() {

    int h_inicio, m_inicio, h_fim, m_fim;
    int inicio_total_minutos, fim_total_minutos, duracao_minutos;
    int horas_finais, minutos_finais;

    // Leitura dos 4 valores
    printf("informe o horario [hora do inicio], [minutos de inicio]");
    printf("[hora do termino], [minutos do termino]");
    scanf("%d %d %d %d", &h_inicio, &m_inicio, &h_fim, &m_fim);

    inicio_total_minutos = (h_inicio * 60) + m_inicio;
    fim_total_minutos = (h_fim * 60) + m_fim;

    duracao_minutos = fim_total_minutos - inicio_total_minutos;

    if (duracao_minutos <= 0) {
        duracao_minutos += 1440; // Soma 24h * 60min = 1440
    }

    horas_finais = duracao_minutos / 60;   
    minutos_finais = duracao_minutos % 60; 

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas_finais, minutos_finais);

    return 0;
}