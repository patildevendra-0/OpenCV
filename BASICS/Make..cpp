/*
//------------------------------------------------------------------------------------------------//
//                                      MAKE FILE 
//------------------------------------------------------------------------------------------------//

    Makefile : 
                1.  A makefile is a text file that contains a set of rules and dependencies for building a software project.
                    The make utility is a build automation tool that automatically builds executable programs and libraries from source code by reading files called makefiles.

                2.  without extension we create Makefile    
                3.  for creation we just type as  :-------- Makefile

                4:  ex:(containts in Makefile)

                        start: 
                             gcc demo.c -o myexe

                        run: 
                            ./myexe

                5: Here are some notable types or variations of make:
                    a) GNU Make
                    b) BSD Make  BMake
                    c) Microsoft NMAKE  
                    d) CMake
                    e) Makepp



    CMake : 
                1: Cross-Platform Make
                2: CMake is a higher-level build system that generates platform-specific build files. 
                   It simplifies the process of managing dependencies and building complex projects.

               # 3: CMakeLists.txt :
                                  CMake configuration files that describe the project structure, sources, and dependencies.

                    *Example of CMakeLists.txt file

                                   # Set the minimum required version of CMake
                                    cmake_minimum_required(VERSION 2.8)

                                    # Set the project name to "DisplayImage"
                                    project(DisplayImage)

                                    # Find the OpenCV package
                                    find_package(OpenCV REQUIRED)

                                    # Include the directories where OpenCV headers are located
                                    include_directories(${OpenCV_INCLUDE_DIRS})

                                    # Create an executable named "DisplayImage" from the source file "DisplayImage.cpp"
                                    add_executable(DisplayImage DisplayImage.cpp)

                                    # Link the "DisplayImage" executable with the OpenCV libraries
                                    target_link_libraries(DisplayImage ${OpenCV_LIBS})
                                    

                4: why we first cmake . then make 
                                        
                                        The sequence of cmake . followed by make is a common practice in CMake-based projects. Let's break down why this sequence is used:

                                        cmake . (CMake Configuration):

                                               1] When you run cmake ., you are telling CMake to configure the project based on the CMakeLists.txt file in the current directory (.).
                                               2] CMake examines the project structure, identifies source files, dependencies, and generates platform-specific build files (e.g., Makefiles, Visual Studio project files).
                                               3] This step sets up the build environment and ensures that everything needed for the project is in place.
                                        
                                        make (Build Process):

                                               1] Once CMake has configured the project successfully, you use make to initiate the actual build process.
                                               2] make reads the generated Makefile and compiles the source code, linking object files, and creating the final executable or library.
                                               3] It also manages dependencies, ensuring that only the necessary parts of the project are rebuilt when changes occur.                  













//------------------------------------------------------------------------------------------------//
*/