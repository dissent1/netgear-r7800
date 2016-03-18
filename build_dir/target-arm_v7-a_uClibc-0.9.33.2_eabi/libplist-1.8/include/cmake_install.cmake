# Install script for directory: /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/target-arm_v7-a_uClibc-0.9.33.2_eabi/libplist-1.8/include

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/usr")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "Release")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "dev")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/plist" TYPE FILE FILES
    "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/target-arm_v7-a_uClibc-0.9.33.2_eabi/libplist-1.8/include/plist/plist.h"
    "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/target-arm_v7-a_uClibc-0.9.33.2_eabi/libplist-1.8/include/plist/plist++.h"
    "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/target-arm_v7-a_uClibc-0.9.33.2_eabi/libplist-1.8/include/plist/Array.h"
    "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/target-arm_v7-a_uClibc-0.9.33.2_eabi/libplist-1.8/include/plist/Boolean.h"
    "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/target-arm_v7-a_uClibc-0.9.33.2_eabi/libplist-1.8/include/plist/Data.h"
    "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/target-arm_v7-a_uClibc-0.9.33.2_eabi/libplist-1.8/include/plist/Date.h"
    "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/target-arm_v7-a_uClibc-0.9.33.2_eabi/libplist-1.8/include/plist/Dictionary.h"
    "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/target-arm_v7-a_uClibc-0.9.33.2_eabi/libplist-1.8/include/plist/Integer.h"
    "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/target-arm_v7-a_uClibc-0.9.33.2_eabi/libplist-1.8/include/plist/Node.h"
    "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/target-arm_v7-a_uClibc-0.9.33.2_eabi/libplist-1.8/include/plist/Real.h"
    "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/target-arm_v7-a_uClibc-0.9.33.2_eabi/libplist-1.8/include/plist/String.h"
    "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/target-arm_v7-a_uClibc-0.9.33.2_eabi/libplist-1.8/include/plist/Structure.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "dev")

