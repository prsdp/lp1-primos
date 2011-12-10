/*
 * Esta biblioteca retorna o tempo
 * de execução necessário para encontrar
 * os primos de cade intervalo.
 *
 * @author: Priscila Paixão
 *
 */

// Esta funcão recebe como parâmetro um número
// verifica se o número é primo e retorna 1 se
// for primo e 0 se não for.
int is_prime(int num){

    int i,cont=0;

    if((num==1)||(num<=0))
        return 0;

    for(i=1;i<=num;i++){

        if(num%i==0)
            cont++;

        if(cont>2)
            return 0;
    }
    return 1;
}

// Esta função recebe 2 parâmetros sendo
// eles com limite inferior e superior,
// retornando um vetor int de primos.
// O parâmetro *c é um argumento de ponteiro
// que seta a quantidade de posicões de um
// vetor.
int *interval_primes(int li, int ls, int *c){

    int i, cont=0;
    int *vetor;

    vetor = (int *) calloc(ls,sizeof(int));

    for(i=li;i<=ls;i++){

        if(is_prime(i)){
            vetor[cont] = i;
            cont++;
        }
    }

    *c = cont;

    return vetor;
}

void write_intervals(int li, ls, double secs) {

    FILE *fp;

    fp = fopen("intervals.csv", "a");

    if (fp == NULL) {
        printf("Não foi possível abrir o arquivo.\n");
        exit(0);
    }

    fprintf(fp. "%f,%d,%d\n", secs, li, ls);
    fclose(fp);
}

void create_file() {

    FILE *fp;

    fp = fopen("intervals.csv", "a");

    if (fp == NULL) {
        printf("Não foi possível abrir o arquivo.\n");
        exit(0);
    }

    fprintf(fp, "Segundos,Limite Inferior,Limite Superior\n");
    fclose(fp);
}

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
