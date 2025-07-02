#include <stdio.h>
#include <stdlib.h>


#define ROW 4
#define COL 5
#define MAX_TERMS 20

typedef struct{
    int row;
    int col;
    int value;
} Term;

void input_sparse_matrix(Term* sparse_matrix, int count)
{
    int r, c, v;
    scanf("%d %d %d", &r, &c, &v);
    sparse_matrix[count].row = r;
    sparse_matrix[count].col = c;
    sparse_matrix[count].value = v;
}

void print_sparse_matrix(Term* sparse_matrix, int count)
{
    int i;
    for(i = 0; i < count; i++)
    {
        printf("%2d %4d %4d\n", sparse_matrix[i].row, sparse_matrix[i].col, sparse_matrix[i].value);
    }
    printf("----------------------");
}

void print_as_matrix(Term* sparse_matrix, int size)
{
    int matrix[ROW][COL] = {0,};
    int i, j;

    for(i = 0; i < size; i++)
    {
        matrix[sparse_matrix[i].row][sparse_matrix[i].col] = sparse_matrix[i].value;
    }

    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int add_sparse_matrix(Term* sparse_matrix1, int t1_size, Term* sparse_matrix2, int t2_size, Term* sparse_matrix3)
{
    int i, j;
    for(i = 0; i < t1_size; i++)
    {
        Term temp = sparse_matrix1[i];
        for(j = 0; j < t2_size; j++)
        {
            if(temp.row == sparse_matrix2[j].row && temp.col == sparse_matrix2[j].col)
            {
                temp.vlaue = temp.value + sparse_matrix2[j].value;
            }
        }
        sparse_matrix3[i] = temp;
    }
    
    int count = i;
    
    for(i = 0; i < t2_size; i++)
    {
        for(j = 0; j < t1_size; j++)
        {
            if(sparse_matrix2[i].row != sparse_matrix3[j].row || t2[i].col != sparse_matrix3[j].col)
            {
                sparse_matrix3[count++] = sparse_matrix2[i];
            }
        }
    }
    
    return count;
    // sp3과 sp2를 비교해서 sp2가 없으면 추가
}

int main()
{
    Term sparse_matrix1[MAX_TERMS];
    Term sparse_matrix2[MAX_TERMS];

    input_sparse_matrix(sparse_matrix1, 0);
    input_sparse_matrix(sparse_matrix1, 1);
    input_sparse_matrix(sparse_matrix1, 2);
    input_sparse_matrix(sparse_matrix1, 3);

    input_sparse_matrix(sparse_matrix2, 0);
    input_sparse_matrix(sparse_matrix2, 1);
    input_sparse_matrix(sparse_matrix2, 2);

    //print_sparse_matrix(sparse_matrix1, 4);
    //print_sparse_matrix(sparse_matrix2, 3);

    //printf("\nmatrix1\n");
    //print_as_matrix(sparse_matrix1, 4);
    //printf("\nmatrix2\n");
    //print_as_matrix(sparse_matrix2, 3);
    
    int size = add_sparse_matrix(sparse_matrix1, 4, sparse_matrix2, 3, sparse_matrix3);
    print_as_matrix(sparse_matrix3, size);
    
    return 0;
}
