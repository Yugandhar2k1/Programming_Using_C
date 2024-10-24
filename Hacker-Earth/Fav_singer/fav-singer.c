#include <stdio.h>

void fav_singer(int Singers[], int N);
int main() 
{
    int N;
    printf("Enter Playlist Number: ");
    scanf("%d", &N);

    int Singers[N];

    printf("Enter Singers: ");
    for (int i = 0; i < N; i++) 
    {
        scanf("%d", &Singers[i]);
    }
    fav_singer(Singers,N);
    return 0;
}
void fav_singer(int Singers[], int N)
{
    int count=0, dup=1;
    for (int i = 0; i < N; i++)
    {
        for (int j = i+1; j < N; j++)
        {
            if (Singers[i]==Singers[j])
            {
                count++;
                break;
            }
            else if(Singers[i]!=Singers[j])
            {
                dup = N;
            }
        }   
    }
    if (count > 0)
    {
        printf("Fav singers: %d", count);
    }
    else
    {
    printf("Fav singers: %d", dup); 
    }
      
}