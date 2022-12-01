#include <iostream>
#include <string.h>
#include <Windows.h>
#include <conio.h>
#include <MMSystem.h>
#pragma comment (lib, "winmm")

using namespace std;

class Musical_instrument
{
	string Name;
public:
	virtual void Play()  {};
	virtual void Print()  {};
};

class Strun : public Musical_instrument
{
	string Name;
public:
	Strun() { Name = "Струнные инструменты: "; }
	//virtual void Play();
	virtual void Print();
};
class Balalaika : public Strun
{
	string Name;
public:
	Balalaika() { Name = "Балалайка"; }

	virtual void Print();
	virtual void Play();

};
class Bassguitar : public Strun
{
	string Name;
public:
	Bassguitar() { Name = "Бассгитара"; }
	virtual void Print();
	virtual void Play();

};
class Skripka : public Strun
{
	string Name;
public:
	Skripka() { Name = "Скрипка"; }
	virtual void Print();
	virtual void Play();

};
class Duvovie : public Musical_instrument
{
	string Name;
public:
	Duvovie() { Name = "Духовые инструменты: "; }
	virtual void Print();
	//virtual void Play()

};
class Sopilka : public Duvovie
{
	string Name;
public:
	Sopilka() { Name = "Сопилка"; }
	virtual void Print();
	virtual void Play();

};
class Saksofon : public Duvovie
{
	string Name;
public:
	Saksofon() { Name = "Саксафон"; }
	virtual void Print();
	virtual void Play();

};
class Truba : public Duvovie
{
	string Name;
public:
	Truba() { Name = "Труба"; }
	virtual void Print();
	virtual void Play();

};
class Orcestr : public Truba, public Saksofon, public Sopilka,
	public Skripka, public Bassguitar, public Balalaika
{
	string Name;
public:
	Orcestr(string _name) { Name = _name; }
	virtual void Print();
	//virtual void Play();

};

void show();