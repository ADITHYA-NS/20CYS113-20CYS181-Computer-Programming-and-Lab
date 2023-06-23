#include<stdio.h>
int main()
{
        int res1, res2, res3, res4;
        struct comp_numi{
                int realnum;
                int imagnum;
        } c[2];
        
        scanf("%d", &c[0].realnum);

        scanf("%d", &c[0].imagnum);

        scanf("%d",&c[1].realnum);

        scanf("%d", &c[1].imagnum);

        res1 =  c[1].realnum + c[0].realnum ;
        res2 =  c[1].imagnum + c[0].imagnum ;
        res3 =  c[0].realnum - c[1].realnum ;
        res4 =  c[0].imagnum - c[1].imagnum ;
         
        printf("%d+%di\n",res1, res2);
        printf("%d+%di",res3, res4);
    
}

