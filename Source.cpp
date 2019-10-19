//Bahan Ajar Contoh Pemrograman Berbasis Objek C++

#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

class Balok																					//Nama Class
{
public:																						//Access Modifier
	string Pertanyaan[4], Menu[2], Hasil[3], Peringatan;									//Atribut
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
	int PilihanMenu, JumlahMenu = 3, X = 0;
	int P, L, T;
	double V;
	Balok Input, Output, Pesan, Hasil, TampilSub;

	Input.Pertanyaan[0] = "Masukkan Nilai Panjang  : ";
	Input.Pertanyaan[1] = "Masukkan Nilai Lebar    : ";
	Input.Pertanyaan[2] = "Masukkan Nilai Tinggi   : ";
	Input.Pertanyaan[3] = "Masukkan Nilai Volume   : ";
	Input.Pertanyaan[4] = "Pilih : ";
	Output.Menu[0] = "Hitung: Volume & Luas Permukaan";
	Output.Menu[1] = "Hitung: Panjang";
	Output.Menu[2] = "Hitung: Lebar";
	Pesan.Peringatan = "Terjadi Kesalahan Tidak Terduga";
	TampilSub.Hasil[0] = "Volume          = ";
	TampilSub.Hasil[1] = "Luas Permukaan  = ";
	TampilSub.Hasil[2] = "Panjang  = ";
	TampilSub.Hasil[3] = "Lebar    = ";

	Input.CetakJudul("PILIH MENU"); Input.CetakGaris();

	for (int i = 1; i <= JumlahMenu; i++)
	{
		cout << "[" << i << "] " << Output.Menu[X] << endl;
		X++;
	}

	Input.CetakGaris(); 
	cout << Input.Pertanyaan[4]; cin >> PilihanMenu; cout << endl;
	
	Input.CetakJudul("INPUT"); Input.CetakGaris(); 

	try
	{
		switch (PilihanMenu)
		{
		case 1:
			cout << Input.Pertanyaan[0]; cin >> P;
			cout << Input.Pertanyaan[1]; cin >> L;
			cout << Input.Pertanyaan[2]; cin >> T;
			Input.CetakJudul("OUTPUT"); Input.CetakGaris();
			cout << Output.Panah << TampilSub.Hasil[0] << Hasil.Hasil_Volume(P, L, T) << endl;
			cout << Output.Panah << TampilSub.Hasil[1] << Hasil.Hasil_LuasPermukaan(P, L, T) << endl;
			break;
		case 2:

			cout << Input.Pertanyaan[3]; cin >> V;
			cout << Input.Pertanyaan[1]; cin >> L;
			cout << Input.Pertanyaan[2]; cin >> T;
			Input.CetakJudul("OUTPUT"); Input.CetakGaris();
			cout << Output.Panah << TampilSub.Hasil[2] << Hasil.Hasil_Panjang(V, (double)L, (double)T) << endl;
			break;
		case 3:
			cout << Input.Pertanyaan[3]; cin >> V;
			cout << Input.Pertanyaan[0]; cin >> P;
			cout << Input.Pertanyaan[2]; cin >> T;
			Input.CetakJudul("OUTPUT"); Input.CetakGaris();
			cout << Output.Panah << TampilSub.Hasil[3] << Hasil.Hasil_Lebar(V, (double)P, (double)T) << endl;
			break;
		default:
			cout << endl << Output.Peringatan;
			break;
		}
	}
	catch (const std::exception&)
	{
		cout << endl << Output.Peringatan;
	}

	_getch();
	return 0;
}