#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");

    float pizzaPrise = 0, drinkPrise = 0;
    int VeganCount = 0, GavayskayaCount = 0, MargaritaCount = 0, PeperonyCount = 0, FantaCount = 0, VodkaCount = 0, ColaCount = 0, choose, productCount;
    bool menu = true;
    while (menu)
    {
        std::cout << "\t Пицерия у тёти Сонюшки \n";
        std::cout << "\t Меню \n";
        std::cout << "01 Пеперони 20$\n";
        std::cout << "02 Маргарита 30$\n";
        std::cout << "03 Гавайская 33$\n";
        std::cout << "04 Веганская 199$\n";
        std::cout << "11 Кола 2$\n";
        std::cout << "12 Фанта 4$\n";
        std::cout << "13 Водка 89$\n";
        std::cout << "Введите код выбраного продукта или 0 для оформления заказа: ";
        std::cin >> choose;
        if (choose == 0)
        {
            std::cout << "\t Пицерия у тёти Сонюшки \n";
            std::cout << "\t чек: \n";
            if (VeganCount > 0)
            {
                std::cout << "\tВеганская\t" << VeganCount << "\t" << VeganCount * 199 << "$\n";
            }
            if (MargaritaCount > 0)
            {
                std::cout << "\tМаргарита\t" << MargaritaCount << "\t" << MargaritaCount * 30 << "$\n";
            }
            if (PeperonyCount > 0)
            {
                std::cout << "\tПеперони\t" << PeperonyCount << "\t" << PeperonyCount * 20 << "$\n";
            }
            if (GavayskayaCount > 0)
            {
                std::cout << "\tГавайская\t" << GavayskayaCount << "\t" << GavayskayaCount * 33 << "$\n";
            }
            if (FantaCount > 0)
            {
                std::cout << "\tФанта\t" << FantaCount << "\t" << FantaCount * 4 << "$\n";
            }
            if (ColaCount > 0)
            {
                std::cout << "\tКола\t" << ColaCount << "\t" << ColaCount * 2 << "$\n";
            }
            if (VodkaCount > 0)
            {
                std::cout << "\tВодка\t" << VodkaCount << "\t" << VodkaCount * 89 << "$\n";
            }
            if (VodkaCount > 3 || FantaCount > 3)
            {
                (drinkPrise = drinkPrise / 100) * 85;
            }
            if (pizzaPrise + drinkPrise > 50)
            {
                std::cout << "Итого к оплате: " << ((pizzaPrise + drinkPrise) / 100) * 80 << "$\n";
            }
            else
            {
                std::cout << "Итого к оплате: " << pizzaPrise + drinkPrise << "$\n";
            }
            menu = false;
        }
        else if (choose == 01)
        {
            std::cout << "Введите количество выбраного продукта: ";
            std::cin >> productCount;
            if (productCount / 5 > 1)
            {
                pizzaPrise = pizzaPrise + (20 * (productCount - int(productCount / 5)));
                
            }
            else
            {
                pizzaPrise = pizzaPrise + 20 * productCount;
            }
            PeperonyCount = productCount;
        }
        else if (choose == 02)
        {
            std::cout << "Введите количество выбраного продукта: ";
            std::cin >> productCount;
            if (productCount / 5 > 1)
            {
                pizzaPrise = pizzaPrise + (30 * (productCount - int(productCount / 5)));
                
            }
            else
            {
                pizzaPrise = pizzaPrise + 30 * productCount;
            }
            MargaritaCount = productCount;
        }
        else if (choose == 03)
        {
            std::cout << "Введите количество выбраного продукта: ";
            std::cin >> productCount;
            if (productCount / 5 > 1)
            {
                pizzaPrise = pizzaPrise + (33 * (productCount - int(productCount / 5)));
               
            }
            else
            {
                pizzaPrise = pizzaPrise + 33 * productCount;
            }
            GavayskayaCount = productCount;
        }
        else if (choose == 04)
        {
            std::cout << "Введите количество выбраного продукта: ";
            std::cin >> productCount;
            if (productCount / 5 > 1)
            {
                pizzaPrise = pizzaPrise + (199 * (productCount - int(productCount / 5)));
                
            }
            else
            {
                pizzaPrise = pizzaPrise + 199 * productCount;
            }
            VeganCount = productCount;
        }
        else if (choose == 11)
        {
            std::cout << "Введите количество выбраного продукта: ";
            std::cin >> productCount;
                drinkPrise = drinkPrise + (2 * productCount);
                ColaCount = productCount;
        }
        else if (choose == 12)
        {
            std::cout << "Введите количество выбраного продукта: ";
            std::cin >> productCount;
            if (productCount > 3)
            {
                drinkPrise = drinkPrise + (4 * productCount);
                
            }
            else
            {
                drinkPrise = drinkPrise + 4 * productCount;
            }
            FantaCount = productCount;
        }
        else if (choose == 13)
        {
            std::cout << "Введите количество выбраного продукта: ";
            std::cin >> productCount;
            if (productCount > 3)
            {
                drinkPrise = drinkPrise + (89 * (productCount - int(productCount / 5)));
                
            }
            else
            {
                drinkPrise = drinkPrise + 89 * productCount;
            }
            VodkaCount = productCount;
        }

    }  
    return 0;
}
