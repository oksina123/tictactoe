#include <iostream>
#include <cstdlib>
#include <ctime>

#include "table.hpp"
#include "ai.hpp"
#include "randomai.hpp"
#include "proceduralai.hpp"

using namespace std;

int main()
{
    Table table;
    IAi *ai = new ProceduralAI();
    srand(time(NULL));
    while (true)
    {
        while (true)
        {
            int x = 0;
            int y = 0;

            table.print();
            cout << "gdzie postawic x" << endl;
            cin >> x >> y;

            try
            {
                table.putX(x, y);
            }
            catch (Table::OutOfBoundsException &e)
            {
                cout << "znak został wstawione w zle pole" << endl;
                continue;
            }
            catch (Table::OccupiedFieldException &e)
            {
                cout << "znak zostal wstawiony w pelne pole" << endl;
                continue;
            }

            switch (table.checkWin())
            {
            case Table::X:
                table.print();
                cout << endl;
                cout << "zwycieza gracz x";
                return 0;
            case Table::O:
                table.print();
                cout << endl;
                cout << "zwycieza gracz o";
                return 0;
            case Table::BLANK:
                table.print();
                cout << endl;
                cout << "remis";
                return 0;
            }

            table.print();
            ai->doMove(table);

            switch (table.checkWin())
            {
            case Table::X:
                table.print();
                cout << endl;
                cout << "zwycieza gracz x";
                return 0;
            case Table::O:
                table.print();
                cout << endl;
                cout << "zwycieza gracz o";
                return 0;
            case Table::BLANK:
                table.print();
                cout << endl;
                cout << "remis";
                return 0;
            }
        }
    }
}
