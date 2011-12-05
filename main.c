/*
 * Descrição dos números primos.
 *
 * Esse trabalho é uma imlementação do
 * trabalho final do 1 período da
 * matéria de Linguagem de Programação
 * do curso de Engenharia da Computação
 * da Faculdade FUCAPI 2011.
 *
 * @author Priscila Paixão
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "primos.h"
#include "intervals.h"

int main (int argc, char **argv){

    print_interval(1,10);
    printf ("\t %fs",get_time_interval(1,10));
    print_interval(1,20);
    printf ("\t %fs",get_time_interval(1,20));
    print_interval(1,30);
    printf ("\t %fs",get_time_interval(1,30));
    print_interval(1,40);
    printf ("\t %fs",get_time_interval(1,40));
    print_interval(1,50);
    printf ("\t %fs",get_time_interval(1,50));
    print_interval(1,60);
    printf ("\t %fs",get_time_interval(1,60));
    print_interval(1,70);
    printf ("\t %fs",get_time_interval(1,70));
    print_interval(1,80);
    printf ("\t %fs",get_time_interval(1,80));
    print_interval(1,90);
    printf ("\t %fs",get_time_interval(1,90));
    print_interval(1,100);
    printf ("\t %fs",get_time_interval(1,100));

    printf("\n\n");

    return 0;

}
