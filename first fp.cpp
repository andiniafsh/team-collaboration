#include <iostream> // Library untuk mendeklarasikan bahasa C++
#include <stdlib.h> //Library untuk menerapkan fungsi clearscreen
#include<stdio.h> //input output
#include<conio.h> //antarmuka consol
#include<iomanip> //untuk tampilan tabel

/*
Judul  Program             : Sistem Antrian KTM
Materi DiImplementasikan   :
a. Queue
b. linked list

Anggota
1. Andini Fitriyah Salsabilah      (21081010217)
2. Farrel Tiuraka Vierino          (21081010222)
3. Acaya Fazrin                    (21081010236)
4. Lintang Sari Putri Wardhani     (21081010247)
5. Talitha Bertha Arvyandita       (21081010253)

*/

using namespace std;

//list fungsi
void pilih(int pil);
void addQueue(); //enqueue
void deleteQueue(); //dequeue
void clear(); //clear all
void printQueue(); //tampilan
void takethequeue(); //tampilan

int x = 5, tambahanggota;
int r = 10;
int pil;
// Urutan
typedef int angka;
angka urutan = 1;

// Struct untuk menampung data pegawai bank
struct data
{
    string username[100] = {"akudini", "akuacaya", "akutalita", "akufarrel", "akulintang"};
    string nama[100] = {"Andini Fitriyah ", "Acaya Fazrin ", "Thalita Bertha ", "Farrel", "Lintang"};
    string alamat[100] = {"Surabaya", "Gresik  ", "Malang", "Sidoarjo", "Lamongan"};
    string prodi[100] = {"informatika", " Sains data", "kimia", "Hukum", "Agribisnis"};
} pegawaibank;

// Struct Untuk menampung data Queue
// Tipe data struct
struct antrean_ktm
{
    string nama;
    string npm; 
	string no_hp;
	string prodi;
	string fak;  
	int no_antri;
    antrean_ktm *next;
};

int max_queue=5;
antrean_ktm *head, *tail, *current, *hapus, *newNode;

// Menghitung jumlah antrian
int count()
{

}

// Mengecek apakah antrian penuh?
bool isFull(){

}

// Mengecek apakah antrian kosong?
bool isEmpty(){
	
}

// Fungsi Enqueue
void addQueue(){
	
}

//menampilkan silahkan menunggu nomer anda dipanggil
void takethequeue()
{
    int nomer;
    float total;
    if (!isFull())
    {
        system("CLS");
        cout << endl;
        cout << " -----------------------------------------------" << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "                     SUKSES!!" << endl;
        cout << "      Silahkan Menunggu Nomer Anda dipanggil" << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << " -----------------------------------------------" << endl;
        system("pause");
        system("CLS");
    }
    else
    {

        system("CLS");
        cout << endl;
        cout << " -----------------------------------------------" << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "               ANTRIAN TELAH PENUH !!!" << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << " -----------------------------------------------" << endl;
        system("pause");
    }
}

// Fungsi Dequeue
void deleteQueue(){
	
}

// Fungsi Menghapus semua antrian
void clear(){
	
}

// Fungsi tampilkan antrian
void printQueue()
{
	system("clear");
	

}

void dekorasi1()
{
    cout << "========================================================\n";
}

// Tampilan Layanan Menu Antrian
void headerantrian()
{
    cout << "========================================================\n";
    cout << "                ANTRIAN LAYANAN KTM                     \n";
    cout << "========================================================\n";
    cout << endl;
    cout << "|  LAYANAN ADMINISTRASI                                    |" << endl;
    cout << "| 1. Tambah Antrian                                        |" << endl;
    cout << "| 2. Panggil Antrian                                       |" << endl;
    cout << "| 3. Lihat Antrian                                         |" << endl;
    cout << "| 4. Hapus Semua Antrian                                   |"<<endl;
	cout<<  "| 5. Kembali ke menu utama                                 |"<<endl;
    cout << "========================================================\n";
}
// Tampilan Utama Program
void headermenu()
{
    cout << " =======================================================\n";
    cout << "|                 PROGRAM PENGAMBILAN KTM              |\n";
    cout << "|                                                       |\n";
    cout << "|                 UPN VETERAN JAWA TIMUR                |" << endl;
    cout << " =======================================================\n";
    cout << "|  Menu Informasi                                       |" << endl;
    cout << "| 1. No Antrian Layanan                                 |" << endl;
    cout << "| 2. Data Anggota pegawai                               |" << endl;
    cout << "| 3. Pendaftaran Anggota pegawai                        |" << endl;
    cout << "| 4. Hapus Data Anggota                                 |" << endl;
    cout << "| 5. Search Data Handle prodi                           |" << endl;
    cout << "| 6. Exit                                               |" << endl;
    cout << "|-------------------------------------------------------|" << endl;
}

int main()
{
    // Dekalarasi untuk login
    int t;
    string pw, id;
    string username = "admin";
    string password = "admin";
    string login = "block";
    t = 1;

    do
    {
        system("CLS");
        cout << "==========================================================\n";
        cout << "          P R O G R A M  A N T R I A N  K T M             \n";
        cout << "==========================================================\n";
        cout << endl;
        cout << endl;
        cout << "\t\tUsername =  ";
        cin >> id;
        cout << "\t\tPassword =  ";
        cin >> pw;

        if (id == username && pw == password)
        {
            system("CLS");
            cout << endl;
            cout << " -----------------------------------------------" << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "                  LOGIN SUKSES!!" << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << " -----------------------------------------------" << endl;
            t = 4;
            login = "sukses";
        }
        else
        {
            system("CLS");
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "=============================" << endl;
            cout << "       Gagal Login !! " << endl;
            cout << "=============================" << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            t = t + 1;
            system("pause");
        }
    } while (t <= 3);

    if (login != "sukses")
    {
        cout << endl;
        cout << "Anda Telah Login sebanyak 3x !!" << endl;
        cout << "Silahkan mengulang Program" << endl;
        exit(0);
    }
home:

    // inisialisasi
    // variable tambahan
    int i, j;
    // untuk hapus data
    bool delstatus = false;
    // B= 4;
    // C = 10;
    int b = x;
    int c = r;
    // buat nyimpen data yang pengen dihapus nanti
    string deletedata;
    string searchanggota;

    system("CLS");
    headermenu();
    //newline();
    cout << "Pilih menu yang diinginkan :  "; 
	// Tempat Input Pilihan Menu
    cin >> pil;
    if (pil == 1)
    {
        /* code */
    kembalikeantrian:
        system("CLS");
        headerantrian();
        cout << "Pilih menu yang diinginkan :  "; // Tempat Input Pilihan Menu
        int menuantrian;
        cin >> menuantrian;
        if (menuantrian == 1)
        {
            addQueue();
            goto kembalikeantrian;
        }
        else if (menuantrian == 2)
        {
            deleteQueue();
            goto kembalikeantrian;
        }
        else if (menuantrian == 3)
        {
            printQueue();
            goto kembalikeantrian;
        }
        else if (menuantrian == 4)
        {
        	clear();
        }
         else if (menuantrian == 5)
        {
        	goto home;
        }
        else
        {
            cout << "Menu Invalid" << endl;
            cout << "Silahkan menginputkan ulang.." << endl;
            system("pause");
            goto kembalikeantrian;
        }
    }
    else if (pil == 2) // daftar pegawai bank
    {
        
    }
    else if (pil == 3) // pendaftaran anggota pegawai
    {
        // Menu tambah anggota
        system("CLS");

        
        // update universal x variable
        
    }
    else if (pil == 4)
    {
        // ini tampilan header hapus anggota
        system("cls");
        
        // ini tabel daftar username anggota ya
        

        // ini buat inputan user data mana yang pengen dihapus
       
       
       
        // Mengapa Menggunakan Loop ?
        // Karna sistem akan mencari data yang kita inputkan secara berulang di index array pegawaibank.username
        
        
                    
                
    }

    else if (pil == 5){ // serach data anggota pegawai
    	system ("CLS");
        
        }
    else if (pil == 6) // tampilan pemanis:)
    {
        system("CLS");
        cout << endl;
        cout << " -----------------------------------------------" << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "       TERIMAKASIH & SEMOGA SEHAT SELALU!!      " << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << " -----------------------------------------------" << endl;

        exit(0);
    }
    else
    {
        // Tampilan ketika pengguna memasukan inputan diluar menu tersedia
        system("CLS");
        cout << endl;
        cout << " -----------------------------------------------" << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "                     FAILED !!" << endl;
        cout << "               Menu Tidak Tersedia " << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << " -----------------------------------------------" << endl;
        system("pause");
        goto home;
    }
}
