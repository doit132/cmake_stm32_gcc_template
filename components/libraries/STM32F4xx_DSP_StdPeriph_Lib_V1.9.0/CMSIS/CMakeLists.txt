TARGET_SOURCES(
  ${PROJECT_NAME}
  PRIVATE # {{BEGIN_TARGET_SOURCES}}
          # ${CMAKE_CURRENT_LIST_DIR}/src/system_stm32f4xx.c
          # {{END_TARGET_SOURCES}}
)

# Add the Common/inc directory to the project include list
TARGET_INCLUDE_DIRECTORIES(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_LIST_DIR} ${CMAKE_CURRENT_LIST_DIR}/inc)
