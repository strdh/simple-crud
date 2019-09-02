#include "struktur.h"
#include <stdio.h>
#include <string.h>

char * terbilang(unsigned long long int nominal, char result[])
{
    char str_angka[][12] = {" ","satu ","dua ","tiga ","empat ","lima ","enam ","tuju ","delapan ","sembilan ","sepuluh ","sebelas "};
    if(nominal < 12)
        strcat(result, str_angka[nominal]);
    else if(nominal < 20)
        strcat(terbilang(nominal - 10, result), "belas ");
    else if(nominal < 100){
        strcat(terbilang(nominal/10, result), "puluh ");
        strcat(terbilang(nominal%10, result), "");
    }else if(nominal < 200){
        strcat(result, "seratus ");
        terbilang(nominal-100, result);
    }else if(nominal < 1000){
        strcat(terbilang(nominal/100, result), "ratus ");
        strcat(terbilang(nominal%100, result), "");
    }else if(nominal < 2000){
        strcat(result, "seribu ");
        terbilang(nominal-1000, result);
    }else if(nominal < 1000000){
        strcat(terbilang(nominal/1000, result), "ribu ");
        strcat(terbilang(nominal%100, result), "");
    }else if(nominal < 1000000000){
        strcat(terbilang(nominal/1000000, result), "juta ");
        strcat(terbilang(nominal%1000000, result), "");
    }else if(nominal < 1000000000000){
        strcat(terbilang(nominal/1000000000, result), "miliar ");
        strcat(terbilang(nominal%1000000000, result), "");
    }
    return result;
}

void showAllData(wajib_pajak data_wp[], int n)
{
    for(int i = 0; i<n; i++){
        printf("NOP : %d", data_wp[i].nop);
    }
}


void inputData(wajib_pajak data_wp[], int n);
