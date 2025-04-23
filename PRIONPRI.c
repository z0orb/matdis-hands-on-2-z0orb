#include <stdio.h>
int primeChecker(int n);
int primeChecker(int n)
{
    for(int i = 2; i * 1LL * i <= n; i++)
    {
        if(n % i == 0)
        {
            return 2; // n adalah non prima (memiliki pembagi)
        }
    }

    return 1; // n adalah bilangan prima

}
int main()
{
    int testcase;
    scanf("%d", &testcase);

    for(int i = 0; i < testcase; i++)
    {
        int x;
        scanf("%d", &x);
        if(primeChecker(x) == 1)
        {
            printf("YES\n");
        }
        else if(primeChecker(x) == 2)
        {
            printf("NO\n");
        }
    }
}