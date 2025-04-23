#include <stdio.h>
const char* get_winner(int Testcase);

int main() {
    int Testcase, Input;

    scanf("%d", &Testcase);  // Membaca jumlah testcase yang ada dalam pertanyaan

    for(int i = 0; i < Testcase; i++) 
    {
        scanf("%d", &Input);  // Membaca input dari tiap testcase
        printf("%s\n", get_winner(Input));
    }

    
    return 0;
}

const char* get_winner(int Testcase)
{
    if(Testcase % 3 == 0)
    {
        return("Alice");
    }
    else
    {
        return("Alice");
    }
}