# SDM and Head Pose Estimation

### example

git clone [https://github.com/TrungDong888/Face-Angle-Detection.git]

    cd sdm/example/
    ./Roboman-SDM-TEST.exe

You will look like as follows:

![image](https://github.com/TrungDong888/Face-Angle-Detection/blob/main/example/z3467319622770_1711bd49785ca8e6731c48ff308b2548.jpg)

![image](https://github.com/TrungDong888/Face-Angle-Detection/blob/main/example/z3467319635189_869bb42c51ca70d77004517c4ed797c2.jpg)

![image](https://github.com/TrungDong888/Face-Angle-Detection/blob/main/example/z3467319638507_1b843bee1789158c9e1105cd9d16ddc6.jpg)



### How to compile on Windows？

Make sure you have installed the cmake-gui & Qt5.3.2 (mingw will be needed).

	mkdir build
	cd build
	cmake-gui
	mingw32-make

### How to compile on Ubuntu？

Maybe you should modify the CMakeLists.txt about OpenCV libs

	mkdir build
	cd build
	cmake ..
	make
	cp Roboman-SDM-TEST ../example/
	cd ../example/
	./Roboman-SDM-TEST

### How to compile on iOS？
1.Copy "haar_roboman_ff_alt2.xml" & "roboman-landmark-model.bin" to your iOS Project.

2.Add the OpenCV2.framework to you iOS Project, make sure you can easily read camera and show frame with OpenCV. 

3.Copy the include folder under src folder to you iOS Project source code, just copy, not anything else.

4.And then "#include "include/ldmarkmodel.h"" in your .mm file, make sure not in .h file, use it like test_model.cpp, Compile & enjoy it.

5.Make sure iOS project Build Settings option "Enable Bitcode" is "NO" (above XCode7).

### How to compile on Android？

According to Android-cmake-Tool.
