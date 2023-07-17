#include <iostream>
#include <string>

using namespace std;

class Node {
public:
	//variabel untuk memunculkan node

};

class ManajemenProduk {
private:
	Node* head;
public:
	ManajemenProduk() {
		head = NULL;
	}

	void tambahProduk() {
		string nama;
		int jumlah;
		string tipe;

		cout << "======= TAMBAH PRODUK =======" << endl;
		cout << "Nama Produk : ";
		getline(cin, nama);
		cout << "Jumlah Produk : ";
		cin >> jumlah;

		cin.ignore(); //membersihkan buffer input
		cout << "Tipe Produk : ";
		getline(cin, tipe);
		//mendapatkan input dari fungsi yang lain

		cout << "Produk berhsil ditambahkan!" << endl;
	}
	void tampilkanSemuaProduk() {
		cout << "====== SEMUA DATA PRODUK ====== " << endl;
		if (head == NULL) {
			cout << "Belum ada data produk yang tersimpan" << endl;
		}
		else {
			Node* current = head;
			//nilai yang menyambungkan antara satu dengan yang lainnya
		}

	}
	void cariProdukByNama() {
		cout << "====== CARI PRODUK BERDASARKAN NAMA ====== " << endl;
		if (head == NULL) {
			cout << "Belum ada data produk yang tersimpan" << endl;
		}
		else {
			string targetNama;
			cout << "Nama Produk yang dicari: ";
			getline(cin, targetNama);
			Node* current = head;
			int posisi = 0;
			while (current != NULL) {
				posisi++;
				//pengulangan dari nama produk
			}
			if (current == NULL) {
				cout << "Nama produk " << targetNama << " TIDAK DITEMUKAN" <<
					endl;
			}
		}
	}
	void algorithmaSortByJumlahProduk() {
		if (head == NULL || head->next == NULL) {
			return; // Tidak perlu sorting jika hanya terdapat 0 atau 1 node
		}
		Node* current;
		Node* last = NULL;
		current = head;
		//se pemahaman saya nilai last dari node adalah nilai awal,yang mana dia akan balik lagi ke awal 
	}
};
int main() {
	ManajemenProduk manajemenProduk;
	int pilihan;
	do {
		cout << "========== APLIKASI MANAJEMEN DATA PRODUK ==========" << endl;
		cout << "1. Tambah Produk" << endl;
		cout << "2. Tampilkan Semua Produk" << endl;
		cout << "3. Cari Produk berdasarkan Nama" << endl;
		cout << "4. Urutkan Produk berdasarkan Jumlah" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			manajemenProduk.tambahProduk();
			break;
		case 2:
			manajemenProduk.tampilkanSemuaProduk();
			break;
		case 3:manajemenProduk.cariProdukByNama();
			break;
		case 4:manajemenProduk.UrutkanProdukberdasarkanJumlah();
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}


1//memakai algoritma single linked list
2// menentukan nilai array yang ingin dicari seperti contoh diatas
3//pada saat nilai nya itu stuck,karena stuck itu untuk mengirim data ke nilai awal
5.//
a.//dari atas ke kiri memiliki 5 kedalaman,dan dari atas ke bawah memiliki 5 kedalaman
b.//traversal