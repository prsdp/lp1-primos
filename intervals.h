/*
 * Esta biblioteca retorna o tempo
 * de execução necessário para encontrar
 * os primos de cade intervalo.
 *
 * @author: Priscila Paixão
 *
 */

// procedimento para imprimir os intervalos
void print_interval(int li, int ls){

    int i,j,cont=0;
    int *vetor;
    //time_t start, end;
    clock_t start;

    //time(&start);
    start = clock();

    vetor = interval_primes(li, ls, &cont);

    //time(&end);

    write_intervals(li,ls,(clock() - start) / (double)CLOCKS_PER_SEC);//difftime(end,start));

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
