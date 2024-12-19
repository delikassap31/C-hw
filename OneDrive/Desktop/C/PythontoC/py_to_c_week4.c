#include <stdio.h>

#include <locale.h>



int main(){
    
    
    const char *kalip = "Aracin degeri:";
    int beygir;
    printf("Aracin beygirini giriniz: ");
    scanf("%d",&beygir);
    if (beygir > 60 & beygir <= 75){
        printf("%s 200.000TL ",kalip);
    }
    else if (beygir > 75 & beygir <= 90){
        printf("%s 350.000TL ",kalip);
    }
    else if (beygir > 90 & beygir <= 110){
        printf("%s 500.000TL ",kalip);
    }
    else if (beygir > 110 & beygir <= 150){
        printf("%s 700.000TL ",kalip);
    }
    else if (beygir > 150 & beygir <= 200){
        printf("%s 1.200.000TL ",kalip);
    }    
    else if (beygir > 200){
        printf("%s 2.000.000TL ",kalip);
    }
    else {
        printf("Hp gecersiz. \n");
    }








    return 0;
}