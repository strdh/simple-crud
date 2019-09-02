#include "struktur.h"
#include "mainLib.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

wajib_pajak data_wp[] = {NULL};
int n = 0;

void start(wajib_pajak data_wp[])
{
    wajib_pajak temp_data_wp;
    FILE * record = fopen("recordRD.txt", "r");
    if(!record)
        record = fopen("recordRD.txt", "w");
    while(!feof(record)){
        fscanf(record, "%[#^]#%[#^]#%[#^]#%[#^]#%[#^]#%[#^]#%[#^]#%[#^]#%[#^]#%[#^]#%[#^]#%[#^]#%[#^]#%[#^]#%[#^]#%[#^]#%d#%d#%d#%d#%d#%d#%.1f#%d#%d#%.1f#%d#%d#%d#%d#%d#%d#%d",&temp_data_wp.nama_wajib_pajak,&temp_data_wp.alamat_wajib_pajak.nama_jalan,&temp_data_wp.alamat_wajib_pajak.desa, &temp_data_wp.alamat_wajib_pajak.kecamatan,&temp_data_wp.alamat_wajib_pajak.kabupaten,
                        &temp_data_wp.letak_objek_pajak.nama_jalan, &temp_data_wp.letak_objek_pajak.desa,&temp_data_wp.letak_objek_pajak.kecamatan,&temp_data_wp.letak_objek_pajak.kabupaten,
                        &temp_data_wp.njop_bumi.objek_pajak,&temp_data_wp.njop_bumi.kelas,
                        &temp_data_wp.njop_bangunan.objek_pajak, &temp_data_wp.njop_bangunan.kelas,
                        &temp_data_wp.tempat_pembayaran, &temp_data_wp.total_terbilang,
                        &temp_data_wp.alamat_wajib_pajak.no_jalan,&temp_data_wp.alamat_wajib_pajak.rt,&temp_data_wp.alamat_wajib_pajak.rw,
                        &temp_data_wp.letak_objek_pajak.no_jalan,&temp_data_wp.letak_objek_pajak.rt,&temp_data_wp.letak_objek_pajak.rt,
                        &temp_data_wp.njop_bumi.luas,&temp_data_wp.njop_bumi.per_m,&temp_data_wp.njop_bumi.total,
                        &temp_data_wp.njop_bangunan.luas,&temp_data_wp.njop_bangunan.per_m,&temp_data_wp.njop_bangunan.total,
                        &temp_data_wp.njoptkp,&temp_data_wp.pbb_terutang,&temp_data_wp.jatuh_tempo.yy,&temp_data_wp.jatuh_tempo.mm,&temp_data_wp.jatuh_tempo.dd);fflush(stdin);

        printf("NAMA WAJIB PAJAK : %s\n", temp_data_wp.nama_wajib_pajak);
    }
}

void listenCommand(int command)
{
    system("cls");
    char pilihan;
    static char result[100];
    unsigned long long int nominal;
    if(command == 1){
        start(data_wp);
        re:
        printf("TEKAN UNTUK Y UNTUK KEMBALI KE MENU : ");scanf("%c", &pilihan);
        if(pilihan == 'y' || pilihan == 'Y')
            goto re;
    }else if(command == 2){
        re2:

        printf("APAKAH INGIN MENGINPUT LAGI (Y/N) : ");scanf("%c", &pilihan);
        if(pilihan == 'Y' || pilihan == 'y')
            goto re2;
    }
}

void mainMenu()
{
    int i = 1, command;
    while(i){
        system("cls");
        printf("1.LIHAT DATA\n");
        printf("2.INPUT DATA\n");
        printf("3.EDIT DATA\n");
        printf("4.DELETE DATA\n");
        printf("PILIH NOMER MENU : ");scanf("%d", &command);
        listenCommand(command);
    }
}
