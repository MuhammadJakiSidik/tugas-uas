#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    cout<<"============================================"<<endl;
    cout<<"Nama : M.Jaki Sidik "<<endl;
    cout<<"NIM  : 2230511123 "<<endl;
    cout<<"Kelas: C "<<endl;
    cout<<"============================================"<<endl;
    
    cout<<" "<<endl;
    const string KANTIN = "Wulandari";
    
    cout<<"Selamat Datang Di Kantin "<<KANTIN;
    cout<<" "<<endl<<endl;
    
    int pilih,totalMakanan,jumlah,hasil=0;
    char pilihanMakanan,yesNo;
    int diskon =1000;
    int x =10;
    int totalAkhirPesanan[x];
    
    do{
      
    cout<<"Menu Makanan Kantin Wulandari "<<endl;
    cout<<"1.Menu Utama"<<endl;
    cout<<"2.Cemilan"<<endl;
    cout<<"3.Menu Special"<<endl<<endl;
       
       
       
         cout<<"Masukan menu yang di pilih : ";
         cin >>pilih;
         
         
         switch(pilih){
        case 1:
          cout<<"List Makanan Menu Utama"<<endl;
          cout<<"A.  Nasi Ayam Penyet\t\t\t\t\t\t\t\t\t\t\t\t: Rp.25.000,00"<<endl;
          cout<<"B.  Nasi Ayam Penyet Sambel ijo\t\t\t\t\t: Rp.25.000,00"<<endl;
          cout<<"C.  Pecel Ayam\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t: Rp.25.000,00"<<endl;
          cout<<"D.  Cumi Asin Balado\t\t\t\t\t\t\t\t\t\t\t\t: Rp.25.000,00"<<endl;
          cout<<"E.  Tahu Balado\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t: Rp.10.000,00"<<endl;
          cout<<"F.  Sayur Asem\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t: Rp.10.000,00"<<endl;
          cout<<"G.  Telur Balado\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t: Rp.10.000,00"<<endl;
      
       cout<<"Masukan Pilihan Makanan : ";
       cin >>pilihanMakanan;
       
       if(pilihanMakanan == 'A' || pilihanMakanan == 'a'){
         totalMakanan = 25000;
       }else if(pilihanMakanan == 'B' || pilihanMakanan == 'b'){
         totalMakanan = 25000;
       }else if(pilihanMakanan == 'C' || pilihanMakanan == 'c'){
         totalMakanan = 25000;
       }else if(pilihanMakanan == 'D' || pilihanMakanan == 'd'){
         totalMakanan = 25000;
       }else if(pilihanMakanan == 'E' || pilihanMakanan == 'e'){
         totalMakanan = 10000;
       }else if(pilihanMakanan == 'F' || pilihanMakanan == 'f'){
         totalMakanan = 10000;
       }else if(pilihanMakanan == 'G' || pilihanMakanan == 'g'){
         totalMakanan = 10000;
       }else{
         cout<<"Makanan Tidak Tersedia Di Menu !!!"<<endl<<endl; 
       }
       
      cout<< "Berapa porsi makanan yang ingin di pesan ? : ";
      cin>>jumlah;
      
      totalAkhirPesanan[x]=totalMakanan*jumlah;
      
      cout<<"Apakah Anda Ingin Memesan Lagi ? : ";
      cin>>yesNo;
      
      break;
      case 2:
      cout<<"List Cemilan Yang Tersedia"<<endl;
      cout<<"A.  Risol Mayo (3pc)\t\t\t\t\t\t\t\t\t\t\t\t\t: Rp.15.000,00"<<endl;
      cout<<"B.  Gabin Tape\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t: Rp.15.000,00"<<endl;
      cout<<"C.  Tahu Bakso\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t: Rp.15.000,00"<<endl;
      cout<<"D.  Indomie Polos\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t: Rp.10.000,00"<<endl;
      cout<<"E.  Cireng Bumbu Rujak\t\t\t\t\t\t\t\t\t\t: Rp.15.000,00"<<endl;
      cout<<"F   French Fries\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t: Rp.15.000,00"<<endl;
      
      cout<<"Masukan Pilihan Makanan : ";
      cin >>pilihanMakanan;
      
      if(pilihanMakanan == 'A' || pilihanMakanan == 'a'){
         totalMakanan = 15000;
       }else if(pilihanMakanan == 'B' || pilihanMakanan == 'b'){
         totalMakanan = 15000;
       }else if(pilihanMakanan == 'C' || pilihanMakanan == 'c'){
         totalMakanan = 15000;
       }else if(pilihanMakanan == 'D' || pilihanMakanan == 'd'){
         totalMakanan = 10000;
       }else if(pilihanMakanan == 'E' || pilihanMakanan == 'e'){
         totalMakanan = 15000;
       }else if(pilihanMakanan == 'F' || pilihanMakanan == 'f'){
         totalMakanan = 15000;
       }else{
         cout<<"Makanan Tidak Tersedia Di Menu !!!"<<endl<<endl;
       }
       cout<< "Berapa porsi makanan yang ingin di pesan ? : ";
       cin>>jumlah;
         
       totalAkhirPesanan[x]=totalMakanan*jumlah;
      
       cout<<"Apakah Anda Ingin Memesan Lagi ? : ";
       cin>>yesNo;
       
       break;
       case 3:
       cout<<"List Makanan Menu Special"<<endl;
       cout<<"A.  Nasi Goreng\t\t\t\t\t\t\t\t\t\t\t\t\t: Rp.20.000,00"<<endl;
       cout<<"B.  Indomie Tek-Tek\t\t\t\t\t\t\t\t\t\t\t: Rp.20.000,00"<<endl;
       cout<<"C.  Soto Ayam\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t: Rp.20.000,00"<<endl;
       
       cout<<"Masukan Pilihan Makanan : ";
       cin >>pilihanMakanan;
       
       if(pilihanMakanan == 'A'|| pilihanMakanan == 'a'){
         totalMakanan = 20000;
       }else if(pilihanMakanan == 'B' || pilihanMakanan == 'b'){
         totalMakanan = 20000;
       }else if(pilihanMakanan == 'C' || pilihanMakanan == 'c'){
         totalMakanan =20000;
       }else{
         cout<<"Makanan Tidak Tersedia Di Menu !!!"<<endl<<endl;
       }
       
       cout<<"Berapa porsi makanan yang ingin di pesan ? : ";
       cin>>jumlah;
       
       totalAkhirPesanan[x]=totalMakanan*jumlah;
       
       cout<<"Apakah Anda Ingin Memesan Lagi ? : ";
       cin>>yesNo;
       
       break;
 
       } x++;
   
         
       }while(yesNo == 'Y' || yesNo == 'y');
        cout<<""<<endl;
        cout<<"Pembayaran : "<<endl;
        
        for(int i=0; i<x; i++){
          
         hasil = hasil + totalAkhirPesanan[i];
         
        }
        
        cout<<"Total Pesanan Makanan : "<<hasil<<endl;
        cout<<"Diskon Kantin 10000% : "<<hasil/diskon<<endl;
        cout<<"Total Yang Harus Anda Bayar : "<<hasil-(hasil/diskon)<<endl;
        
    
    
    
}  