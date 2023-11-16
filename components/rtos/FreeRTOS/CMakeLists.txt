TARGET_SOURCES(
  ${PROJECT_NAME}
  PRIVATE # {{BEGIN_TARGET_SOURCES}}
          ${CMAKE_CURRENT_LIST_DIR}/croutine.c
          ${CMAKE_CURRENT_LIST_DIR}/event_groups.c
          ${CMAKE_CURRENT_LIST_DIR}/list.c
          ${CMAKE_CURRENT_LIST_DIR}/queue.c
          ${CMAKE_CURRENT_LIST_DIR}/stream_buffer.c
          ${CMAKE_CURRENT_LIST_DIR}/tasks.c
          ${CMAKE_CURRENT_LIST_DIR}/timers.c
          ${CMAKE_CURRENT_LIST_DIR}/portable/MemMang/heap_4.c
          ${CMAKE_CURRENT_LIST_DIR}/portable/GCC/ARM_CM3/port.c
          # {{END_TARGET_SOURCES}}
)

# Add the Common/inc directory to the project include list
TARGET_INCLUDE_DIRECTORIES(
    ${PROJECT_NAME}
    PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
    ${CMAKE_CURRENT_LIST_DIR}/include
    ${CMAKE_CURRENT_LIST_DIR}/portable/GCC/ARM_CM3)
