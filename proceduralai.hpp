#pragma once

#include "table.hpp"
#include "ai.hpp"
#include "randomai.hpp"

class ProceduralAI : public IAi
{
public:
    bool win(Table &table)
    {
        // O| |
        //-------
        //  | |
        //-------
        //  | |

        if (table.what(0, 0) == table.O)
        {
            if (table.what(1, 0) == table.O)
            {
                if (table.what(2, 0) == Table::BLANK)
                {
                    table.putO(2, 0);
                    return true;
                }
            }
            if (table.what(2, 0) == table.O)
            {
                if (table.what(1, 0) == Table::BLANK)
                {
                    table.putO(1, 0);
                    return true;
                }
            }
            if (table.what(0, 1) == table.O)
            {
                if (table.what(0, 2) == Table::BLANK)
                {
                    table.putO(0, 2);
                    return true;
                }
            }
            if (table.what(0, 2) == table.O)
            {
                if (table.what(2, 0) == Table::BLANK)
                {
                    table.putO(2, 0);
                    return true;
                }
            }
            if (table.what(1, 1) == table.O)
            {
                if (table.what(2, 2) == Table::BLANK)
                {
                    table.putO(2, 2);
                    return true;
                }
            }
            if (table.what(2, 2) == table.O)
            {
                if (table.what(1, 1) == Table::BLANK)
                {
                    table.putO(1, 1);
                }
                return true;
            }
        }

        //  |O|
        //-------
        //  | |
        //-------
        //  | |

        if (table.what(1, 0) == table.O)
        {
            if (table.what(2, 0) == table.O)
            {
                if (table.what(2, 0) == Table::BLANK)
                {
                    table.putO(2, 0);
                    return true;
                }
            }
            if (table.what(1, 1) == table.O)
            {
                if (table.what(1, 2) == Table::BLANK)
                {
                    table.putO(1, 2);
                    return true;
                }
            }
            if (table.what(1, 2) == table.O)
            {
                if (table.what(1, 1) == Table::BLANK)
                {
                    table.putO(1, 1);
                    return true;
                }
            }
        }

        //  | |O
        //-------
        //  | |
        //-------
        //  | |

        if (table.what(2, 0) == table.O)
        {

            if (table.what(2, 1) == table.O)
            {
                if (table.what(2, 2) == Table::BLANK)
                {
                    table.putO(2, 2);
                    return true;
                }
            }
            if (table.what(2, 2) == table.O)
            {
                if (table.what(2, 1) == Table::BLANK)
                {
                    table.putO(2, 1);
                    return true;
                }
            }
            if (table.what(1, 1) == table.O)
            {
                if (table.what(0, 2) == Table::BLANK)
                {
                    table.putO(0, 2);
                    return true;
                }
            }
            if (table.what(0, 2) == table.O)
            {
                if (table.what(1, 1) == Table::BLANK)
                {
                    table.putO(1, 1);
                    return true;
                }
            }
        }

        //  | |
        //-------
        // O| |
        //-------
        //  | |

        if (table.what(0, 1) == table.O)
        {
            if (table.what(1, 1) == table.O)
            {
                if (table.what(2, 1) == Table::BLANK)
                {
                    table.putO(2, 1);
                    return true;
                }
            }
            if (table.what(2, 1) == table.O)
            {
                if (table.what(1, 1) == Table::BLANK)
                {
                    table.putO(1, 1);
                    return true;
                }
            }
            if (table.what(0, 2) == table.O)
            {
                if (table.what(0, 0) == Table::BLANK)
                {
                    table.putO(0, 0);
                    return true;
                }
            }
        }

        //  | |
        //-------
        // |O|
        //-------
        //  | |

        if (table.what(1, 1) == table.O)
        {
            if (table.what(2, 1) == table.O)
            {
                if (table.what(0, 1) == Table::BLANK)
                {
                    table.putO(0, 1);
                    return true;
                }
            }
            if (table.what(2, 2) == table.O)
            {
                if (table.what(0, 0) == Table::BLANK)
                {
                    table.putO(0, 0);
                    return true;
                }
            }
            if (table.what(0, 2) == table.O)
            {
                if (table.what(2, 0) == Table::BLANK)
                {
                    table.putO(2, 0);
                    return true;
                }
            }
        }

        //  | |
        //-------
        //  | |O
        //-------
        //  | |

        if (table.what(2, 1) == table.O)
        {
            if (table.what(2, 2) == table.O)
            {
                if (table.what(2, 0) == Table::BLANK)
                {
                    table.putO(2, 0);
                    return true;
                }
            }
        }

        //  | |
        //-------
        // |   |
        //-------
        // O | |

        if (table.what(0, 2) == table.O)
        {
            if (table.what(1, 2) == table.O)
            {
                if (table.what(2, 2) == Table::BLANK)
                {
                    table.putO(2, 2);
                    return true;
                }
            }
            if (table.what(2, 2) == table.O)
            {
                if (table.what(1, 2) == Table::BLANK)
                {
                    table.putO(1, 2);
                    return true;
                }
            }
        }

        //  | |
        //-------
        // |   |
        //-------
        //  |O |

        if (table.what(1, 2) == table.O)
        {
            if (table.what(2, 2) == table.O)
            {
                if (table.what(0, 2) == Table::BLANK)
                {
                    table.putO(0, 2);
                    return true;
                }
            }
            if (table.what(0, 2) == table.O)
            {
                if (table.what(2, 2) == Table::BLANK)
                {
                    table.putO(2, 2);
                    return true;
                }
            }
        }

        //  | |
        //-------
        // |   |
        //-------
        //  | |O

        if (table.what(2, 2) == table.O)
        {
            if (table.what(1, 1) == table.O)
            {
                if (table.what(0, 0) == Table::BLANK)
                {
                    table.putO(0, 0);
                    return true;
                }
            }
            if (table.what(0, 0) == table.O)
            {
                if (table.what(1, 1) == Table::BLANK)
                {
                    table.putO(1, 1);
                    return true;
                }
            }
        }
    }

    bool block(Table &table)
    {
        // x| |
        //-------
        //  | |
        //-------
        //  | |

        if (table.what(0, 0) == table.X)
        {
            if (table.what(1, 0) == table.X)
            {
                if (table.what(2, 0) == Table::BLANK)
                {
                    table.putO(2, 0);
                    return true;
                }
            }
            if (table.what(2, 0) == table.X)
            {
                if (table.what(1, 0) == Table::BLANK)
                {
                    table.putO(1, 0);
                    return true;
                }
            }
            if (table.what(0, 1) == table.X)
            {
                if (table.what(0, 2) == Table::BLANK)
                {
                    table.putO(0, 2);
                    return true;
                }
            }
            if (table.what(0, 2) == table.X)
            {
                if (table.what(2, 0) == Table::BLANK)
                {
                    table.putO(2, 0);
                    return true;
                }
            }
            if (table.what(1, 1) == table.X)
            {
                if (table.what(2, 2) == Table::BLANK)
                {
                    table.putO(2, 2);
                    return true;
                }
            }
            if (table.what(2, 2) == table.X)
            {
                if (table.what(1, 1) == Table::BLANK)
                {
                    table.putO(1, 1);
                }
                return true;
            }
        }

        //  |O|
        //-------
        //  | |
        //-------
        //  | |

        if (table.what(1, 0) == table.X)
        {
            if (table.what(2, 0) == table.X)
            {
                if (table.what(2, 0) == Table::BLANK)
                {
                    table.putO(2, 0);
                    return true;
                }
            }
            if (table.what(1, 1) == table.X)
            {
                if (table.what(1, 2) == Table::BLANK)
                {
                    table.putO(1, 2);
                    return true;
                }
            }
            if (table.what(1, 2) == table.X)
            {
                if (table.what(1, 1) == Table::BLANK)
                {
                    table.putO(1, 1);
                    return true;
                }
            }
        }

        //  | |O
        //-------
        //  | |
        //-------
        //  | |

        if (table.what(2, 0) == table.X)
        {

            if (table.what(2, 1) == table.X)
            {
                if (table.what(2, 2) == Table::BLANK)
                {
                    table.putO(2, 2);
                    return true;
                }
            }
            if (table.what(2, 2) == table.X)
            {
                if (table.what(2, 1) == Table::BLANK)
                {
                    table.putO(2, 1);
                    return true;
                }
            }
            if (table.what(1, 1) == table.X)
            {
                if (table.what(0, 2) == Table::BLANK)
                {
                    table.putO(0, 2);
                    return true;
                }
            }
            if (table.what(0, 2) == table.X)
            {
                if (table.what(1, 1) == Table::BLANK)
                {
                    table.putO(1, 1);
                    return true;
                }
            }
        }

        //  | |
        //-------
        // O| |
        //-------
        //  | |

        if (table.what(0, 1) == table.X)
        {
            if (table.what(1, 1) == table.X)
            {
                if (table.what(2, 1) == Table::BLANK)
                {
                    table.putO(2, 1);
                    return true;
                }
            }
            if (table.what(2, 1) == table.X)
            {
                if (table.what(1, 1) == Table::BLANK)
                {
                    table.putO(1, 1);
                    return true;
                }
            }
            if (table.what(0, 2) == table.X)
            {
                if (table.what(0, 0) == Table::BLANK)
                {
                    table.putO(0, 0);
                    return true;
                }
            }
        }

        //  | |
        //-------
        // |O|
        //-------
        //  | |

        if (table.what(1, 1) == table.X)
        {
            if (table.what(2, 1) == table.X)
            {
                if (table.what(0, 1) == Table::BLANK)
                {
                    table.putO(0, 1);
                    return true;
                }
            }
            if (table.what(2, 2) == table.X)
            {
                if (table.what(0, 0) == Table::BLANK)
                {
                    table.putO(0, 0);
                    return true;
                }
            }
            if (table.what(0, 2) == table.X)
            {
                if (table.what(2, 0) == Table::BLANK)
                {
                    table.putO(2, 0);
                    return true;
                }
            }
        }

        //  | |
        //-------
        //  | |O
        //-------
        //  | |

        if (table.what(2, 1) == table.X)
        {
            if (table.what(2, 2) == table.X)
            {
                if (table.what(2, 0) == Table::BLANK)
                {
                    table.putO(2, 0);
                    return true;
                }
            }
        }

        //  | |
        //-------
        // |   |
        //-------
        // O | |

        if (table.what(0, 2) == table.X)
        {
            if (table.what(1, 2) == table.X)
            {
                if (table.what(2, 2) == Table::BLANK)
                {
                    table.putO(2, 2);
                    return true;
                }
            }
            if (table.what(2, 2) == table.X)
            {
                if (table.what(1, 2) == Table::BLANK)
                {
                    table.putO(1, 2);
                    return true;
                }
            }
        }

        //  | |
        //-------
        // |   |
        //-------
        //  |O |

        if (table.what(1, 2) == table.X)
        {
            if (table.what(2, 2) == table.X)
            {
                if (table.what(0, 2) == Table::BLANK)
                {
                    table.putO(0, 2);
                    return true;
                }
            }
            if (table.what(0, 2) == table.X)
            {
                if (table.what(2, 2) == Table::BLANK)
                {
                    table.putO(2, 2);
                    return true;
                }
            }
        }

        //  | |
        //-------
        // |   |
        //-------
        //  | |O

        if (table.what(2, 2) == table.X)
        {
            if (table.what(1, 1) == table.X)
            {
                if (table.what(0, 0) == Table::BLANK)
                {
                    table.putO(0, 0);
                    return true;
                }
            }
            if (table.what(0, 0) == table.X)
            {
                if (table.what(1, 1) == Table::BLANK)
                {
                    table.putO(1, 1);
                    return true;
                }
            }
        }

        return false;
    }

    bool branch(Table &table)
    {
        return false;
    }

    bool doBlockingBranch(Table &table)
    {
        return false;
    }

    bool doCenter(Table &table)
    {
        if(table.what(1,1)==Table::BLANK)
        {
            table.putO(1,1);
            return true;
        }
        return false;
    }
    bool doOppositeCorner(Table &table)
    {
        if(table.what(0,0)==Table::X)
        {
            if(table.what(2,2)==Table::BLANK)
            {
                table.putO(2,2);
                return true;
            }
        }
        
        if(table.what(2,0)==Table::X)
        {
            if(table.what(0,2)==Table::BLANK)
            {
                table.putO(0,2);
                return true;
            }
        }
        
        if(table.what(0,2)==Table::X)
        {
            if(table.what(2,0)==Table::BLANK)
            {
                table.putO(2,0);
                return true;
            }
        }
        
        if(table.what(2,2)==Table::X)
        {
            if(table.what(0,0)==Table::BLANK)
            {
                table.putO(0,0);
                return true;
            }
        }
        return false;
    }
    
   bool doEmptyCorner(Table &table)
   {
       if(table.what(0,0)==Table::BLANK)
       {
           table.putO(0,0);
           return true;
       }
       
       if(table.what(2,0)==Table::BLANK)
       {
           table.putO(2,0);
           return true;
       }
       if(table.what(0,2)==Table::BLANK)
       {
           table.putO(0,2);
           return true;
       }
       if(table.what(2,2)==Table::BLANK)
       {
           table.putO(2,2);
           return true;
       }
       return false;
   } 

    bool doEmptyEdge(Table &table)
    {
        
        return false;
    }

    void doMove(Table &table)
    {

        if (win(table))
        {
            return;
        }

        if (block(table))
        {
            return;
        }

        if (branch(table))
        {
            return;
        }

        if (doBlockingBranch(table))
        {
            return;
        }

        if (doCenter(table))
        {
            return;
        }

        if (doEmptyCorner(table))
        {
            return;
        }

        if (doEmptyEdge(table))
        {
            return;
        }

        RandomAi x;
        x.doMove(table);
    }
};