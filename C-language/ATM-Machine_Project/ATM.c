#include <stdio.h>
#include <conio.h>
int th = 1000, tt = 1000, tf = 1000, ttt = 1000; // global varible
int main()
{
    int rs100, rs200, rs500, rs2000, amount; // local varible
    long int avlmoney;
    puts("Enter amount : ");
    scanf("%d", &amount);
    if (amount % 100 != 0)
    {
        puts("Error : You have entered invalid amount !");
        return;
    }
    avlmoney = th * 100 + tt * 200 + tf * 500 + ttt * 2000;
    if (amount > avlmoney)
    {
        puts("Sorry ! Insufficint fund ");
        return;
    }
    // check the 2000 rupee currency note
    rs2000 = amount / 2000;
    if (rs2000 > ttt)
    {
        rs2000 = ttt;
    }
    ttt = ttt - rs2000;
    amount = amount - rs2000 * 2000;

    // check the 500 rupee currency note
    rs500 = amount / 500;
    if (rs500 > tf)
    {
        rs500 = tf;
    }
    tf = tf - rs500;
    amount = amount - rs500 * 500;

    // check the 200 rupee currency note
    rs200 = amount / 200;
    if (rs200 > tt)
    {
        rs200 = tt;
    }
    tt = tt - rs200;
    amount = amount - rs200 * 200;

    // check the 100 rupee currency note
    rs100 = amount / 100;
    if (rs100 > th)
    {
        rs100 = th;
    }
    th = th - rs100;
    amount = amount - rs100 * 100;

    // If the amount is not 0, the transaction will failed.
    if (amount > 0)
    {
        puts("Error : Tramsacation failed plz try again !");
        ttt = ttt + rs2000;
        tf = tf + rs500;
        tt = tt + rs200;
        th = th + rs100;
        return;
    }

    // If the amount is successfully 0, then print the amount.
    printf("2000 * %d = %d\n", rs2000, rs2000 * 2000);
    printf("500 * %d = %d\n", rs500, rs500 * 500);
    printf("200 * %d = %d\n", rs200, rs200 * 200);
    printf("100 * %d = %d\n", rs100, rs100 * 100);
}
