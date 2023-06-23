#include <stdio.h>
int main() {
    int i,j,k,l,m;
    scanf("%d",&i);
    scanf("%d",&j);
    int A[i][j];
    int B[i][j];
    int C[i][j];
    for (k=0;k<i;k++)
    {
        for (l=0;l<j;l++)
        {scanf("%d",&A[k][l]);
        }
    }
    for (k=0;k<i;k++)
    {
        for (l=0;l<j;l++)
        {scanf("%d",&B[k][l]);
        }
    } 
    for (k=0;k<i;k++)
    {
        for(l=0;l<j;l++)
        {C[k][l]=0;
        for (m=0;m<i;m++)
        {C[k][l]=C[k][l]+(A[k][m]*B[m][l]);
        }
        }
    }
    for (k=0;k<i;k++)
    {for(l=0;l<j;l++)
    {printf("%d\t",C[k][l]);
    }
    printf("\n");
    }
    return 0;

}
