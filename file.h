/*
 * Esta biblioteca é dedicada a manipulação
 * de arquivos
 *
 * @author: Priscila Paixão
 *
 */

void write_intervals(int li, int ls, double secs) {
    FILE *fp;

    fp = fopen("intervals.csv", "a");

    if (fp == NULL) {
        printf("Arquivo não existe.\n");
        exit(0);
    }

    fprintf(fp, "%f,%d,%d\n", secs, li, ls);
    fclose(fp);
}

void create_file() {
    FILE *fp;

    fp = fopen("intervals.csv", "w");

    if (fp == NULL) {
        printf("Arquivo não existe.\n");
        exit(0);
    }

    //fprintf(fp, "#Intervalo X Tempo\n\n");
    //fprintf(fp, "#li    ls      segs\n");
    fprintf(fp, "Segundos,Limite Inferior,Limite Superior\n");
    fclose(fp);
}


