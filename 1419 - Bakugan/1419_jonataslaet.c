#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define bonus 30

int main()
{
    int i, r, m[10], l[10], somaM, somaL, contrep1, contrep2, numrep1, numrep2;
    int x;

    for (;;)
    {
        scanf("%d", &r); //n�mero de rodadas
        if (r == 0) break;
        else
        {
            numrep1 = 0;
            numrep2 = 0;
            somaM = 0;
            somaL = 0;
            contrep1 = 1;
            contrep2 = 1;
            x = 0;
            //------------------------------------------
            for (i = 0; i < r; i++)
            {
                scanf("%d", &m[i]);
                somaM = somaM + m[i];
            }
            //------------------------------------------
            for (i = 0; i < r; i++)
            {
                scanf("%d", &l[i]);
                somaL = somaL + l[i];
            }
            //------------------------------------------
            for (i = 1; i <= r; i++)
            {
                //Verifica repet�ncia consecutiva de n�mero
                if (m[i] == m[i - 1])
                {
                    contrep1++;
                }
                else contrep1 = 1;
                if (l[i] == l[i - 1])
                {
                    contrep2++;
                }
                else contrep2 = 1;

                //Verifica b�nus
                if (contrep1 == 3 && contrep2 != 3)
                {
                    somaM = somaM + 30;
                    break;
                }
                if (contrep1 != 3 && contrep2 == 3)
                {
                    somaL = somaL + 30;
                    break;
                }
                if (contrep1 == 3 && contrep2 == 3)
                {
                    break;
                }
            }
            //------------------------------------------
            if (somaM > somaL)
            {
                printf("M\n");
            }
            else if (somaL > somaM)
            {
                printf("L\n");
            }
            else
            {
                printf("T\n");
            }
        }
    }

    return 0;
}
