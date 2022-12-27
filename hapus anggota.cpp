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
