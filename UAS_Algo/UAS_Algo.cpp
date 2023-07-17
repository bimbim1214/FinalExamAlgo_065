#include <iostream>
#include <string>
using namespace std;

//isi disini
class Mahasiswa {
	const int MAX_MAHASISWA = 100 ;

	int NIM[MAX_MAHASISWA];
	string nama[MAX_MAHASISWA];
	int tahunMasuk[MAX_MAHASISWA];
	int jumlahMahasiswa = 0;
public:
	Mahasiswa() {
		MAX_MAHASISWA;
		NIM[MAX_MAHASISWA];
		nama[MAX_MAHASISWA];
		tahunMasuk[MAX_MAHASISWA];
		jumlahMahasiswa;
	}

};
//isi disini

void Mahasiswa : public tambahMahasiswa() {
	if (jumlahMahasiswa < MAX_MAHASISWA) {
		cout << "========== TAMBAH MAHASISWA ==========" << endl;
		cout << "NIM : ";
		cin >> NIM[jumlahMahasiswa];
		cin.ignore();
		cout << "Nama : ";
		getline(cin, nama[jumlahMahasiswa]);
		cout << "Jurusan : ";
		getline(cin, jurusan[jumlahMahasiswa]);
		cout << "Tahun Masuk: ";
		cin >> tahunMasuk[jumlahMahasiswa];
		cin.ignore();
		jumlahMahasiswa++;
		cout << "Mahasiswa berhasil ditambahkan!" << endl;
	}
	else {
		cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
	}
};
//isi disini
void tampilkanSemuaMahasiswa() {
	if (jumlahMahasiswa > 0) {
		cout << "========== DAFTAR MAHASISWA ==========" << endl;
		cout << "NIM    : " << endl;
		cout << "Nama   : " << endl;
		cout << "Jurusan: "  << endl;
		cout << "Tahun  : "  << endl;
		cout << endl;
	}
	else {
		cout << "Tidak ada data mahasiswa yang tersimpan." << endl;
	}
}

};
//isi disini
void algorithmacariMahasiswaByNIM() {
	int cariNIM;
	cout << "========== CARI MAHASISWA BERDASARKAN NIM ==========" << endl;
	cout << "NIM yang dicari: ";
	cin >> cariNIM;

};
//isi disini
void algorithmaSortByTahunMasuk() {
	int tahunMasuk;
	cout << "====== CARI MAHASISWA BERDASARKAN TAHUN MASUK ======" << endl;
	cout << "TAHUN YANG DI CARI :";
	cin >> tahunMasuk;
};
int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			//isi disini
			break;
		case 2:
			//isi disini
			break;
		case 3:
			//isi disini
			break;
		case 4:
			//isi disini
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
}//2. algoritma yang digunakan yaitu ciculer limked list//3. stack(tumpukan) atau pengumpulan data dan LAST IN FISRT OUT (LIFO) sedangkan queue adalah elemen yang paling ujung akhir yang di insertkan dan elemen paling ujung awal di delete bisa juga dikatakan FIFO (FIRST IN FIRST OUT)//4. digunakan saat ingin menambahkan file pada tumpukan (push) dan menghapus file dari tumpukan (pop)//5. a. yaitu memiliki kedalam sebanyak 4 level	//b. in = 1 5 8 10 12 15 20 22 25 28 30 36 38 40 45 48 50	//preorder = 25 20 22 10 12 15 5 1 8 36 30 28 40 38 48 45 50	// post = 1 8 5 15 12 10 22 20 28 38 45 50 48 30 40 36 25