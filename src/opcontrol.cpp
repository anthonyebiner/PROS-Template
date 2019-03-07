/*
*			    .ue~~%u.     cuuu....uK      .--~*teu.        .ue~~%u.      .xH888888Hx.
*			  .d88   z88i    888888888      dF     988Nx    .d88   z88i   .H8888888888888:
*			 x888E  *8888    8*888**"      d888b   `8888>  x888E  *8888   888*"""?""*88888X
*			:8888E   ^""     >  .....      ?8888>  98888F :8888E   ^""   'f     d8x.   ^%88k
*			98888E.=tWc.     Lz"  ^888Nu    "**"  x88888~ 98888E.=tWc.   '>    <88888X   '?8
*			98888N  '888N    F     '8888k        d8888*`  98888N  '888N   `:..:`888888>    8>
*			98888E   8888E   ..     88888>     z8**"`   : 98888E   8888E         `"*88     X
*			'8888E   8888E  @888L   88888    :?.....  ..F '8888E   8888E    .xHHhx.."      !
*			 ?888E   8888" '8888F   8888F   <""888888888~  ?888E   8888"   X88888888hx. ..!
*			  "88&   888"   %8F"   d888"    8:  "888888*    "88&   888"   !   "*888888888"
*			    ""==*""      ^"===*%"`      ""    "**"`       ""==*""            ^"***"`
*/

/*
This is the driver control section of the program. You should put all of your driver functions here.
*/

#include "declareStuff.hpp" //adds your motors, sensors, controllers, variables, and functions to the file


void opcontrol() { //This runs immediatly after the initialization
  while(true){
    //*******************Arcade Drive*******************//
    //use arcade drive if you want the best driving experience
    int power = MasterC.get_analog(ANALOG_LEFT_Y);
    int turn = MasterC.get_analog(ANALOG_LEFT_X);

    int left = power + turn;
    int right = power - turn;

    FrontRightM.move(right);
   	FrontLeftM.move(left);
    BackRightM.move(right);
   	BackLeftM.move(left);

    //*******************Tank Drive*******************//
    //use tank drive if you hate yourself and want an inferior driving scheme
    /*
    FrontRightM.move(ANALOG_RIGHT_Y);
   	FrontLeftM.move(ANALOG_LEFT_Y);
    BackRightM.move(ANALOG_RIGHT_Y);
   	BackLeftM.move(ANALOG_LEFT_Y);
    */
  }
}
