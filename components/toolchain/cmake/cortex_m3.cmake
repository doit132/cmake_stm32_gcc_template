# 目标平台名称；
SET(CMAKE_SYSTEM_NAME Generic)
SET(CMAKE_SYSTEM_PROCESSOR cortex-m3)

SET(THREADX_ARCH "cortex_m3")
SET(THREADX_TOOLCHAIN "gnu")

SET(MCPU_FLAGS "-mthumb -mcpu=cortex-m3 -mthumb-interwork")
SET(VFP_FLAGS "")

set(MESSAGE_SEPARATOR "------------------------------------------------------")
MESSAGE(STATUS ${MESSAGE_SEPARATOR} ${MESSAGE_SEPARATOR})
MESSAGE(STATUS "platform: ${MCPU_FLAGS} ${VFP_FLAGS} ${FLOAT_ABI}")
MESSAGE(STATUS ${MESSAGE_SEPARATOR} ${MESSAGE_SEPARATOR} "\n")

INCLUDE(${CMAKE_CURRENT_LIST_DIR}/cross_compiler.cmake)
