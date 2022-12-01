#include "Musical_instrument.h"

void Balalaika::Print()
{
	cout << "Играет:  " << Name<<endl;
}

void Balalaika::Play()
{
	PlaySound(TEXT("balalaika.wav"), NULL, SND_FILENAME);
}

void Bassguitar::Print()
{
	cout << "Играет:  " << Name << endl;
}

void Bassguitar::Play()
{
	PlaySound(TEXT("bassguitar.wav"), NULL, SND_FILENAME);
}

void Strun::Print()
{
	cout << Name << endl;
}

void Skripka::Print()
{
	cout << "Играет:  " << Name << endl;
}

void Skripka::Play()
{
	PlaySound(TEXT("skripka1.wav"), NULL, SND_FILENAME);
}

void Duvovie::Print()
{
	cout << Name << endl;
}

void Sopilka::Print()
{
	cout << "Играет:  " << Name << endl;
}

void Sopilka::Play()
{
	PlaySound(TEXT("sopilka.wav"), NULL, SND_FILENAME);
}

void Saksofon::Print()
{
	cout << "Играет:  " << Name << endl;
}

void Saksofon::Play()
{
	PlaySound(TEXT("saksofon.wav"), NULL, SND_FILENAME);
}

void Truba::Print()
{
	cout << "Играет:  " << Name << endl;
}

void Truba::Play()
{
	PlaySound(TEXT("truba.wav"), NULL, SND_FILENAME);
}

void Orcestr::Print()
{
	cout << "Оркестр:  " << Name << endl;
}

void show()
{
	cout << endl << endl << endl << endl;
	cout << "\t\t\tВсем привет, сейчас будет играить Какой-то Оркестр\n\n" << endl;
}
