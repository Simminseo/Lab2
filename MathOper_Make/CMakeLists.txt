#CMakeLists.txt
INCLUDE_DIRECTORIES (lib)
ADD_EXECUTABLE ( main main.c )
ADD_LIBRARY ( MathOper STATIC lib/MathOper.c lib/MathOper.h)
TARGET_LINK_LIBRARIES ( main PUBLIC MathOper )
