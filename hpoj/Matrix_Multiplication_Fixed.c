#include <stdio.h>
int main() {
    int A[3][3];
    int B[3][3];
    int C[3][3];
    int i,j,l;
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {scanf("%d",&A[i][j]);
        }
    }
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {scanf("%d",&B[i][j]);
        }
    } 
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {C[i][j]=0;
        for (l=0;l<3;l++)
        {C[i][j]=C[i][j]+(A[i][l]*B[l][j]);
        }
        }
    }
    for (i=0;i<3;i++)
    {for(j=0;j<3;j++)
    {printf("%d\t",C[i][j]);
    }
    printf("\n");
    }
    return 0;

}
