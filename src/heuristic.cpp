#include "heuristic.h"
#include <cmath>
float h(Player pl, Board b)
{
    float score = 0;
    Sqlist list = b.ValidMoves(pl);
    
    if(pl==Bob)
     {
     /*
	    for(auto mv : list)
	    {
		if((mv.first=='1' || mv.first=='8')&& (mv.second=='A' || mv.second=='H')){
		    score+=10; // ESQUINA
		}
		else if(((mv.first=='1' || mv.first=='8')&& (mv.second=='B' || mv.second=='G'))
		|| ((mv.first=='2' || mv.first=='7')&& (mv.second=='A' || mv.second=='H'||mv.second=='B' || mv.second=='G'))
		)
		    score+=-10;//LAS CASILLAS CONTIGUAS A LA ESQUINA
		else if(((mv.first=='1' || mv.first=='8')&& (mv.second=='C' || mv.second=='D'
		|| mv.second=='E' || mv.second=='F')) || ((mv.first=='3' || mv.first=='4' || mv.first=='5' || mv.first=='6') 
		&& (mv.second=='A' || mv.second=='H'))
		)
		    score+= 5; //PARED
		else if((mv.first=='3'|| mv.first=='4'|| mv.first=='5'|| mv.first=='6')&&(mv.second=='C'|| mv.first=='D' || mv.first=='E' || mv.first=='F'  ) )
		    score += 2.0; // Centro
		else
		    score+= 0.0; //Resto
	    }*/
	    return 1/pow(2,b.ValidMoves(Opponent(pl)).size());
     }
     else
        {
        for(auto mv : list)
	    {
		if((mv.first=='1' || mv.first=='8')&& (mv.second=='A' || mv.second=='H')){
		    score+=100; // ESQUINA
		}
		else if(((mv.first=='1' || mv.first=='8')&& (mv.second=='B' || mv.second=='G'))
		|| ((mv.first=='2' || mv.first=='7')&& (mv.second=='A' || mv.second=='H'||mv.second=='B' || mv.second=='G'))
		)
		    score+=-10;//LAS CASILLAS CONTIGUAS A LA ESQUINA
		else if(((mv.first=='1' || mv.first=='8')&& (mv.second=='C' || mv.second=='D'
		|| mv.second=='E' || mv.second=='F')) || ((mv.first=='3' || mv.first=='4' || mv.first=='5' || mv.first=='6') 
		&& (mv.second=='A' || mv.second=='H'))
		)
		    score+= 5; //PARED
		else if((mv.first=='3'|| mv.first=='4'|| mv.first=='5'|| mv.first=='6')&&(mv.second=='C'|| mv.first=='D' || mv.first=='E' || mv.first=='F'  ) )
		    score += 2.0; // Centro
		else
		    score+= 0.0; //Resto
		
		
	    }
		 //return 1/pow(2,b.ValidMoves(Opponent(pl)).size());    
	}
    return score;
}
