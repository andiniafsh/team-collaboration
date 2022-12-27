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
    
