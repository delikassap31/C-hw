#include <stdio.h>
#include <stdbool.h>

int main(){

    // for (int i = 0; i <= 100; i+2)
    // {
    //     printf("%d\n",i);

    // }
// --------------------------------------------------------------------
    // for (int i = 0; i <= 100; i++ )
    // {
    //  if (i % 2 != 0)
    //  {  
    //     printf("%d\n",i);
    //  }   
    // }

// -------------------------------------------------------------------------

    // for (int i = 0; i <=100; i++)
    // {
    //     if (i % 2 != 0)
    //     {
    //         continue;
    //     }
    //     printf("%d\n",i);
    // }
// ----------------------------------------------------------------------------

    // int number = 0;
    // while (number <= 100)
    // {
    //     printf("%d\n",number);
    //     number+=2;
    // }
    
// ------------------------------------------------------------------------------
    // int number = 0;
    // while (true)
    // {
    //     if (number % 2 != 0)
    //     {
    //         printf("%d\n",number);
    //     }
    //     number ++;
    //     if (number == 101)
    //     {
    //         break;
    //     }
    
    // }
//--------------------------------------------------------------------------------
    const char *students[] = {"Ahmet","Onur","Mehmet","Enes","Oguz"};
    for (int i = 0; i<5; i++)
    {
        if (students[i] == "Mehmet")
        {
            printf("%s : %d\n",students[i],100);
        }
        else 
        {
            printf("%s : %d\n",students[i],50);
        }
    }

//--------------------------------------------------------------------------------
    // for (int i = 1; i <=10; i++)
    // {
    //     if (i >= 5)
    //     {
    //         continue;
    //     }
    //     printf("%d\n",i);
    
    // }
        
    
//-----------------------------------------------------------------------------------
    // for(int i = 1; i < 4; i++)
    // {
    //     for(int j = 1; j < 4; j++)
    //     {
    //         for(int z = 1; z <4; z++)
    //             {
    //                 printf("(%d, %d, %d )",i,j,z);
    //             }
    //     printf("\n");    
    //     }
    //     printf("\n");
    // }
    
//---------------------------------------------------------------------------------

    // for (int i = 1;i < 6; i++ ){
    //     for (int j = 1; j <6; j++){
    //         printf("(%d x %d = %d),",i,j,i*j);


    //     }
    //     printf("\n");
    // }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}