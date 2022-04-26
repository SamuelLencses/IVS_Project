// Console calculator
// 2nd IVS Project
// Author: Kryštof Paulík, xpauli08
// Date: 2022-04-27

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "math_lib.h"

void printEmpty();
void printHelp();
void printInvalidInput();

void opPlus();
void printFirstPlus(long double a);
void printSecondPlus(long double a, long double b);

void opMinus();
void printFirstMinus(long double a);
void printSecondMinus(long double a, long double b);

void opMul();
void printFirstMul(long double a);
void printSecondMul(long double a, long double b);

void opDiv();
void printFirstDiv(long double a);
void printSecondDiv(long double a, long double b);

void opPow();
void printFirstPow(long double a);
void printSecondPow(long double a, long double b);

void opRoot();
void printFirstRoot(long double a);
void printSecondRoot(long double a, long double b);

void opAbs();

void opFact();

int main()
{
    char input[20];

    printEmpty();

    while (1)
    {
        scanf("%20s", input);
        printf("%s\n", input);

        if (strcmp(input, "+") == 0)
        {
            opPlus();
        }
        else if (strcmp(input, "-") == 0)
        {
            opMinus();
        }
        else if (strcmp(input, "*") == 0)
        {
            opMul();
        }
        else if (strcmp(input, "/") == 0)
        {
            opDiv();
        }
        else if (strcmp(input, "pow") == 0)
        {
            opPow();
        }
        else if (strcmp(input, "root") == 0)
        {
            opRoot();
        }
        else if (strcmp(input, "abs") == 0)
        {
            opAbs();
        }
        else if (strcmp(input, "fact") == 0)
        {
            opFact();
        }
        else if (strcmp(input, "help") == 0)
        {
            printHelp();
        }
        else if (strcmp(input, "exit") == 0)
        {
            system("clear");
            exit(0);
        }
        else if (strcmp(input, "back") == 0)
        {
            printEmpty();
        }
        else
        {
            printInvalidInput();
        }
    }
    return 0;
}

void printEmpty()
{
    system("clear");
    printf("\n\n");
    printf("   ------------------------- CALCULATOR ----------------------------   \n");
    printf("   --                                                             --   \n");
    printf("   --   to see how to use this calculator, type help              --   \n");
    printf("   --   to exit the program, type exit                            --   \n");
    printf("   --   available operators: +, -, *, /, pow, root, abs, fact     --   \n");
    printf("   --                                                             --   \n");
    printf("   -- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - --   \n");
    printf("                                                                       \n");
    printf("   --                                                             --   \n");   
    printf("                                                                       \n");       
    printf("   --                                                             --   \n");
    printf("                                                                       \n");          
    printf("   -----------------------------------------------------------------   \n");   
    printf("\n\n");

    printf("   type here: ");    
}

void printHelp()
{
    system("clear");
    printf("\n\n");
    printf("   ---------------------- CALCULATOR - HELP ------------------------   \n");
    printf("   --                                                             --   \n");
    printf("   --   to start using the calculator, just choose one of the     --   \n");
    printf("   --   operators listed and type it in                           --   \n");
    printf("   --                                                             --   \n");
    printf("   --   the calculator will then navigate you on what to do       --   \n");
    printf("   --                                                             --   \n");
    printf("                                                                       \n");
    printf("   --   tip: you can type exit at any point to close the program  --   \n");   
    printf("                                                                       \n");       
    printf("   --   to get back to the main screen, type back                 --   \n");
    printf("                                                                       \n");          
    printf("   -----------------------------------------------------------------   \n");   
    printf("\n\n");

    printf("   type here: ");    
}

void printInvalidInput()
{
    system("clear");
    printf("\n\n");
    printf("   ------------------------- CALCULATOR ----------------------------   \n");
    printf("   --                                                             --   \n");
    printf("   --   to see how to use this calculator, type help              --   \n");
    printf("   --   to exit the program, type exit                            --   \n");
    printf("   --   available operators: +, -, *, /, pow, root, abs, fact     --   \n");
    printf("   --                                                             --   \n");
    printf("   -- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - --   \n");
    printf("                                                                       \n");
    printf("   --   invalid input!                                            --   \n");   
    printf("        please enter a valid command                                   \n");       
    printf("   --                                                             --   \n");
    printf("                                                                       \n");          
    printf("   -----------------------------------------------------------------   \n");   
    printf("\n\n");

    printf("   type here: "); 
}

void opPlus()
{
    char a[32];
    char *aptr;

    char b[32];
    char *bptr;

    long double a_double;
    long double b_double;

    system("clear");
    printf("\n\n");
    printf("   ------------------------- CALCULATOR ----------------------------   \n");
    printf("   --                                                             --   \n");
    printf("   --   to see how to use this calculator, type help              --   \n");
    printf("   --   to exit the program, type exit                            --   \n");
    printf("   --   available operators: +, -, *, /, pow, root, abs, fact     --   \n");
    printf("   --                                                             --   \n");
    printf("   -- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - --   \n");
    printf("                                                                       \n");
    printf("   --   enter the first number (+)                                --   \n");   
    printf("                                                                       \n");       
    printf("   --                                                             --   \n");
    printf("                                                                       \n");          
    printf("   -----------------------------------------------------------------   \n");   
    printf("\n\n");

    printf("   type here: "); 
    scanf("%20s", a);
    if (strcmp(a, "exit") == 0) {system("clear"); exit(0);}
    a_double = strtod(a, &aptr);

    printFirstPlus(a_double);

    scanf("%20s", b);
    if (strcmp(b, "exit") == 0) {system("clear"); exit(0);}
    b_double = strtod(b, &bptr);
    printSecondPlus(a_double, b_double);
}

void printFirstPlus(long double a)
{
    system("clear");
    printf("\n\n");
    printf("   ------------------------- CALCULATOR ----------------------------   \n");
    printf("   --                                                             --   \n");
    printf("   --   to see how to use this calculator, type help              --   \n");
    printf("   --   to exit the program, type exit                            --   \n");
    printf("   --   available operators: +, -, *, /, pow, root, abs, fact     --   \n");
    printf("   --                                                             --   \n");
    printf("   -- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - --   \n");
    printf("                                                                       \n");
    printf("   --   enter the second number (+)                               --   \n");   
    printf("        %.2Lf +                                                        \n", a);       
    printf("   --                                                             --   \n");
    printf("                                                                       \n");          
    printf("   -----------------------------------------------------------------   \n");   
    printf("\n\n");

    printf("   type here: ");     
}

void printSecondPlus(long double a, long double b)
{
    long double result = add(a, b).ans;

    system("clear");
    printf("\n\n");
    printf("   ------------------------- CALCULATOR ----------------------------   \n");
    printf("   --                                                             --   \n");
    printf("   --   to see how to use this calculator, type help              --   \n");
    printf("   --   to exit the program, type exit                            --   \n");
    printf("   --   available operators: +, -, *, /, pow, root, abs, fact     --   \n");
    printf("   --                                                             --   \n");
    printf("   -- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - --   \n");
    printf("                                                                       \n");
    printf("   --   result                                                    --   \n");   
    printf("        %.2Lf + %.2LF = %.2Lf                                          \n", a, b, result);       
    printf("   --   now you can choose another operation                      --   \n");
    printf("                                                                       \n");          
    printf("   -----------------------------------------------------------------   \n");   
    printf("\n\n");

    printf("   type here: ");     
}

void opMinus()
{
    char a[32];
    char *aptr;

    char b[32];
    char *bptr;

    long double a_double;
    long double b_double;

    system("clear");
    printf("\n\n");
    printf("   ------------------------- CALCULATOR ----------------------------   \n");
    printf("   --                                                             --   \n");
    printf("   --   to see how to use this calculator, type help              --   \n");
    printf("   --   to exit the program, type exit                            --   \n");
    printf("   --   available operators: +, -, *, /, pow, root, abs, fact     --   \n");
    printf("   --                                                             --   \n");
    printf("   -- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - --   \n");
    printf("                                                                       \n");
    printf("   --   enter the first number (-)                                --   \n");   
    printf("                                                                       \n");       
    printf("   --                                                             --   \n");
    printf("                                                                       \n");          
    printf("   -----------------------------------------------------------------   \n");   
    printf("\n\n");

    printf("   type here: "); 
    scanf("%20s", a);
    if (strcmp(a, "exit") == 0) {system("clear"); exit(0);}
    a_double = strtod(a, &aptr);

    printFirstMinus(a_double);

    scanf("%20s", b);
    if (strcmp(b, "exit") == 0) {system("clear"); exit(0);}
    b_double = strtod(b, &bptr);
    printSecondMinus(a_double, b_double);
}

void printFirstMinus(long double a)
{
    system("clear");
    printf("\n\n");
    printf("   ------------------------- CALCULATOR ----------------------------   \n");
    printf("   --                                                             --   \n");
    printf("   --   to see how to use this calculator, type help              --   \n");
    printf("   --   to exit the program, type exit                            --   \n");
    printf("   --   available operators: +, -, *, /, pow, root, abs, fact     --   \n");
    printf("   --                                                             --   \n");
    printf("   -- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - --   \n");
    printf("                                                                       \n");
    printf("   --   enter the second number (-)                               --   \n");   
    printf("        %.2Lf -                                                        \n", a);       
    printf("   --                                                             --   \n");
    printf("                                                                       \n");          
    printf("   -----------------------------------------------------------------   \n");   
    printf("\n\n");

    printf("   type here: ");     
}

void printSecondMinus(long double a, long double b)
{
    long double result = sub(a, b).ans;

    system("clear");
    printf("\n\n");
    printf("   ------------------------- CALCULATOR ----------------------------   \n");
    printf("   --                                                             --   \n");
    printf("   --   to see how to use this calculator, type help              --   \n");
    printf("   --   to exit the program, type exit                            --   \n");
    printf("   --   available operators: +, -, *, /, pow, root, abs, fact     --   \n");
    printf("   --                                                             --   \n");
    printf("   -- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - --   \n");
    printf("                                                                       \n");
    printf("   --   result                                                    --   \n");   
    printf("        %.2Lf - %.2LF = %.2Lf                                          \n", a, b, result);       
    printf("   --   now you can choose another operation                      --   \n");
    printf("                                                                       \n");          
    printf("   -----------------------------------------------------------------   \n");   
    printf("\n\n");

    printf("   type here: ");     
}
void opMul()
{
    char a[32];
    char *aptr;

    char b[32];
    char *bptr;

    long double a_double;
    long double b_double;

    system("clear");
    printf("\n\n");
    printf("   ------------------------- CALCULATOR ----------------------------   \n");
    printf("   --                                                             --   \n");
    printf("   --   to see how to use this calculator, type help              --   \n");
    printf("   --   to exit the program, type exit                            --   \n");
    printf("   --   available operators: +, -, *, /, pow, root, abs, fact     --   \n");
    printf("   --                                                             --   \n");
    printf("   -- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - --   \n");
    printf("                                                                       \n");
    printf("   --   enter the first number (*)                                --   \n");   
    printf("                                                                       \n");       
    printf("   --                                                             --   \n");
    printf("                                                                       \n");          
    printf("   -----------------------------------------------------------------   \n");   
    printf("\n\n");

    printf("   type here: "); 
    scanf("%20s", a);
    if (strcmp(a, "exit") == 0) {system("clear"); exit(0);}
    a_double = strtod(a, &aptr);

    printFirstMul(a_double);

    scanf("%20s", b);
    if (strcmp(b, "exit") == 0) {system("clear"); exit(0);}
    b_double = strtod(b, &bptr);
    printSecondMul(a_double, b_double);
}

void printFirstMul(long double a)
{
    system("clear");
    printf("\n\n");
    printf("   ------------------------- CALCULATOR ----------------------------   \n");
    printf("   --                                                             --   \n");
    printf("   --   to see how to use this calculator, type help              --   \n");
    printf("   --   to exit the program, type exit                            --   \n");
    printf("   --   available operators: +, -, *, /, pow, root, abs, fact     --   \n");
    printf("   --                                                             --   \n");
    printf("   -- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - --   \n");
    printf("                                                                       \n");
    printf("   --   enter the second number (*)                               --   \n");   
    printf("        %.2Lf *                                                        \n", a);       
    printf("   --                                                             --   \n");
    printf("                                                                       \n");          
    printf("   -----------------------------------------------------------------   \n");   
    printf("\n\n");

    printf("   type here: ");     
}

void printSecondMul(long double a, long double b)
{
    long double result = mul(a, b).ans;

    system("clear");
    printf("\n\n");
    printf("   ------------------------- CALCULATOR ----------------------------   \n");
    printf("   --                                                             --   \n");
    printf("   --   to see how to use this calculator, type help              --   \n");
    printf("   --   to exit the program, type exit                            --   \n");
    printf("   --   available operators: +, -, *, /, pow, root, abs, fact     --   \n");
    printf("   --                                                             --   \n");
    printf("   -- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - --   \n");
    printf("                                                                       \n");
    printf("   --   result                                                    --   \n");   
    printf("        %.2Lf * %.2LF = %.2Lf                                          \n", a, b, result);       
    printf("   --   now you can choose another operation                      --   \n");
    printf("                                                                       \n");          
    printf("   -----------------------------------------------------------------   \n");   
    printf("\n\n");

    printf("   type here: ");     
}

void opDiv()
{
    char a[32];
    char *aptr;

    char b[32];
    char *bptr;

    long double a_double;
    long double b_double;

    system("clear");
    printf("\n\n");
    printf("   ------------------------- CALCULATOR ----------------------------   \n");
    printf("   --                                                             --   \n");
    printf("   --   to see how to use this calculator, type help              --   \n");
    printf("   --   to exit the program, type exit                            --   \n");
    printf("   --   available operators: +, -, *, /, pow, root, abs, fact     --   \n");
    printf("   --                                                             --   \n");
    printf("   -- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - --   \n");
    printf("                                                                       \n");
    printf("   --   enter the first number (/)                                --   \n");   
    printf("                                                                       \n");       
    printf("   --                                                             --   \n");
    printf("                                                                       \n");          
    printf("   -----------------------------------------------------------------   \n");   
    printf("\n\n");

    printf("   type here: "); 
    scanf("%20s", a);
    if (strcmp(a, "exit") == 0) {system("clear"); exit(0);}
    a_double = strtod(a, &aptr);

    printFirstDiv(a_double);

    scanf("%20s", b);
    if (strcmp(b, "exit") == 0) {system("clear"); exit(0);}
    b_double = strtod(b, &bptr);
    printSecondDiv(a_double, b_double);

}

void printFirstDiv(long double a)
{
    system("clear");
    printf("\n\n");
    printf("   ------------------------- CALCULATOR ----------------------------   \n");
    printf("   --                                                             --   \n");
    printf("   --   to see how to use this calculator, type help              --   \n");
    printf("   --   to exit the program, type exit                            --   \n");
    printf("   --   available operators: +, -, *, /, pow, root, abs, fact     --   \n");
    printf("   --                                                             --   \n");
    printf("   -- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - --   \n");
    printf("                                                                       \n");
    printf("   --   enter the second number (/)                               --   \n");   
    printf("        %.2Lf /                                                        \n", a);       
    printf("   --                                                             --   \n");
    printf("                                                                       \n");          
    printf("   -----------------------------------------------------------------   \n");   
    printf("\n\n");

    printf("   type here: ");     
}

void printSecondDiv(long double a, long double b)
{
    if (dv(a, b).fail == 1)
    {
        system("clear");
        printf("\n\n");
        printf("   ------------------------- CALCULATOR ----------------------------   \n");
        printf("   --                                                             --   \n");
        printf("   --   to see how to use this calculator, type help              --   \n");
        printf("   --   to exit the program, type exit                            --   \n");
        printf("   --   available operators: +, -, *, /, pow, root, abs, fact     --   \n");
        printf("   --                                                             --   \n");
        printf("   -- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - --   \n");
        printf("                                                                       \n");
        printf("   --   sorry, but you can't divide by 0                          --   \n");   
        printf("                                                                       \n");       
        printf("   --   now you can choose another operation                      --   \n");
        printf("                                                                       \n");          
        printf("   -----------------------------------------------------------------   \n");   
        printf("\n\n");

        printf("   type here: ");
    }
    else
    {
        long double result = dv(a, b).ans;
        system("clear");
        printf("\n\n");
        printf("   ------------------------- CALCULATOR ----------------------------   \n");
        printf("   --                                                             --   \n");
        printf("   --   to see how to use this calculator, type help              --   \n");
        printf("   --   to exit the program, type exit                            --   \n");
        printf("   --   available operators: +, -, *, /, pow, root, abs, fact     --   \n");
        printf("   --                                                             --   \n");
        printf("   -- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - --   \n");
        printf("                                                                       \n");
        printf("   --   result                                                    --   \n");   
        printf("        %.2Lf / %.2LF = %.2Lf                                          \n", a, b, result);       
        printf("   --   now you can choose another operation                      --   \n");
        printf("                                                                       \n");          
        printf("   -----------------------------------------------------------------   \n");   
        printf("\n\n");

        printf("   type here: "); 
    }    
}

void opPow()
{
    char a[32];
    char *aptr;

    char b[32];
    char *bptr;

    long double a_double;
    long double b_double;

    system("clear");
    printf("\n\n");
    printf("   ------------------------- CALCULATOR ----------------------------   \n");
    printf("   --                                                             --   \n");
    printf("   --   to see how to use this calculator, type help              --   \n");
    printf("   --   to exit the program, type exit                            --   \n");
    printf("   --   available operators: +, -, *, /, pow, root, abs, fact     --   \n");
    printf("   --                                                             --   \n");
    printf("   -- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - --   \n");
    printf("                                                                       \n");
    printf("   --   enter the base (pow)                                      --   \n");   
    printf("                                                                       \n");       
    printf("   --                                                             --   \n");
    printf("                                                                       \n");          
    printf("   -----------------------------------------------------------------   \n");   
    printf("\n\n");

    printf("   type here: "); 
    scanf("%20s", a);
    if (strcmp(a, "exit") == 0) {system("clear"); exit(0);}
    a_double = strtod(a, &aptr);

    printFirstPow(a_double);

    scanf("%20s", b);
    if (strcmp(b, "exit") == 0) {system("clear"); exit(0);}
    b_double = strtod(b, &bptr);
    printSecondPow(a_double, b_double);

}

void printFirstPow(long double a)
{
    system("clear");
    printf("\n\n");
    printf("   ------------------------- CALCULATOR ----------------------------   \n");
    printf("   --                                                             --   \n");
    printf("   --   to see how to use this calculator, type help              --   \n");
    printf("   --   to exit the program, type exit                            --   \n");
    printf("   --   available operators: +, -, *, /, pow, root, abs, fact     --   \n");
    printf("   --                                                             --   \n");
    printf("   -- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - --   \n");
    printf("                                                                       \n");
    printf("   --   enter the exponent - integer (pow)                        --   \n");   
    printf("        %.2Lf ^                                                        \n", a);       
    printf("   --                                                             --   \n");
    printf("                                                                       \n");          
    printf("   -----------------------------------------------------------------   \n");   
    printf("\n\n");

    printf("   type here: ");     
}

void printSecondPow(long double a, long double b)
{
    if (power(a, b).fail == 1)
    {
        system("clear");
        printf("\n\n");
        printf("   ------------------------- CALCULATOR ----------------------------   \n");
        printf("   --                                                             --   \n");
        printf("   --   to see how to use this calculator, type help              --   \n");
        printf("   --   to exit the program, type exit                            --   \n");
        printf("   --   available operators: +, -, *, /, pow, root, abs, fact     --   \n");
        printf("   --                                                             --   \n");
        printf("   -- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - --   \n");
        printf("                                                                       \n");
        printf("   --   wrong exponent!                                           --   \n");   
        printf("                                                                       \n");       
        printf("   --   now you can choose another operation                      --   \n");
        printf("                                                                       \n");          
        printf("   -----------------------------------------------------------------   \n");   
        printf("\n\n");

        printf("   type here: ");
    }
    else
    {
        long double result = power(a, b).ans;
        system("clear");
        printf("\n\n");
        printf("   ------------------------- CALCULATOR ----------------------------   \n");
        printf("   --                                                             --   \n");
        printf("   --   to see how to use this calculator, type help              --   \n");
        printf("   --   to exit the program, type exit                            --   \n");
        printf("   --   available operators: +, -, *, /, pow, root, abs, fact     --   \n");
        printf("   --                                                             --   \n");
        printf("   -- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - --   \n");
        printf("                                                                       \n");
        printf("   --   result                                                    --   \n");   
        printf("        %.2Lf ^ %.0LF = %.2Lf                                          \n", a, b, result);       
        printf("   --   now you can choose another operation                      --   \n");
        printf("                                                                       \n");          
        printf("   -----------------------------------------------------------------   \n");   
        printf("\n\n");

        printf("   type here: "); 
    }    
}

void opRoot()
{
    char a[32];
    char *aptr;

    char b[32];
    char *bptr;

    long double a_double;
    long double b_double;

    system("clear");
    printf("\n\n");
    printf("   ------------------------- CALCULATOR ----------------------------   \n");
    printf("   --                                                             --   \n");
    printf("   --   to see how to use this calculator, type help              --   \n");
    printf("   --   to exit the program, type exit                            --   \n");
    printf("   --   available operators: +, -, *, /, pow, root, abs, fact     --   \n");
    printf("   --                                                             --   \n");
    printf("   -- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - --   \n");
    printf("                                                                       \n");
    printf("   --   enter the base (root)                                     --   \n");   
    printf("                                                                       \n");       
    printf("   --                                                             --   \n");
    printf("                                                                       \n");          
    printf("   -----------------------------------------------------------------   \n");   
    printf("\n\n");

    printf("   type here: "); 
    scanf("%20s", a);
    if (strcmp(a, "exit") == 0) {system("clear"); exit(0);}
    a_double = strtod(a, &aptr);

    printFirstRoot(a_double);

    scanf("%20s", b);
    if (strcmp(b, "exit") == 0) {system("clear"); exit(0);}
    b_double = strtod(b, &bptr);
    printSecondRoot(a_double, b_double);

}

void printFirstRoot(long double a)
{
    system("clear");
    printf("\n\n");
    printf("   ------------------------- CALCULATOR ----------------------------   \n");
    printf("   --                                                             --   \n");
    printf("   --   to see how to use this calculator, type help              --   \n");
    printf("   --   to exit the program, type exit                            --   \n");
    printf("   --   available operators: +, -, *, /, pow, root, abs, fact     --   \n");
    printf("   --                                                             --   \n");
    printf("   -- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - --   \n");
    printf("                                                                       \n");
    printf("   --   enter the root number - integer (root)                    --   \n");   
    printf("        %.2Lf ^ (1/_)                                                     \n", a);       
    printf("   --                                                             --   \n");
    printf("                                                                       \n");          
    printf("   -----------------------------------------------------------------   \n");   
    printf("\n\n");

    printf("   type here: ");     
}

void printSecondRoot(long double a, long double b)
{
    if (root(a, b).fail == 1)
    {
        system("clear");
        printf("\n\n");
        printf("   ------------------------- CALCULATOR ----------------------------   \n");
        printf("   --                                                             --   \n");
        printf("   --   to see how to use this calculator, type help              --   \n");
        printf("   --   to exit the program, type exit                            --   \n");
        printf("   --   available operators: +, -, *, /, pow, root, abs, fact     --   \n");
        printf("   --                                                             --   \n");
        printf("   -- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - --   \n");
        printf("                                                                       \n");
        printf("   --   wrong arguments!                                          --   \n");   
        printf("                                                                       \n");       
        printf("   --   now you can choose another operation                      --   \n");
        printf("                                                                       \n");          
        printf("   -----------------------------------------------------------------   \n");   
        printf("\n\n");

        printf("   type here: ");
    }
    else
    {
        long double result = root(a, b).ans;
        system("clear");
        printf("\n\n");
        printf("   ------------------------- CALCULATOR ----------------------------   \n");
        printf("   --                                                             --   \n");
        printf("   --   to see how to use this calculator, type help              --   \n");
        printf("   --   to exit the program, type exit                            --   \n");
        printf("   --   available operators: +, -, *, /, pow, root, abs, fact     --   \n");
        printf("   --                                                             --   \n");
        printf("   -- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - --   \n");
        printf("                                                                       \n");
        printf("   --   result                                                    --   \n");   
        printf("        %.2Lf ^ (1/%.0LF) = %.2Lf                                          \n", a, b, result);       
        printf("   --   now you can choose another operation                      --   \n");
        printf("                                                                       \n");          
        printf("   -----------------------------------------------------------------   \n");   
        printf("\n\n");

        printf("   type here: "); 
    }    
}

void opAbs()
{
    char a[32];
    char *aptr;

    long double a_double;

    system("clear");
    printf("\n\n");
    printf("   ------------------------- CALCULATOR ----------------------------   \n");
    printf("   --                                                             --   \n");
    printf("   --   to see how to use this calculator, type help              --   \n");
    printf("   --   to exit the program, type exit                            --   \n");
    printf("   --   available operators: +, -, *, /, pow, root, abs, fact     --   \n");
    printf("   --                                                             --   \n");
    printf("   -- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - --   \n");
    printf("                                                                       \n");
    printf("   --   enter a number                                            --   \n");   
    printf("                                                                       \n");       
    printf("   --                                                             --   \n");
    printf("                                                                       \n");          
    printf("   -----------------------------------------------------------------   \n");   
    printf("\n\n");

    printf("   type here: "); 
    scanf("%20s", a);
    if (strcmp(a, "exit") == 0) {system("clear"); exit(0);}
    a_double = strtod(a, &aptr);

    long double result = absolute(a_double).ans;

    system("clear");
    printf("\n\n");
    printf("   ------------------------- CALCULATOR ----------------------------   \n");
    printf("   --                                                             --   \n");
    printf("   --   to see how to use this calculator, type help              --   \n");
    printf("   --   to exit the program, type exit                            --   \n");
    printf("   --   available operators: +, -, *, /, pow, root, abs, fact     --   \n");
    printf("   --                                                             --   \n");
    printf("   -- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - --   \n");
    printf("                                                                       \n");
    printf("   --   result                                                    --   \n");   
    printf("        |%.2Lf| = %.2Lf                                                    \n", a_double, result);       
    printf("   --   now you can choose another operation                      --   \n");
    printf("                                                                       \n");          
    printf("   -----------------------------------------------------------------   \n");   
    printf("\n\n");

    printf("   type here: "); 
}

void opFact()
{
    char a[32];
    char *aptr;

    long double a_double;

    system("clear");
    printf("\n\n");
    printf("   ------------------------- CALCULATOR ----------------------------   \n");
    printf("   --                                                             --   \n");
    printf("   --   to see how to use this calculator, type help              --   \n");
    printf("   --   to exit the program, type exit                            --   \n");
    printf("   --   available operators: +, -, *, /, pow, root, abs, fact     --   \n");
    printf("   --                                                             --   \n");
    printf("   -- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - --   \n");
    printf("                                                                       \n");
    printf("   --   enter a number up to 25                                   --   \n");   
    printf("                                                                       \n");       
    printf("   --                                                             --   \n");
    printf("                                                                       \n");          
    printf("   -----------------------------------------------------------------   \n");   
    printf("\n\n");

    printf("   type here: "); 
    scanf("%20s", a);
    if (strcmp(a, "exit") == 0) {system("clear"); exit(0);}
    a_double = strtod(a, &aptr);

    if (fact(a_double).fail == 1)
    {
        long double result = fact(a_double).ans;

        system("clear");
        printf("\n\n");
        printf("   ------------------------- CALCULATOR ----------------------------   \n");
        printf("   --                                                             --   \n");
        printf("   --   to see how to use this calculator, type help              --   \n");
        printf("   --   to exit the program, type exit                            --   \n");
        printf("   --   available operators: +, -, *, /, pow, root, abs, fact     --   \n");
        printf("   --                                                             --   \n");
        printf("   -- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - --   \n");
        printf("                                                                       \n");
        printf("   --   wrong argument!                                           --   \n");   
        printf("                                                                       \n");       
        printf("   --   now you can choose another operation                      --   \n");
        printf("                                                                       \n");          
        printf("   -----------------------------------------------------------------   \n");   
        printf("\n\n");

        printf("   type here: "); 
    }
    else
    {
        long double result = fact(a_double).ans;

        system("clear");
        printf("\n\n");
        printf("   ------------------------- CALCULATOR ----------------------------   \n");
        printf("   --                                                             --   \n");
        printf("   --   to see how to use this calculator, type help              --   \n");
        printf("   --   to exit the program, type exit                            --   \n");
        printf("   --   available operators: +, -, *, /, pow, root, abs, fact     --   \n");
        printf("   --                                                             --   \n");
        printf("   -- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - --   \n");
        printf("                                                                       \n");
        printf("   --   result                                                    --   \n");   
        printf("        %.0Lf! = %.0Lf                                                    \n", a_double, result);       
        printf("   --   now you can choose another operation                      --   \n");
        printf("                                                                       \n");          
        printf("   -----------------------------------------------------------------   \n");   
        printf("\n\n");

        printf("   type here: "); 
    }
}