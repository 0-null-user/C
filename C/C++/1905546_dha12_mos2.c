#include <stdio.h>
#include <math.h>
#define pi 3.1415926535897
int main()
{

    float E1, E2, G12, V12, V23, A, B, C, D, E, F, Q11, Q12, Q22;
    int N, Zn, Zn1, diff, diff2, diff3, s = 0;
    double x;
    float Aa[9], Bb[9], Dd[9];
    Aa[0] = 0;
    Aa[1] = 0;
    Aa[2] = 0;
    Aa[3] = 0;
    Aa[4] = 0;
    Aa[5] = 0;
    Aa[6] = 0;
    Aa[7] = 0;
    Aa[8] = 0;
    Bb[0] = 0;
    Bb[1] = 0;
    Bb[2] = 0;
    Bb[3] = 0;
    Bb[4] = 0;
    Bb[5] = 0;
    Bb[6] = 0;
    Bb[7] = 0;
    Bb[8] = 0;
    Dd[0] = 0;
    Dd[1] = 0;
    Dd[2] = 0;
    Dd[3] = 0;
    Dd[4] = 0;
    Dd[5] = 0;
    Dd[6] = 0;
    Dd[7] = 0;
    Dd[8] = 0;

    printf("Enter the value of N\n");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        x = (pi * x) / 180;
        printf("\nEnter the value of Zn\n");
        scanf("%d", &Zn);
        printf("Enter the value of Zn-1\n");
        scanf("%d", &Zn1);
        printf("Enter the value of x \n");
        scanf("%lf", &x);
        printf("Enter the value of E1 \n");
        scanf("%f", &E1);
        printf("Enter the value of E2 \n");
        scanf("%f", &E2);
        printf("Enter the value of G12 \n");
        scanf("%f", &G12);
        printf("Enter the value of V12 \n");
        scanf("%f", &V12);
        printf("Enter the value of V23 \n");
        scanf("%f", &V23);
        Q11 = (E1 / (1 - (V12 * V23)));
        Q12 = ((E2 * V12) / (1 - (V12 * V23)));
        Q22 = (E2 / (1 - (V12 * V23)));

        printf("\n\n%0.3f", Q11);
        printf("   %0.3f", Q12);
        printf("   0\n");
        printf("%0.3f", Q12);
        printf("   %0.3f", Q22);
        printf("   0       =[Q]\n");
        printf("0    ");
        printf("   0    ");
        printf("%0.3f", G12);
        //  Value of G12 = Value of Q66

        double m = cos(x);
        double n = sin(x);
        double m4 = pow(m, 4);
        double m3 = pow(m, 3);
        double m2 = pow(m, 2);
        double n4 = pow(n, 4);
        double n3 = pow(n, 3);
        double n2 = pow(n, 2);
        //  Let Q11 (bar) is A , and Q12(bar)=B, Q22(bar)=C ,Q16(bar)=D , Q26(bar)=E ,Q66(bar)=F

        A = (Q11 * m4) + (2 * Q12 * m2 * n2) + (4 * G12 * m2 * n2) + (Q22 * n4);
        B = (Q11 * m2 * n2) + (Q22 * m2 * n2) - (4 * G12 * m2 * n2) + (Q12 * n4) + (Q12 * m4);
        C = (Q11 * n4) + (2 * Q12 * m2 * n2) + (4 * G12 * m2 * n2) + (Q22 * m4);
        D = (Q11 * m3 * n) - (Q12 * m3 * n) - (2 * G12 * m3 * n) + (Q12 * n3 * m) - (Q22 * n3 * m) + (2 * G12 * n3 * m);
        E = (Q11 * m * n3) - (Q12 * m * n3) - (2 * G12 * m * n3) + (Q12 * n * m3) - (Q22 * n * m3) + (2 * G12 * n * m3);
        F = (Q11 * m2 * n2) + (Q22 * m2 * n2) - (2 * Q12 * m2 * n2) - (2 * G12 * m2 * n2) + (G12 * n4) + (G12 * m4);

        printf("\n\n%0.3f", A);
        printf("   %0.3f", B);
        printf("   %0.3f\n", D);
        printf("%0.3f", B);
        printf("   %0.3f", C);
        printf("   %0.3f        =[Q(bar)]\n", E);
        printf("%0.3f", D);
        printf("   %0.3f", E);
        printf("   %0.3f", F);

        diff = Zn - Zn1;
        diff2 = 0.5 * ((Zn * Zn) - (Zn1 * Zn1));
        diff3 = 0.33333333 * ((Zn * Zn * Zn) - (Zn1 * Zn1 * Zn1));

        Aa[0] = Aa[0] + (A * N * diff);
        Aa[1] = Aa[1] + (B * N * diff);
        Aa[2] = Aa[2] + (D * N * diff);
        Aa[3] = Aa[3] + (B * N * diff);
        Aa[4] = Aa[4] + (C * N * diff);
        Aa[5] = Aa[5] + (E * N * diff);
        Aa[6] = Aa[6] + (D * N * diff);
        Aa[7] = Aa[7] + (E * N * diff);
        Aa[8] = Aa[8] + (F * N * diff);

        Bb[0] = Bb[0] + (A * N * diff2);
        Bb[1] = Bb[1] + (B * N * diff2);
        Bb[2] = Bb[2] + (D * N * diff2);
        Bb[3] = Bb[3] + (B * N * diff2);
        Bb[4] = Bb[4] + (C * N * diff2);
        Bb[5] = Bb[5] + (E * N * diff2);
        Bb[6] = Bb[6] + (D * N * diff2);
        Bb[7] = Bb[7] + (E * N * diff2);
        Bb[8] = Bb[8] + (F * N * diff2);

        Dd[0] = Dd[0] + (A * N * diff3);
        Dd[1] = Dd[1] + (B * N * diff3);
        Dd[2] = Dd[2] + (D * N * diff3);
        Dd[3] = Dd[3] + (B * N * diff3);
        Dd[4] = Dd[4] + (C * N * diff3);
        Dd[5] = Dd[5] + (E * N * diff3);
        Dd[6] = Dd[6] + (D * N * diff3);
        Dd[7] = Dd[7] + (E * N * diff3);
        Dd[8] = Dd[8] + (F * N * diff3);
        printf("\n");
        printf("\n");

        for (int i = 0; i < 9; i++)
        {
            printf("%0.3f   ", Aa[i]);
            if (i == 2)
                printf("\n");
            if (i == 5)
                printf("      =[A] \n");
        }
        printf("\n");
        printf("\n");
        for (int i = 0; i < 9; i++)
        {
            printf("%0.3f   ", Bb[i]);
            if (i == 2)
                printf("\n");
            if (i == 5)
                printf("      =[B] \n");
        }
        printf("\n");
        printf("\n");
        for (int i = 0; i < 9; i++)
        {
            printf("%0.3f   ", Dd[i]);
            if (i == 2)
                printf("\n");
            if (i == 5)

                printf("      =[D] \n\n\n");
        }
    }
    return 0;
}