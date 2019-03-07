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
This is the initialization file for your program. You will want to put anything that you want to be done before the
driver control and autonomous peroids. This is also a good place to define all of you motors, sensors, controllers,
and variables
*/

#include "declareStuff.hpp" //adds your motors, sensors, controllers, variables, and functions to the file

//define your motors, sensors, and controllers here
//make sure they are declared in your declareStuff.hpp file in the include folder
Motor FrontRightM(1, MOTOR_GEARSET_18, true, MOTOR_ENCODER_DEGREES);//make sure to set the correct gearset
Motor FrontLeftM(2, MOTOR_GEARSET_18, false, MOTOR_ENCODER_DEGREES);
Motor BackRightM(3, MOTOR_GEARSET_36, true, MOTOR_ENCODER_DEGREES);
Motor BackLeftM(4, MOTOR_GEARSET_36, false, MOTOR_ENCODER_DEGREES);
Motor ArmM(5, MOTOR_GEARSET_6, false, MOTOR_ENCODER_DEGREES);

Vision VisionSensor(9);

Controller MasterC(CONTROLLER_MASTER);

//define your variables here
int frontWheelDiameter = 6;
int backWheelDiameter = 8;


void initialize() { //this runs immidietly after you turn on the robot

}

void disabled() { //this runs when your robot is disabled after the autonomous period

}

void competition_initialize() { //This runs when your robot is disabled before the autonomous period

}
