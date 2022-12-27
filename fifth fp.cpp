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

