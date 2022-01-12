#include <iostream>
#include <string>
#include "AirTransport.h"
#include "GroundTransport.h"
#include "SubTransport.h"

using namespace std;

int main()
{
    system("chcp 1251");
    system("cls");


    try 
    {
        AirTransport s1;                                                                                                                            //объект Воздушный тс
        s1.Set(4, 160, 228, 1, "Cessna 172 Skyhawk");
        cout << s1.ToString();
        
        GroundTransport n1;                                                                                                                         //Объект наземного тс
        n1.Set(5, 147, 190, 4, "Минивен Toyota Verso");
        cout << n1.ToString();


        SubTransport w1;                                                                                                                                //объект водный тс
        w1.Set(5, 30, 37, 190, "моторная лодка Днепр");
        cout << w1.ToString();
    }
    catch (exception Err)                                                                                                                               //в случае ошибки
    {
    cout << Err.what();
    }
    

    system("pause");
}

