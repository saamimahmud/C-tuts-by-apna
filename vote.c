#include <stdio.h>
int main()
{
    int vote_age;
    printf("Input your Age:\n");
    scanf("%d",&vote_age);
    if(vote_age<18)
    {
        printf("Sorry, you are not eligible to Vote.\n");
        printf("You would be able to caste your vote after %d year.\n",18-vote_age);
    }
    else
     printf("Congratulations! you are eligible to Vote.\n");
}