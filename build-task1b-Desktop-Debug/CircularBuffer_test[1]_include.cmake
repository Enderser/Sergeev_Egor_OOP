if(EXISTS "/home/ender/OOP/build-task1b-Desktop-Debug/CircularBuffer_test[1]_tests.cmake")
  include("/home/ender/OOP/build-task1b-Desktop-Debug/CircularBuffer_test[1]_tests.cmake")
else()
  add_test(CircularBuffer_test_NOT_BUILT CircularBuffer_test_NOT_BUILT)
endif()
