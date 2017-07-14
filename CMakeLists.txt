cmake_minimum_required(VERSION 3.7)
project(c_primer_plus)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        c_&/c_and.c
        c_++/main.cpp
        c_array/arf.c
        c_array/c_array.c
        c_array/day_mon3.c
        c_array/order.c
        c_array/sum_arr1.c
        c_array/sum_arr2.c
        c_array/sum_arr3.c
        c_const/c_const.c
        c_const/c_const2.c
        c_data_type/bases.c
        c_data_type/beep.c
        c_data_type/char.c
        c_data_type/const.c
        c_data_type/pizza.c
        c_data_type/print1.c
        c_data_type/toobig.c
        c_enum/c_enum.c
        c_exchange/c_exchange.c
        c_file/c_read_file.c
        c_fun_pointer/c_fun_ptr.c
        c_function/lookcheck.c
        c_function/swap.c
        c_make/Hello.c
        c_malloc/c_malloc.c
        c_pointer/c_ponter_nil.c
        c_pointer/c_ptr_ops.c
        c_scanf/scanf.c
        c_struct/struct1.c
        c_typedef/c_typedef.c
        template.c)

add_executable(c_primer_plus ${SOURCE_FILES})