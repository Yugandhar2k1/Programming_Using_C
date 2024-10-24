#include <stdio.h>
#include <string.h>

int main() {
    int total_houses;
    scanf("%d", &total_houses);
    
    char input_grids[total_houses + 1];
    scanf("%s", input_grids);
    
    int flag = 0;  
    
    for (int i = 0; i < total_houses; i++) 
    {
        if (input_grids[i] == 'H' && input_grids[i + 1] == 'H') {
            flag = 1; 
            break;
        }
    }
    if (flag == 0) 
    {  
        printf("YES\n");
        for (int i = 0; i < total_houses; i++) 
        {
            if (input_grids[i] == '.') 
            {
                input_grids[i] = 'B';  
            }
        }
        printf("%s\n", input_grids);
    } else 
    {
        printf("NO\n"); 
    }
    return 0;
}
