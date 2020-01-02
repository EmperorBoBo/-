#### CMakeLists 语法

#

1. **cmake_minimum_required(VERSION 3.4.1)**  指定需要的最小cmake版本
2. **aux_sorce_direcory(. SRC_LIST)** 查找当前目录下所有源文件并保存至 SRC_LIST 变量中
3. **add_library(<name> [STATIC | SHARED | MODULE ] [EXCLUDE_FROM_ALL] source1 source2 ...)**
    - <name> 库文件
    - STATIC(静态库),SHARED(动态库)，MODULE(?)
    - source1 ,source2 sourcen 源文件
    + 与set_target_properties 联合使用
    + 例如 
    ```
    add_library( test SHARED IMPORTED)
    set_target_properties( test   #指定目标库名称
                        PROPERTIES IMPORTED_LOCATION #指明要设置的参数
                        libs/src/${ANDROID_ABI}/libtest.so #设置导入库的路径
    )
    ```
4. **set** 设置CMake变量

     + set(EXECUTABLE_OUTPUT_PATH [output_path]) 设置可执行文件的输出路径 EXCUTABLE_OUTPUT_PATH 是个全局变量
     + set(LIABRARY_OUTPUT_PATH [output_path]) 设置库文件的输出路径LIBRARY_OUTPUT_PATH是全局变量
     + set(CMAKE_CXX_FLAGS "-Wall std=c++11") 设置c++编译参数
     + set(SOURCE_FILES main.cpp test.cpp ...)设置源文件集合 

5. **include_directories** 设置图文件位置
    ```
    #可以用相对/绝对路径，也可以自定义变量值
    include_directories(./include ${MY_INCLUDE})
    ```
6. **add_executable** 添加可执行文件
    ```
    add_executable(<name> ${SRC_LIST})
    ```
7.**target_link_libraries** 将若干个库连接到目标库文件

    ```
        target_link_libraries(<name> lib1,lib2,lib3)
        
        将 lib1,lib2,lib3 连接到 name 上
        name 依赖 lib1 ，lib1 依赖 lib2
    ```
8. **add_definitions** 为当前路径以及子目录源文件引入由-D引入的define flag

    ```
    add_definitions(-DFOO -DDEBUG)
    ```
9. **add_subdirectory**如果当前目录还有子目录时可以使用add_subdirectory,子目录中也需要包含有CMakeList.txt

    ```
    #sub_dir 指定包含CMakeList.txt和源码文件的子目录位置
    #binary_dir 是输出路径，一般可以不指定
    add_subdirectory(sub_dir [binary_dir])
    ```
10. **file** 文件操作命令
    
