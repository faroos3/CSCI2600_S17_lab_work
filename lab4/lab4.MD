This is the .md for lab4, the CMAKE lab. Double-checking repo....

After running cmake lab4 after step 2...
-- The C compiler identification is GNU 5.4.0
-- The CXX compiler identification is GNU 5.4.0
-- Check for working C compiler: /usr/bin/cc
-- Check for working C compiler: /usr/bin/cc -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: /usr/bin/c++
-- Check for working CXX compiler: /usr/bin/c++ -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done
-- Generating done
-- Build files have been written to: /home/samad/Dropbox/samads_stuff/RPI_school_work_and_job_stuff/rpi_spring_2017/intro_to_open_source/labs


After step 3...
$ cmake ..
-- The C compiler identification is GNU 5.4.0
-- The CXX compiler identification is GNU 5.4.0
-- Check for working C compiler: /usr/bin/cc
-- Check for working C compiler: /usr/bin/cc -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: /usr/bin/c++
-- Check for working CXX compiler: /usr/bin/c++ -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done
-- Generating done
-- Build files have been written to: /home/samad/Dropbox/samads_stuff/RPI_school_work_and_job_stuff/rpi_spring_2017/intro_to_open_source/labs/lab4/build
samad@Samad-Ubuntu:~/Dropbox/samads_stuff/RPI_school_work_and_job_stuff/rpi_spring_2017/intro_to_open_source/labs/lab4/build$ make
Scanning dependencies of target MathFunctions
[ 25%] Building CXX object MathFunctions/CMakeFiles/MathFunctions.dir/mysqrt.cpp.o
[ 50%] Linking CXX static library libMathFunctions.a
[ 50%] Built target MathFunctions
Scanning dependencies of target Tutorial
[ 75%] Building CXX object CMakeFiles/Tutorial.dir/tutorial.cpp.o
[100%] Linking CXX executable Tutorial
[100%] Built target Tutorial
samad@Samad-Ubuntu:~/Dropbox/samads_stuff/RPI_school_work_and_job_stuff/rpi_spring_2017/intro_to_open_source/labs/lab4/build$ ctest
Test project /home/samad/Dropbox/samads_stuff/RPI_school_work_and_job_stuff/rpi_spring_2017/intro_to_open_source/labs/lab4/build
    Start 1: TutorialRuns
    1/5 Test #1: TutorialRuns .....................   Passed    0.00 sec
        Start 2: TutorialComp25
	2/5 Test #2: TutorialComp25 ...................   Passed    0.00 sec
	    Start 3: TutorialNegative
	    3/5 Test #3: TutorialNegative .................   Passed    0.00 sec
	        Start 4: TutorialSmall
		4/5 Test #4: TutorialSmall ....................   Passed    0.00 sec
		    Start 5: TutorialUsage
		    5/5 Test #5: TutorialUsage ....................   Passed    0.00 sec

100% tests passed, 0 tests failed out of 5

Total Test time (real) =   0.01 sec

After completing step 4....

samad@Samad-Ubuntu:~/Dropbox/samads_stuff/RPI_school_work_and_job_stuff/rpi_spring_2017/intro_to_open_source/labs/lab4/build$ cmake ..
-- Configuring done
-- Generating done
-- Build files have been written to: /home/samad/Dropbox/samads_stuff/RPI_school_work_and_job_stuff/rpi_spring_2017/intro_to_open_source/labs/lab4/build
samad@Samad-Ubuntu:~/Dropbox/samads_stuff/RPI_school_work_and_job_stuff/rpi_spring_2017/intro_to_open_source/labs/lab4/build$ cmake ..
-- Configuring done
-- Generating done
-- Build files have been written to: /home/samad/Dropbox/samads_stuff/RPI_school_work_and_job_stuff/rpi_spring_2017/intro_to_open_source/labs/lab4/build
samad@Samad-Ubuntu:~/Dropbox/samads_stuff/RPI_school_work_and_job_stuff/rpi_spring_2017/intro_to_open_source/labs/lab4/build$ make
[ 50%] Built target MathFunctions
Scanning dependencies of target Tutorial
[ 75%] Building CXX object CMakeFiles/Tutorial.dir/tutorial.cpp.o
[100%] Linking CXX executable Tutorial
[100%] Built target Tutorial
samad@Samad-Ubuntu:~/Dropbox/samads_stuff/RPI_school_work_and_job_stuff/rpi_spring_2017/intro_to_open_source/labs/lab4/build$ ctest
Test project /home/samad/Dropbox/samads_stuff/RPI_school_work_and_job_stuff/rpi_spring_2017/intro_to_open_source/labs/lab4/build
    Start 1: TutorialRuns
    1/5 Test #1: TutorialRuns .....................   Passed    0.00 sec
        Start 2: TutorialUsage
	2/5 Test #2: TutorialUsage ....................   Passed    0.00 sec
	    Start 3: TutorialComp25
	    3/5 Test #3: TutorialComp25 ...................   Passed    0.00 sec
	        Start 4: TutorialComp-25
		4/5 Test #4: TutorialComp-25 ..................   Passed    0.00 sec
		    Start 5: TutorialComp0.0001
		    5/5 Test #5: TutorialComp0.0001 ...............   Passed    0.00 sec

100% tests passed, 0 tests failed out of 5

Total Test time (real) =   0.00 sec

After completing step 5...
cmake ..
-- Configuring done
-- Generating done
-- Build files have been written to: /home/samad/Dropbox/samads_stuff/RPI_school_work_and_job_stuff/rpi_spring_2017/intro_to_open_source/labs/lab4/build
samad@Samad-Ubuntu:~/Dropbox/samads_stuff/RPI_school_work_and_job_stuff/rpi_spring_2017/intro_to_open_source/labs/lab4/build$ make
Scanning dependencies of target MakeTable
[ 14%] Building CXX object MathFunctions/CMakeFiles/MakeTable.dir/MakeTable.cxx.o
[ 28%] Linking CXX executable MakeTable
[ 28%] Built target MakeTable
[ 42%] Generating Table.h
Scanning dependencies of target MathFunctions
[ 57%] Building CXX object MathFunctions/CMakeFiles/MathFunctions.dir/mysqrt.cpp.o
[ 71%] Linking CXX static library libMathFunctions.a
[ 71%] Built target MathFunctions
Scanning dependencies of target Tutorial
[ 85%] Building CXX object CMakeFiles/Tutorial.dir/tutorial.cpp.o
[100%] Linking CXX executable Tutorial
[100%] Built target Tutorial
samad@Samad-Ubuntu:~/Dropbox/samads_stuff/RPI_school_work_and_job_stuff/rpi_spring_2017/intro_to_open_source/labs/lab4/build$ ctest
Test project /home/samad/Dropbox/samads_stuff/RPI_school_work_and_job_stuff/rpi_spring_2017/intro_to_open_source/labs/lab4/build
    Start 1: TutorialRuns
1/9 Test #1: TutorialRuns .....................   Passed    0.00 sec
    Start 2: TutorialUsage
2/9 Test #2: TutorialUsage ....................   Passed    0.00 sec
    Start 3: TutorialComp4
3/9 Test #3: TutorialComp4 ....................   Passed    0.00 sec
    Start 4: TutorialComp9
4/9 Test #4: TutorialComp9 ....................   Passed    0.00 sec
    Start 5: TutorialComp5
5/9 Test #5: TutorialComp5 ....................   Passed    0.00 sec
    Start 6: TutorialComp7
6/9 Test #6: TutorialComp7 ....................   Passed    0.00 sec
    Start 7: TutorialComp25
7/9 Test #7: TutorialComp25 ...................   Passed    0.00 sec
    Start 8: TutorialComp-25
8/9 Test #8: TutorialComp-25 ..................   Passed    0.00 sec
    Start 9: TutorialComp0.0001
9/9 Test #9: TutorialComp0.0001 ...............   Passed    0.00 sec

100% tests passed, 0 tests failed out of 9

Total Test time (real) =   0.01 sec
samad@Samad-Ubuntu:~/Dropbox/samads_stuff/RPI_school_work_and_job_stuff/rpi_spring_2017/intro_to_open_source/labs/lab4/build$ 

