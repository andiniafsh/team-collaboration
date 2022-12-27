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

