
file(GLOB SRC src/*.cc)
file(GLOB HDR include/*.h)

INCLUDE_DIRECTORIES(${CMAKE_SOURCE_DIR}/core/include)
include_directories(include)
qt5_add_resources(RC Qcv.qrc)

add_executable(Qcv WIN32 ${SRC} ${HDR} ${RC})
target_link_libraries(Qcv ${QT_LIBS} ${OpenCV_LIBS} QcvCore)