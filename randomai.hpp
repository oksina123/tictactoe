#pragma once

#include "ai.hpp"

class RandomAi : public IAi
{
    public:
    void doMove(Table &table)
    {
        while (true)
        {
            int x = 0;
            int y = 0;
            int yx = 0;
            int xx = 0;

            yx = (std::rand() % 2) + 0;
            xx = (std::rand() % 2) + 0;

            try
            {
                table.putO(xx, yx);
                break;
            }
            catch (Table::OutOfBoundsException &e)
            {
                cout << "znak został wstawione w zle pole" << endl;
                continue;
            }
            catch (Table::OccupiedFieldException $e) {
                continue;
            }
        }
    }
};