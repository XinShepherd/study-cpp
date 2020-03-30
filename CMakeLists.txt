cmake_minimum_required(VERSION 3.5)
project(study_cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(study_cpp main.cpp)
add_executable(exercises-0-3 exercises-0/exercise-0-3.cpp)
add_executable(hello_body exercises-0/main.cpp)
add_executable(hello_body2 exercises-1/main.cpp)
add_executable(exercise-1-2 exercises-1/exercise-1-2.cpp)
add_executable(exercise-1-3 exercises-1/exercise-1-3.cpp)
add_executable(exercise-1-5 exercises-1/exercise-1-5.cpp)
add_executable(exercise-1-6 exercises-1/exercise-1-6.cpp)
add_executable(main exercises-2/main.cpp)
add_executable(exercise-2-5 exercises-2/exercise-2-5.cpp)
add_executable(main-3 exercises-3/main.cpp)
add_executable(exercise-3-2 exercises-3/exercise-3-2.cpp)
add_executable(exercise-3-3 exercises-3/exercise-3-3.cpp)
add_executable(exercise-3-4 exercises-3/exercise-3-4.cpp)
add_executable(exercise-3-5 exercises-3/exercise-3-5.cpp)
# exercises-4
add_executable(main-4 exercises-4/main.cpp exercises-4/median.cpp exercises-4/median.h exercises-4/Student_info.cpp exercises-4/Student_info.h exercises-4/grade.cpp exercises-4/grade.h)
add_executable(exercise-4-2 exercises-4/exercise-4-2/exercise-4-2.cpp)
add_executable(exercise-4-5 exercises-4/exercise-4-5/exercise-4-5.cpp)
add_executable(exercise-4-7 exercises-4/exercise-4-7/exercise-4-7.cpp)
# exercises-5
add_executable(main-5 exercises-5/main.cpp)
add_executable(exercise-5-2 exercises-5/exercise-5-2/exercise-5-2.cpp exercises-4/median.cpp exercises-4/median.h exercises-4/Student_info.cpp exercises-4/Student_info.h exercises-4/grade.cpp exercises-4/grade.h)
add_executable(exercise-5-9 exercises-5/exercise-5-9/exercise-5-9.cpp)
add_executable(exercise-5-10 exercises-5/exercise-5-10/exercise-5-10.cpp)
add_executable(find_urls exercises-6/find_urls.cpp)
add_executable(exercise-6-3 exercises-6/exercise-6-3/exercise-6-3.cpp)
add_executable(exercise-6-4 exercises-6/exercise-6-4/exercise-6-4.cpp)
# exercises-7
add_executable(main-7 exercises-7/main.cpp)

# exercises-9
add_executable(main-9 exercises-9/main.cpp exercises-9/Student_info.cpp exercises-9/Student_info.h exercises-4/grade.cpp exercises-4/grade.h exercises-4/median.cpp exercises-4/median.h)

# exercises-10
add_executable(main-10 exercises-10/main.cpp exercises-11/Vec.cpp exercises-11/Vec.h exercises-11/main.cpp)
add_executable(main-11 exercises-11/Vec.cpp exercises-11/Vec.h exercises-11/main.cpp)
