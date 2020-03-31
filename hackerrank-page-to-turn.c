#include <stdio.h>


int main()
{
    int n, p, p_turn, p_turn_back, to_add = 0;

    scanf("%d", &n);
    scanf("%d", &p);

    p_turn = p/2;
    p_turn_back = (n - p)/2;
    if((n - 1) == p && n%2 == 0){
        printf("1");
        return 0;
    }
    
    if(p_turn <= p_turn_back){
        printf("%d", p_turn);
        return 0;
    }
    printf("%d", p_turn_back);
}
