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
This is the functions file of the program. Here you can make functions that you can call during for autonomus and driver control.
*/

#include "declareStuff.hpp" //adds your motors, sensors, controllers, variables, and functions to the file

float distanceToDegreesFront(int distance){
  float degrees = 0;
  degrees = 360*((distance)/(3.14159*frontWheelDiameter)); //make sure to set your front wheel diameter in initialize.cpp
  return degrees;
}

float distanceToDegreesBack(int distance){
  float degrees = 0;
  degrees = 360*((distance)/(3.14159*backWheelDiameter)); //make sure to set your back wheel diameter in initialize.cpp
  return degrees;
}


/////////////////////////////////////////////////////////////////////////////////////////


void moveForward(int distance, int velocity){
  FrontRightM.move_relative(distanceToDegreesFront(distance), velocity);
  FrontLeftM.move_relative(distanceToDegreesFront(distance), velocity);
  BackRightM.move_relative(distanceToDegreesBack(distance), velocity);
  BackLeftM.move_relative(distanceToDegreesBack(distance), velocity);
}

void moveBackward(int distance, int velocity){
  FrontRightM.move_relative(-distanceToDegreesFront(distance), velocity);
  FrontLeftM.move_relative(-distanceToDegreesFront(distance), velocity);
  BackRightM.move_relative(-distanceToDegreesBack(distance), velocity);
  BackLeftM.move_relative(-distanceToDegreesBack(distance), velocity);
}
