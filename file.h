/*
 * Esta biblioteca é dedicada a manipulação
 * de arquivos
 *
 * @author: Priscila Paixão
 *
 */

void write_intervals(int li, int ls, double secs) {
    FILE *fp;

    fp = fopen("intervals.dat", "a");

    if (fp == NULL) {
        printf("Arquivo não existe.\n");
        exit(0);
    }

    fprintf(fp, "[%d, %d]\t%f\n", li, ls, secs);
    fclose(fp);
}

void create_file() {
    FILE *fp;

    fp = fopen("intervals.dat", "w");

    if (fp == NULL) {
        printf("Arquivo não existe.\n");
        exit(0);
    }

    fprintf(fp, "#Intervalo X Tempo\n\n");
    fprintf(fp, "#Intervalo\tTempo(s)\n");
    fclose(fp);
}


