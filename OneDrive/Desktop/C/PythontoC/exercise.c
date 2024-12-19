#include <stdio.h>
#include <string.h>
#include <math.h>


int number_checker(int a,int b,int c,int d,int e){

    if (a == b | a == c | a == d | a == e){
        printf("There are at least 2 equal numbers.");
    }
    else if (b == c | b == d | b == e){
        printf("There are at least 2 equal numbers.");
    }
    else if (c == d | c == e){
        printf("There are at least 2 equal numbers.");
    }
    else if (d == e){
        printf("There are at least 2 equal numbers.");
    }
    else {
        printf("No equal numbers.");
    }

}


  
int main(){
    
// -----------------------------------------------------------------------
    // int anlik_saat;
    // printf("What time is it now?");
    // scanf("%d",&anlik_saat);
    // int bekleme_süresi;
    // printf("How long are you gonna wait?");
    // scanf("%d",&bekleme_süresi);
    // int alarm_saati = (anlik_saat + bekleme_süresi) % 24;

    // if (alarm_saati < 12){
    //     printf("Alarm saati: %da.m \n",alarm_saati);
    // }
    // else {
    //     printf("Alarm saati: %dp.m \n",alarm_saati);
    // }

//----------------------------------------------------------------------------

// const char *gunler[] = {"Pazartesi","Sali","Carsamba","Persembe","Cuma","Cumartesi","Pazar"};
// char gidis_gunu_Str[21];
// int sure;
// int gidis_gunu;
// printf("Which day?");
// scanf("%s",&gidis_gunu_Str);
// printf("For how long?");
// scanf("%d",&sure);

// for (int i = 0; i < 7; i++){
//     if (strcmp(gidis_gunu_Str,gunler[i]) == 0){
//         gidis_gunu = i;
//         break;
//     }

// }

// int donus_gunu;
// donus_gunu = (gidis_gunu + sure) % 7;

// printf("Donus gunu: %s\n",gunler[donus_gunu]);

//-------------------------------------------------------------------------------------------

    // int Anapara = 10000;
    // int number_of_times_compounded = 12;
    // float faiz_orani = 0.08;
    // int kac_yil;
    // printf("How many years?");
    // scanf("%d",&kac_yil);
    // float ust = number_of_times_compounded * kac_yil;
    // float final_amount = Anapara * pow((1 + faiz_orani/number_of_times_compounded),ust);

    // printf("Final amount: %.2f\n",final_amount);

//--------------------------------------------------------------------------------------------------

    int a;
    int b;
    int c;
    int d;
    int e;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Enter the third number: ");
    scanf("%d",&c);
    printf("Enter the fourth number: ");
    scanf("%d",&d);
    printf("Enter the fifth number: ");
    scanf("%d",&e);

    number_checker(a,b,c,d,e);

    
    
    
    
    
    
    
    
    
    
    
    return 0;
}