#include <time.h>
void showMatriz(int lines, int columns, int** mat);
void matrizGenerate(int lines, int columns, int** mat);
void showVetor(int lines, int* vet);
void vetorGenerate(int lines, int* vet);

void showVetor(int lines, int* vet)
{
    int i;
    for ( i = 0; i < lines; i++)
    {
        printf("[%d] ",vet[i]);        
    }    
}

void vetorGenerate(int lines, int* vet)
{
    int i;
    srand(time(NULL));
    for ( i = 0; i < lines; i++)
    {
        vet[i] = rand()%10;        
    }
    
}

void showMatriz(int lines, int columns, int** mat)
{
    int i,j;
    for ( i = 0; i < lines; i++)
    {
        for (j = 0; j < columns; i++)
        {
            printf("[%d] ",mat[i][j]);
        }
        printf("\n");
        
    }    
}

void matrizGenerate(int lines, int columns, int ** mat)
{
    int i,j;
    srand(time(NULL));
    for ( i = 0; i < lines; i++)
    {
        for (j = 0; j < columns; i++)
        {
            mat[i][j] = rand()%10;
        }
        
    }
    
}