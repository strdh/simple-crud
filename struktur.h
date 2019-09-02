#ifndef STRUKTUR_H_INCLUDED
#define STRUKTUR_H_INCLUDED

typedef struct{
  int yy;
  int mm;
  int dd;
}date;

typedef struct{
  int hour;
  int minute;
  int second;
}time;

typedef struct{
  char action[30];
  date log_date;
  time log_time;
}log;

typedef struct{
  char nama_jalan[50];
  int no_jalan;
  char desa[50];
  int rt;
  int rw;
  char kecamatan[50];
  char kabupaten[50];
}alamat;

typedef struct{
  char objek_pajak[50];
  float luas;
  char kelas[30];
  int per_m;
  int total;

}njop;

typedef struct{
   int nop;
  char nama_wajib_pajak[50];
  alamat alamat_wajib_pajak;
  alamat letak_objek_pajak;
  njop njop_bumi;
  njop njop_bangunan;
  int njoptkp;
  int pbb_terutang;
  char total_terbilang[100];
  date jatuh_tempo;
  char tempat_pembayaran[30];
  char status[20];
}wajib_pajak;

#endif // STRUKTUR_H_INCLUDED
