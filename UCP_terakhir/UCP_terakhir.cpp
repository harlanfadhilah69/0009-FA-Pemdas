#include <iostream>
using namespace std;

class MasukUniversitas {
private:
	string uangPendaftaran[10];
	string uangBangunan[10];
	string uangSemesterPertama[10];
	string totalBiaya[10];
public:
	void setUangPendaftaran(int i, string value) {
		uangPendaftaran[i] = value;
	}
	string getUangPendaftaran(int i) {
		return uangPendaftaran[i];
	}
public:
	void setUangBangunan(int i, string value) {
		uangBangunan[i] = value;
	}
	string getUangBangunan(int i) {
		return uangBangunan[i];
	}

public:
	void setUangSemesterPertama(int i, string value) {
		uangPendaftaran[i] = value;
	}
	string getUangSemesterPertama(int i) {
		return uangPendaftaran[i];
	}
public:
	void setTotalBiaya(int i, string value) {
		totalBiaya[i] = value;
	}
	string getTotalBiaya(int i) {
		return totalBiaya[i];
	}
};
int uangPendaftaran;
class namaJalurMasuk {
public:
	virtual void namaJalurMasuk() { return; }
};

	void setUangPendaftaran(int nilai) {
		this->uangPendaftaran = nilai;
	}
	float getUangPendaftaran() {
		return uangPendaftaran;
	}
	// isi setter dan getter variable yang dibutuhkan di bawah ini
};
class SNBT : public MasukUniversitas {
public:
	void namaJalurMasuk() {
		cout << "SNBT";
	}
	void setUangPendaftaran() {
		cout << "Masukan uang pendaftaran";
	}
	void setUangSemesterPertama() {
		cout << "Masukan uang semester pertama";
	}
	void setUangBangunan() {
		cout << "Masukan uang Bangunan";
	}
	void setTotalBiaya() {
		cout << "Total Biaya";
	}
};
class SNBP : public MasukUniversitas {
	// isi disini untuk melengkapi class SNBP
};
int main() {
	// isi disini untuk fungsi main
}
	