/*
 * Esta biblioteca implementa funções
 * e procedimentos relativos a números
 * primos.
 *
 * @outhor: Priscila Paixão
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
int *interval_primes(int li, int ls, int *c){

    int i, cont=0;
    int *vetor;

    vetor = (int*) malloc(2 * sizeof(int));

    for(i=li;i<=ls;i++){

        if(is_prime(i)){
            vetor[cont] = i;
            cont++;
        }
    }

    *c = cont;

    return vetor;
}
