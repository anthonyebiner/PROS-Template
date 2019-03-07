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
This file is where you have to declare your motors, sensors, controllers, variables, functions, and
anything else that you want all of your files to be able to access.
*/

#ifndef declareStuff
#define declareStuff
#include "main.h"

//add all your motors, sensors, and controllers in here
//make sure to define in your initialize.cpp file
extern Motor FrontRightM;
extern Motor FrontLeftM;
extern Motor BackRightM;
extern Motor BackLeftM;
extern Motor ArmM;

extern Vision VisionSensor;

extern Controller MasterC;

//add any variables that you want to use in multiple files
//make sure to define in your initialize.cpp file
extern int frontWheelDiameter;
extern int backWheelDiameter;

//add any functions in your functions.cpp file that you want to use in other files
void moveForward(int distance, int speed);
void moveBackward(int distance, int velocity);
#endif
