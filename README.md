# PROS TEMPLATE
Did you just download PROS for V5 and are overwhelmed by the many files and new language? If so, then
this handy template is for you. This contains everything you need to get started in PROS. So lets get
started.

-----------------------------------------------------------------------------------------------------

To start you off, you must download PROS and git.

DOWNLOAD PROS: https://github.com/purduesigbots/pros-cli3/releases (pros-windows-3.1.3.0-64bit.exe)

DOWNLOAD GIT: https://git-scm.com/downloads

-----------------------------------------------------------------------------------------------------

The API is a great place for you to figure out this new language. I still use it frequently whenever
I forget the how to do something.

API: https://pros.cs.purdue.edu/v5/api/cpp/index.html

------------------------------------------------------------------------------------------------------

You might be concerned about how many files there are, but don't worry. The only files you need to worry
about are all the ones in the src folder and the declareStuff file in the include folder. The src folder
is where you can put all the code that you actually write. Inside you will find four files: autonomous.cpp,
functions.cpp, initialize.cpp, and opcontrol.cpp. What exactly these files are used for is explained Inside
the file itself. The declareStuff.hpp file in the include folder holds everything you want to share between
files, such as motors or variables.

-------------------------------------------------------------------------------------------------------

If you are transitioning from RobotC, you might be wondering how to compile and download the program to the
brain. If you changed any of the header files in the include folder, you must click PROS in the ribbon, then
click Build, then click All. If not, then you can just click the graphical Build-Pros-Project button. You have
to do this every time before downloading the code. Once it successfully completes, you can download the code by
pressing the "Upload PROS Project" button. Then you are ready to go!
