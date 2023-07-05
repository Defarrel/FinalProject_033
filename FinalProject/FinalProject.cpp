#include <iostream>
using namespace std;

class MataKuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;
public:
	MataKuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;
	}
	virtual float hitungNilaiAkhir() { 
		return 0; 
	}
	virtual void cekKelulusan() { 
		return; 
	}
	virtual void input() { 
		return; 
	}
	void setPresensi(float nilai) {
		this->presensi = nilai;
	}
	float getPresensi() {
		return presensi;
	}
	void setA(float nilai) {
		this->activity = nilai;
	}
	float getA() {
		return activity;
	}
	void setE(float nilai) {
		this->exercise = nilai;
	}
	float getE() {
		return exercise;
	}
	void setUA(float nilai) {
		this->tugasAkhir = nilai;
	}
	float getUA() {
		return tugasAkhir;
	}
};
class Pemrograman : public MataKuliah { 
	float p, a, e, ua;
public:
	float hitungNilaiAkhir() {
		float nilaiAkhir = (0.1 * p) + (0.2 * a) + (0.3 * e) + (0.4 * ua);
		return nilaiAkhir;
	}

	void cekKelulusan() {
		float nilaiAkhir = hitungNilaiAkhir();
		if (nilaiAkhir >= 75) {
			cout << "Selamat, Anda lulus mata kuliah Pemrograman dengan nilai akhir 75" << endl;
		}
		else {
			cout << "Tidak Lulus"<< endl;
		}
	}
	
	void input() {
		cout << "Program dibuat" << endl;
		cout << "Masukan nilai presensi: ";
		cin >> p;
		setPresensi(p);
		cout << "Masukan nilai Activity: ";
		cin >> a;
		setA(a);
		cout << "Masukan nilai Exercise: ";
		cin >> e;
		setE(e);
		cout << "Masukan nilai Tugas Akhir: ";
		cin >> ua;
		setUA(ua);
	}
};

int main() {
	Pemrograman obj;
	char ulang;
	do {
	obj.input();
	obj.cekKelulusan();
	cout << "Apakah anda ingin mengulang program ? Y / N: ";
	cin >> ulang;
	} while ((ulang == 'y') || (ulang == 'Y'));
}