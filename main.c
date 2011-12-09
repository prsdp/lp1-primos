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
#include "file.h"
#include "intervals.h"

int main (int argc, char **argv){

    create_file();

    print_interval(1,10000);
    print_interval(10001,20000);
    print_interval(20001,30000);
    print_interval(30001,40000);
    print_interval(40001,50000);
    print_interval(50001,60000);
    print_interval(60001,70000);
    print_interval(70001,80000);
    print_interval(80001,90000);
    print_interval(90001,100000);

    printf("\n\n");

    return 0;

}
