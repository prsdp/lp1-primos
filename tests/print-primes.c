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
#include "src/intervals-opt.h"

int main (int argc, char **argv){

    create_file();
    print_interval(1,100);
    print_interval(101,200);
    print_interval(201,300);
    print_interval(301,400);
    print_interval(401,500);
    print_interval(501,600);
    print_interval(601,700);
    print_interval(701,800);
    print_interval(801,900);
    print_interval(901,1000);
    print_interval(1001,1100);
    print_interval(1101,1200);
    print_interval(1201,1300);
    print_interval(1301,1400);
    print_interval(1401,1500);
    print_interval(1501,1600);
    print_interval(1601,1700);
    print_interval(1701,1800);
    print_interval(1801,1900);
    print_interval(1901,2000);

    printf("\n\n");

    return 0;

}
