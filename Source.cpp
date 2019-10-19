//Bahan Ajar Contoh Pemrograman Berbasis Objek C++

#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

class Balok																					//Nama Class
{
public:																						//Access Modifier
	string Pertanyaan[4], Menu[1], Peringatan;												//Atribut
	string Panah = "=> ";
	char GarisMin = '-';																	//Atribut (Assignment)


	int Hasil_Volume(int P_param, int L_param, int T_param)									//Funsi
	{
		return P_param * L_param * T_param;
	}

	int Hasil_LuasPermukaan(int P_param, int L_param, int T_param)							//Fungsi
	{
		return (2 * ((P_param * L_param) + (P_param * T_param) + (L_param * T_param)));
	}

	double Hasil_Panjang(int V_param, int L_param, int T_param)								//Fungsi
	{
		return (V_param / L_param / T_param);
	}

	double Hasil_Lebar(int V_param, int P_param, int T_param)								//Fungsi
	{
		return (V_param / P_param / T_param);
	}

	void CetakJudul(string judul)
	{
		for (int i = 0; i <= 50; i++)
		{
			cout << GarisMin;
		} cout << endl << judul << endl;
	}

	void CetakGaris()
	{
		for (int i = 0; i <= 50; i++)
		{
			cout << GarisMin;
		} cout << endl;
	}
};


int main()
{
	int PilihanMenu;
	int P, L, T;										
	double V;
	Balok Input, Output, Pesan, Hasil;

	Input.Pertanyaan[0] = "Masukkan Nilai Panjang  : ";
	Input.Pertanyaan[1] = "Masukkan Nilai Lebar    : ";
	Input.Pertanyaan[2] = "Masukkan Nilai Tinggi   : ";
	Input.Pertanyaan[3] = "Masukkan Nilai Volume   : ";
	Input.Pertanyaan[4] = "Pilih : ";
	Output.Menu[0] = "# Hitung: Volume & Luas Permukaan";
	Output.Menu[1] = "# Hitung: Panjang & Lebar";
	Pesan.Peringatan = "Terjadi Kesalahan Tidak Terduga";

	//Input.Judul[0] = "INPUT";
	//Input.Judul[1] = "OUTPUT";
	//Input.CetakGaris(Input.Judul[0]);

	Input.CetakJudul("PILIH MENU"); Input.CetakGaris();
	cout << Output.Menu[0] << endl << Output.Menu[1] << endl; Input.CetakGaris();
	cout << Input.Pertanyaan[4]; cin >> PilihanMenu; cout << endl;

	Input.CetakJudul("INPUT"); Input.CetakGaris(); 

	switch (PilihanMenu)
	{
	case 1:
		cout << Input.Pertanyaan[0]; cin >> P;
		cout << Input.Pertanyaan[1]; cin >> L;
		cout << Input.Pertanyaan[2]; cin >> T;
		Input.CetakJudul("OUTPUT"); Input.CetakGaris();
		cout << Output.Panah << Hasil.Hasil_Volume(P, L, T) << endl;
		cout << Output.Panah << Hasil.Hasil_LuasPermukaan(P, L, T) << endl;
		break;
	case 2:
		try
		{
			cout << Input.Pertanyaan[3]; cin >> V;
			cout << Input.Pertanyaan[1]; cin >> L;
			cout << Input.Pertanyaan[2]; cin >> T;
			Input.CetakJudul("OUTPUT"); Input.CetakGaris();
			cout << Output.Panah << Hasil.Hasil_Panjang(V, (double)L, (double)T) << endl;
			cout << Output.Panah << Hasil.Hasil_Lebar(V, (double)P, (double)T) << endl;
		}
		catch (const std::exception&)
		{
			cout << endl << Output.Peringatan;
		}
		break;
	default:
		cout << endl << Output.Peringatan;
		break;
	}

	_getch();
	return 0;
}