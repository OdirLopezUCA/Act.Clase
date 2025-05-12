#include <iostream>

using namespace std;

int main()
{   
    float billetera = 100, restante;
    int MenuManana;
    int MenuTarde;
    int MenuNoche;
    int MenuGlobal;


    cout << "<-------Mac :3 Menu :-------" << endl;
    cout << "<1.Menu de la Morning" << endl;
    cout << "<2.Menu de la tarde" << endl;
    cout << "<3.Menu de la noche" << endl;
    cout << "<4.Salir" << endl;
    cout << "Hola, que tal, que menu desea visualizar" << endl;
    cin >> MenuGlobal;

    switch (MenuGlobal)
    {
        case 1:

        cout << "<-------Mac :3 Menu :-------" << endl;
        cout << "<1.Moffin(3$)" << endl;
        cout << "<2.Hotcake(4.75$)" << endl;
        cout << "<3.Jugo(1.25$)" << endl;
        cout << "<4.Papas(2$)" << endl;
        cout << "<5.Cajita Feliz(4$)" << endl;
        cout << "Hola, Buenos dias, que le puedo ofrecer" << endl;
        cin >> MenuManana;

        switch(MenuManana)
        {
        case 1:
        cout << "Usted ah escogido Moffin(3$)" << endl;
        restante=(billetera-3);
        cout << "Su saldo actual es: " <<restante << endl;
        break;

        case 2:
        cout << "Usted ah escogido Hotcake(4.75$)" << endl;
        restante=(billetera-4.75);
        cout << "Su saldo actual es: " <<restante << endl;
        break;

        case 3:
        cout << "Usted ah escogido Jugo(1.25$)" << endl;
        restante=(billetera-1.25);
        cout << "Su saldo actual es: " <<restante << endl;
        break;

        case 4:
        cout << "Usted ah escogido Papas(2$)" << endl;
        restante=(billetera-2);
        cout << "Su saldo actual es: " <<restante << endl;
        break;

        case 5:
        int Edad;
        cout << "Usted ah escogido Cajita Feliz(4$)" << endl;
        
        cout << "Edad?" << endl;
        cin >> Edad;


        if (Edad == 1 && Edad <= 7)
        {
            restante=(billetera-4);
            cout << "Su saldo actual es: " <<restante << endl;
        }
        else if (Edad >= 7 && Edad <= 14)
        {
            restante=(billetera-8);
            cout << "Su saldo actual es: " <<restante << endl;
        }
        else if (Edad >= 14 && Edad <= 18)
        {
            restante=(billetera-16);
            cout << "Su saldo actual es: " <<restante << endl;
        }
        else if (Edad >= 18 && Edad <= 80)
        {
            cout << "Usted no cumple con la edad para comprar una cajita feliz " << endl;
        }
        else
        {
            return 0;
        }
        break;

        default:
        return 0;
        break;
        }

        break;

        case 2:

        cout << "<-------Mac :3 Menu :-------" << endl;
        cout << "<1.CheseeBurger(4$)" << endl;
        cout << "<2.MagNuggets(8$)" << endl;
        cout << "<3.MagPatata(4$)" << endl;
        cout << "<4.Carne(10$)" << endl;
        cout << "Hola, Buenos tardes, que le puedo ofrecer" << endl;
        cin >> MenuTarde;
        
        switch(MenuTarde)
        {
        case 1:
        cout << "Usted ah escogido CheseeBurger(4$)" << endl;
        restante=(billetera-4);
        cout << "Su saldo actual es: " <<restante << endl;
        break;

        case 2:
        cout << "Usted ah escogido MagNuggets(8$)" << endl;
        restante=(billetera-8);
        cout << "Su saldo actual es: " <<restante << endl;
        break;

        case 3:
        cout << "Usted ah escogido MagPatata(4$)" << endl;
        restante=(billetera-4);
        cout << "Su saldo actual es: " <<restante << endl;
        break;

        case 4:
        cout << "Usted ah escogido Carne(10$)" << endl;
        restante=(billetera-10);
        cout << "Su saldo actual es: " <<restante << endl;
        break;

        default:
        return 0;
        break;
        }

        break;

        case 3:

        cout << "<-------Mac :3 Menu :-------" << endl;
        cout << "<1.HamburguesaHongos(5.75$)" << endl;
        cout << "<2.MacFlurry(6$)" << endl;
        cout << "<3.MacCaffe(2.45$)" << endl;
        cout << "<4.MacBurguerNoche(6.80$)" << endl;
        cout << "Hola, Buenos Noches, que le puedo ofrecer" << endl;
        cin >> MenuNoche;
        
        switch(MenuNoche)
        {
        case 1:
        cout << "Usted ah escogido HamburguesaHongos(5.75$)" << endl;
        restante=(billetera-5.75);
        cout << "Su saldo actual es: " <<restante << endl;
        break;

        case 2:
        cout << "Usted ah escogido MacFlurry(6$)" << endl;
        restante=(billetera-6);
        cout << "Su saldo actual es: " <<restante << endl;
        break;

        case 3:
        cout << "Usted ah escogido MacCaffe(2.45$)" << endl;
        restante=(billetera-2.45);
        cout << "Su saldo actual es: " <<restante << endl;
        break;

        case 4:
        cout << "Usted ah escogido MacBurguerNoche(6.80$)" << endl;
        restante=(billetera-6.80);
        cout << "Su saldo actual es: " <<restante << endl;
        break;

        default:
        return 0;
        break;
        }

        break;

        case 4:
        return 0;
        break;
    }
    

    return 0;


}