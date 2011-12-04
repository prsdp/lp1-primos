/*
 * Esta biblioteca retorna o tempo
 * de execução necessário para encontrar
 * os primos de cade intervalo.
 *
 * @outhor: Priscila Paixão
 *
 */

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
