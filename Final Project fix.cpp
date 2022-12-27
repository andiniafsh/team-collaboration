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
	if(head==NULL){
    return 0;
	}else{
    int jumlah = 0;
    current = head;
   		while(current!=NULL){
		current = current->next;
		jumlah++;
    }
    return jumlah;
	}
}

// Mengecek apakah antrian penuh?
bool isFull(){
	if(count()==max_queue){
    return true;
	}else{
    return false;
	}
}

// Mengecek apakah antrian kosong?
bool isEmpty(){
	if(count() == 0){
    return true;
	}else{
    return false;
	}
}

// Fungsi Enqueue
void addQueue(){
	if(isFull()){
    cout<<"Mohon maaf antrian sudah penuh"<<endl;
	}
		else{
		if(isEmpty()){
	  		head=new antrean_ktm();
			cin.ignore();
			cout<<"Masukkan Nama       : ";
			getline(cin,head->nama);
			cout<<"Masukkan NPM        : ";
			getline(cin,head->npm);
			cout<<"Masukkan Nomor HP   : ";
			getline(cin,head->no_hp);
			cout<<"Masukkan Prodi      : ";
			getline(cin,head->prodi);
			cout<<"Masukkan Fakultas   : ";
			getline(cin,head->fak);
			cout<<"Masukkan No Antrian : ";
			cin>>head->no_antri;
			
			head->next=NULL;
			tail=head;
			printQueue();
		}else{
			newNode=new antrean_ktm();
			cin.ignore();
			cout<<"Masukkan Nama       : ";
			getline(cin,newNode->nama);
			cout<<"Masukkan NPM        : ";
			getline(cin,newNode->npm);
			cout<<"Masukkan Nomor HP   : ";
			getline(cin,newNode->no_hp);
			cout<<"Masukkan Prodi       : ";
			getline(cin,newNode->prodi);
			cout<<"Masukkan Fakultas       : ";
			getline(cin,newNode->fak);
			cout<<"Masukkan No Antrian : ";
			cin>>newNode->no_antri;
			newNode->next=NULL;
			tail->next=newNode;
			tail=newNode;
			takethequeue();
    }
  }
}

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
	int i;
	if(isEmpty()){
    	cout << "--------------------------" << endl;
	    cout << " ANTRIAN LAYANAN SAAT INI: " << endl;
	    cout << "--------------------------" << endl;
	    cout << " ANTRIAN KOSONG" << endl;
	}else{
		hapus=head;
    	head=head->next;
		hapus->next=NULL;
    	delete hapus;
    	system("CLS");
  }
  
  printQueue();
}

// Fungsi Menghapus semua antrian
void clear(){
	if(isEmpty()){
    	cout << "--------------------------" << endl;
	    cout << " ANTRIAN LAYANAN SAAT INI: " << endl;
	    cout << "--------------------------" << endl;
	    cout << " ANTRIAN KOSONG" << endl;
	}else{
    current=head;
    	while(current!=NULL){
		hapus=current;
		current=current->next;
		hapus->next=NULL;
		delete hapus;
    }
    head = NULL;
    tail = NULL;
  }
}

// Fungsi tampilkan antrian
void printQueue()
{
	system("clear");
	cout<<"\n List Antrian Pengambilan KTM: "<<endl;
	if(isEmpty()){
	    cout << "--------------------------" << endl;
	    cout << " ANTRIAN LAYANAN SAAT INI: " << endl;
	    cout << "--------------------------" << endl;
	    cout << " ANTRIAN KOSONG" << endl;
	}else{
		current=head;
		int nomor=1;
		cout<<"-----------------------------------------------------------------\n";
 		cout<<"|  No  |           NPM           |           No Antrian           |\n";
 		cout<<"-----------------------------------------------------------------";
	
		while(nomor<=max_queue){
			if(current!=NULL){			
				cout<<"\n| "<<setiosflags(ios::left)<<setw(5)<<nomor<<"|";
  				cout<<" "<<setiosflags(ios::left)<<setw(25)<<current->npm<<"|";
  				cout<<" "<<setiosflags(ios::left)<<setw(28)<<current->no_antri<<"|";
			current=current->next;
				}else{
				cout<<"\n| "<<setiosflags(ios::left)<<setw(5)<<nomor<<"|";
  				cout<<" "<<setiosflags(ios::left)<<setw(25)<<"Data masih kosong"<<"|";
  				cout<<" "<<setiosflags(ios::left)<<setw(28)<<"Data masih kosong"<<"|";
      			}
				

	nomor++;
    	}
		cout<<"\n=================================================================\n";
	}
	getche();
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
    else if (pil == 2)
    {
        // Seperti biasa cls dlu biar bersih
        system("cls");
        // tampilan header daftar anggota
        cout << " ========================================================================\n";
        cout << "|                     DAFTAR ANGGOTA PEGAWAI BANK                        |\n";
        cout << "|                       UPN VETERAN JAWA TIMUR                           |\n";
        cout << " ========================================================================\n";
        cout << endl;
        // membuat tabel anggota yang kolomnya terdiri dari username , nama anggota , alamat;
        int i;
        // menggunakan for untuk menampilkan data yang tersimpan pada struct
        for (i = 0; i < x; i++)
        {
            cout << "---------------------------------------" << endl;
            cout << "    ANGGOTA DAFTAR KE - " << i + 1 << endl;
            cout << "---------------------------------------" << endl;
            cout << "Username     :" << pegawaibank.username[i] << endl;
            cout << "Nama         :" << pegawaibank.nama[i] << endl;
            cout << "Alamat       :" << pegawaibank.alamat[i] << endl;
            cout << "Menghandle   :" << pegawaibank.prodi[i] << endl;
            cout << "----------------------------------------" << endl;
        }

        // penutup tabel / pemanis
        cout << endl;
        cout << " ----------------------------------------------------------------------\n";
        cout << "|                        KAMPUS BELA NEGARA                            |" << endl;
        cout << " ----------------------------------------------------------------------\n";
        system("pause");
        // setelah melihat data akan dialihkan pada home atau tampilan utama
        goto home;
    }
    else if (pil == 3)
    {
        // Menu tambah anggota
        system("CLS");

        cout << " =======================================================\n";
        cout << "|           PENDAFTARAN ANGGOTA PEGAWAI                |\n";
        cout << " =======================================================\n";
        cout << "Berapa Jumlah Data yang akan Anda Inputkan : ";
        cin >> tambahanggota;
        for (x; x < tambahanggota + b; x++)
        {
            cout << "Data Anggota ke - " << x + 1 << endl;
            cout << "Create Username : ";
            // untuk menghapus buffer , klo nggk dihapus diabakalan menempati buffer variable sebelumnya
            cin.ignore();
            getline(cin, pegawaibank.username[x]);
            cout << "Nama               : ";
            getline(cin >> ws, pegawaibank.nama[x]);
            cout << "Alamat             : ";
            getline(cin >> ws, pegawaibank.alamat[x]);
            cout << "Menghandle         : ";
            getline(cin >> ws, pegawaibank.prodi[x]);
            cout << endl;
        }
        // update universal x variable
        x = (x + tambahanggota) - tambahanggota;
        // x=x;
        cout << "Data Berhasil Di Inputkan !!!" << endl;
        cout << endl;
        system("pause");
        goto home;
    }
    else if (pil == 4)
    {
        // ini tampilan header hapus anggota
        system("cls");
        cout << " ========================================================\n";
        cout << "|                HAPUS ANGGOTA PEGAWAI                  |\n";
        cout << " ========================================================\n";
        // ini tabel daftar username anggota ya
        cout << "|  USERNAME ANGGOTA ANTRIAN        |" << endl;
        cout << " ----------------------------------------" << endl;

        for (i = 0; i < x; i++)
        {
            cout << "|" << i + 1 << "." << pegawaibank.username[i] << "\t\t\t\t|" << endl;
        }
        cout << " ----------------------------------------" << endl;
        cout << endl;

        // ini buat inputan user data mana yang pengen dihapus
        cout << "Masukan username yang ingin Dihapus :";
        cin >> deletedata;
        bool delstatus = false;
        // Mengapa Menggunakan Loop ?
        // Karna sistem akan mencari data yang kita inputkan secara berulang di index array pegawaibank.username
        for (j = 0; j < x; j++)
        {
            if (deletedata == pegawaibank.username[j])
            {
                // Jika data berhasil ditemukan akan ditampilkan
                system("CLS");
                cout << "-------------------------------------------------------------" << endl;
                cout << "                   DATA BERHASIL DITEMUKAN!!!                " << endl;
                cout << "-------------------------------------------------------------" << endl;
                cout << endl;
                cout << "Informasi Data " << endl;
                cout << "Username          : " << pegawaibank.username[j] << endl;
                cout << "Nama              : " << pegawaibank.nama[j] << endl;
                cout << "Alamat            : " << pegawaibank.alamat[j] << endl;
                cout << "Menghandle        : " << pegawaibank.prodi[j] << endl;
                cout << endl;
                char dlt;

                cout << "----------------------------------------------------------------------------" << endl;
                cout << " NOTE** : DATA YANG TELAH DIHAPUS TIDAK DAPAT DIKEMBALIKAN SEPERTI SEMULA   " << endl;
                cout << "----------------------------------------------------------------------------" << endl;
                cout << " HAPUS DATA PERMANENT ? [Y/N]  ";
                cin >> dlt;
                if (dlt == 'Y' || dlt == 'y')
                {
                    for (int k = j /* dikerjakan dari Index yang ditemukan tadi */; k < x; k++)
                    {
                        // Penggeseran Data pada Index Array yang dihapus sampai dengan data maksimal array
                        // Data Saat Ini / Index Sekarang (yang mau dihapus) = Data Selanjutnya / Index Selanjutnya
                        pegawaibank.username[k] = pegawaibank.username[k + 1];
                        pegawaibank.nama[k] = pegawaibank.nama[k + 1];
                        pegawaibank.alamat[k] = pegawaibank.alamat[k + 1];
                        pegawaibank.prodi[k] = pegawaibank.prodi[k + 1];
        
                    }
                    // Mengurangi array sebelumnya karna datanya hilang 1 habis dihapus barusan
                    x -= 1;
                    delstatus = true;
                    cout << endl;
                    cout << "Data Anggota sukses dihapus!!" << endl;
                    system("pause");
                    cout << endl;
                    goto home;
                    break;
                }
                else if (dlt == 'n' || dlt == 'N')
                {
                    system("pause");
                    goto home;
                }
                else
                {
                    cout << "Invalid Input !" << endl;
                    system("pause");
                    goto home;
                }
            }
        }
    }

    else if (pil == 5){
    	system ("CLS");
        cout << endl;
        cout << " ========================================================\n";
        cout << "|               SEARCH DATA ANGGOTA PEGAWAI             |\n";
        cout << " ========================================================\n";
        cout << "                                                         " << endl;
        cout << "                                                         " << endl;
        cout << "                                                         " << endl;
        cout << "                                                         " << endl;
        cout << "           ---------------------------------            " << endl;
        cout << "            Handle prodi : ";
        getline(cin >> ws, searchanggota);

            for (j = 0; j < r; j++)
            {
                if (searchanggota == pegawaibank.prodi[j])
                {

                    // Jika data berhasil ditemukan akan ditampilkan
	                system("CLS");
	                cout << "-------------------------------------------------------------" << endl;
	                cout << "                   DATA BERHASIL DITEMUKAN!!!                " << endl;
	                cout << "-------------------------------------------------------------" << endl;
	                cout << endl;
	                cout << "Informasi Data " << endl;
	                cout << "Username          : " << pegawaibank.username[j] << endl;
	                cout << "Nama              : " << pegawaibank.nama[j] << endl;
	                cout << "Alamat            : " << pegawaibank.alamat[j]<<endl;
	                cout << "Menghandle        : " << pegawaibank.prodi[j]<<endl;
	                cout << endl;
                    system("pause");
                    goto home;
                }
            }
        }
    else if (pil == 6)
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
