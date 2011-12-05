/*
 * Esta biblioteca retorna o tempo
 * de execução necessário para encontrar
 * os primos de cade intervalo.
 *
 * @outhor: Priscila Paixão
 *
 */

// procedimento para imprimir os intervalos
void print_interval(int li, int ls){

    int i,j,cont=0;
    int *vetor;

    vetor = interval_primes(li, ls, &cont);

    printf("\n Intervalo [%d,%d]  = {",li,ls);

    for(i=0;i<cont;i++){
        if (i == cont - 1)
            printf("%d", vetor[i]);
        else
            printf("%d,",vetor[i]);

    }

    printf("}");
    free(vetor);
}

// Esta função tem como parâmetros o limite
// inferior e superior dos intervalos e
// retorna o tempo de execução do intervalo.
double get_time_interval(int li, int ls){

    //time_t start, end;
    clock_t start;

    //time(&start);
    start = clock();

    interval_primes_ex(li,ls);

    //time(&end);

    return (clock() - start) / (double)CLOCKS_PER_SEC;//difftime(end,start);
}
