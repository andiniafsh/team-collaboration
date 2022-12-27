
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
