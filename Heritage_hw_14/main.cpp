#include "Musical_instrument.h"

void main()
{
    srand(time(NULL));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    Orcestr o1("Какой-то оркестр");

    Musical_instrument* bb [6]  = { new Balalaika , new Bassguitar, 
        new Skripka, new Sopilka , new Saksofon ,new Truba };
    int r = 0;
    for (int i = 0; i < 20; i++)
    {
        show();
        if (_kbhit()) break;
        o1.Print();
        r = rand() % 6;
        bb[r]->Print();
        cout << "\n\n\t\t\t\tНажмите пробел, что-бы выйти!" << endl;
        bb[r]->Play();
        
        system("cls"); 
    }
    system("cls");
    cout << "\n\n\n\n\t\t\t\t\tThe end!" << endl;
}