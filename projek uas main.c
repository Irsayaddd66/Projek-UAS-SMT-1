#include <stdio.h>
#include <stdlib.h>

int main()
{
    char kode_jurusan;
    int jumlah_beli, kode_member, harga,diskon,bayar,rumus_diskon,ulang;
    printf("==========================\n");
    printf("| PROGRAM TIKET KERETA    |\n");
    printf("==========================\n");
    printf("\n");

    do
    {
    printf("============= PEMESANAN TIKET ================\n");
    printf("\n");

    printf("|---------A JURUSAN JAKARTA---------|\n\n");
    printf("|                                   |\n");
    printf("|                                   |\n");
    printf("|                                   |\n");
    printf("|                                   |\n");
    printf("|---------B JURUSAN BANDUNG---------|\n\n");
    printf("|                                   |\n");
    printf("|                                   |\n");
    printf("|                                   |\n");
    printf("|                                   |\n");
    printf("|---------C JURUSAN YOGYAKARTA------|\n\n");
    printf("Kode Jurusan [A/B/C] = "); scanf("%c",&kode_jurusan);
    printf("Jumlah Beli          = "); scanf("%d",&jumlah_beli);
    printf("\nMember 1 Diskon   :75%\n");
    printf("\nMember 2 Diskon   :25%\n");
    printf("\nMember 3 Diskon   :50%\n");
    printf("\n");
    printf("\n\n---------Enjoy Dengan Menggunakan Kartu Member Anda---------\n\n");
    printf("Kode Member  [1/2/3] = "); scanf("%d", &kode_member);
    printf("\n");
    switch(kode_jurusan){
    // <-- KODE VERSI 2, 1/2 -->
    case 'A':
        harga = 50000;
        datass(kode_jurusan,jumlah_beli,kode_member,harga,diskon,bayar,rumus_diskon);
        break;
    case 'B':
        harga = 40000;
        datass(kode_jurusan,jumlah_beli,kode_member,harga,diskon,bayar,rumus_diskon);
        break;
    case 'C':
        harga = 30000;
        datass(kode_jurusan,jumlah_beli,kode_member,harga,diskon,bayar,rumus_diskon);
        break;
    default:
        printf("================================================\n");
        printf("Error : Kode Jurusan %c Tidak Terdaftar\n", kode_jurusan);
    }
    printf("Apakah anda ingin memesan tiket lagi?\n");
    printf("IYA TEKAN 1\n");
    printf("TIDAK TEKAN 2\n");
    scanf("%d", &ulang);
    }
    while(ulang=1);
    return 0;
     // <-- BATAS KODE VERSI 2, 1/2 -->
    /* <-- VERSI 1 :  JIKA CUMA MAU PAKE 1 FUNCTION NON-AKTIFKAN KODE INI DAN HAPUS KODE VERSI 2;-->
    case 'A':
        printf("============= DETAIL PEMBELIAN ===============\n");
        printf("JURUSAN              = Jakarta\n");
        printf("JUMLAH BELI          = %d\n",jumlah_beli);
        printf("HARGA SATUAN         = %d\n",harga);
        printf("TOTAL BELI           = %d\n",harga * jumlah_beli);
        //validasi kode member
        if(kode_member == 1){
            diskon = 20;
            printf("DISKON               = %d\n", diskon);
        }
        else if(kode_member == 2){
            diskon = 10;
            printf("DISKON               = %d\n", diskon);
        }
        else if(kode_member == 3){
            diskon = 50;
            printf("DISKON               = %d\n", diskon);
        }
        else{
            printf("==============================================\n");
            printf("Error : Kode Member %d Tidak Teradaftar\n", kode_member);
        return 0;
        printf("\n");
        }
        rumus_diskon = (harga * jumlah_beli) * diskon / 100;
        printf("TOTAL BAYAR          = %d\n",(harga * jumlah_beli) - rumus_diskon);
        printf("\n");
        printf("================ PEMBAYARAN ==================\n");
        printf("BAYAR                = ");scanf("%d",&bayar);
        if(bayar < (harga * jumlah_beli) - rumus_diskon){
            printf("UANG MASIH KURANG    = %d\n",abs(bayar -((harga * jumlah_beli) - rumus_diskon)) );
        }
        else{
            printf("KEMBALIAN            = %d\n",bayar -((harga * jumlah_beli) - rumus_diskon));
            printf("");
        }
        break;
    case 'B':
        printf("============= DETAIL PEMBELIAN ===============\n");
        printf("JURUSAN              = Bandung\n");
        printf("JUMLAH BELI          = %d\n",jumlah_beli);
        printf("HARGA SATUAN         = %d\n",harga);
        printf("TOTAL BELI           = %d\n",harga * jumlah_beli);
        //validasi kode member
        if(kode_member == 1){
            diskon = 20;
            printf("DISKON               = %d\n", diskon);
        }
        else if(kode_member == 2){
            diskon = 10;
            printf("DISKON               = %d\n", diskon);
        }
        else if(kode_member == 3){
            diskon = 50;
            printf("DISKON               = %d\n", diskon);
        }
        else{
            printf("==============================================\n");
            printf("Error : Kode Member %d Tidak Teradaftar\n", kode_member);
        return 0;
        printf("\n");
        }
        rumus_diskon = (harga * jumlah_beli) * diskon / 100;
        printf("TOTAL BAYAR          = %d\n",(harga * jumlah_beli) - rumus_diskon);
        printf("\n");
        printf("================ PEMBAYARAN ==================\n");
        printf("BAYAR                = ");scanf("%d",&bayar);
        if(bayar < (harga * jumlah_beli) - rumus_diskon){
            printf("UANG MASIH KURANG    = %d\n",abs(bayar -((harga * jumlah_beli) - rumus_diskon)) );
        }
        else{
            printf("KEMBALIAN            = %d\n",bayar -((harga * jumlah_beli) - rumus_diskon));
            printf("");
        }
        break;
    case 'C':
        printf("============= DETAIL PEMBELIAN ===============\n");
        printf("JURUSAN              = Yogyakarta\n");
        printf("JUMLAH BELI          = %d\n",jumlah_beli);
        printf("HARGA SATUAN         = %d\n",harga);
        printf("TOTAL BELI           = %d\n",harga * jumlah_beli);
        //validasi kode member
        if(kode_member == 1){
            diskon = 20;
            printf("DISKON               = %d\n", diskon);
        }
        else if(kode_member == 2){
            diskon = 10;
            printf("DISKON               = %d\n", diskon);
        }
        else if(kode_member == 3){
            diskon = 50;
            printf("DISKON               = %d\n", diskon);
        }
        else{
            printf("==============================================\n");
            printf("Error : Kode Member %d Tidak Teradaftar\n", kode_member);
        return 0;
        printf("\n");
        }
        rumus_diskon = (harga * jumlah_beli) * diskon / 100;
        printf("TOTAL BAYAR          = %d\n",(harga * jumlah_beli) - rumus_diskon);
        printf("\n");
        printf("================ PEMBAYARAN ==================\n");
        printf("BAYAR                = ");scanf("%d",&bayar);
        if(bayar < (harga * jumlah_beli) - rumus_diskon){
            printf("UANG MASIH KURANG    = %d\n",abs(bayar -((harga * jumlah_beli) - rumus_diskon)) );
        }
        else{
            printf("KEMBALIAN            = %d\n",bayar -((harga * jumlah_beli) - rumus_diskon));
            printf("");
        }
        break;
    default:
        printf("================================================\n");
        printf("Error : Kode Jurusan %c Tidak Terdaftar\n", kode_jurusan);
    }
    system("pause");
    return 0;
    <-- BATAS KOMENTAR VERSI 1-->
    */
}
 // <-- KODE VERSI 2, 2/2 -->
void datass(char kode_jurusan,int jumlah_beli,int kode_member,int harga,int diskon,int bayar,int rumus_diskon){
    printf("============= DETAIL PEMBELIAN ===============\n");
    //validasi kode jurusan
    if(kode_jurusan == 'A'){
        printf("JURUSAN              = Jakarta\n");
    }
    else if(kode_jurusan == 'B'){
        printf("JURUSAN              = Bandung\n");
    }
    else {
        printf("JURUSAN              = Yogyakarta\n");
    }

    printf("JUMLAH BELI          = %d\n",jumlah_beli);
    printf("HARGA SATUAN         = %d\n",harga);
    printf("TOTAL BELI           = %d\n",harga * jumlah_beli);
    //validasi kode member
    if(kode_member == 1){
        diskon = 75;
        printf("DISKON               = %d\n", diskon);
    }
    else if(kode_member == 2){
        diskon = 25;
        printf("DISKON               = %d\n", diskon);
    }
    else if(kode_member == 3){
        diskon = 50;
        printf("DISKON               = %d\n", diskon);
    }
    else{
        printf("==============================================\n");
        printf("Error : Kode Member %d Tidak Teradaftar\n", kode_member);
        return 0;
        printf("\n");
    }
    rumus_diskon = (harga * jumlah_beli) * diskon / 100;
    printf("TOTAL BAYAR          = %d\n",(harga * jumlah_beli) - rumus_diskon);
    printf("\n");
    printf("================ PEMBAYARAN ==================\n");
    printf("BAYAR                = ");scanf("%d",&bayar);
    if(bayar < (harga * jumlah_beli) - rumus_diskon){
        printf("UANG MASIH KURANG    = %d\n",abs(bayar -((harga * jumlah_beli) - rumus_diskon)) );
    }
    else{
        printf("KEMBALIAN            = %d\n",bayar -((harga * jumlah_beli) - rumus_diskon));
    }
}
 // <-- BATAS KODE VERSI 2, 2/2 -->
