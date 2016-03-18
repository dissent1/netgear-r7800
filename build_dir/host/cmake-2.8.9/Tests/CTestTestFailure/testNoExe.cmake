CMAKE_MINIMUM_REQUIRED(VERSION 2.1)

# Settings:
SET(CTEST_DASHBOARD_ROOT                "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/host/cmake-2.8.9/Tests/CTestTest")
SET(CTEST_SITE                          "kubuntu12")
SET(CTEST_BUILD_NAME                    "CTestTest-Linux-clang++-NoExe")

SET(CTEST_SOURCE_DIRECTORY              "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/host/cmake-2.8.9/Tests/CTestTestFailure")
SET(CTEST_BINARY_DIRECTORY              "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/host/cmake-2.8.9/Tests/CTestTestFailure")
SET(CTEST_CVS_COMMAND                   "CVSCOMMAND-NOTFOUND")
SET(CTEST_CMAKE_GENERATOR               "Unix Makefiles")
SET(CTEST_BUILD_CONFIGURATION           "$ENV{CMAKE_CONFIG_TYPE}")
SET(CTEST_COVERAGE_COMMAND              "/usr/bin/gcov")
SET(CTEST_NOTES_FILES                   "${CTEST_SCRIPT_DIRECTORY}/${CTEST_SCRIPT_NAME}")

#CTEST_EMPTY_BINARY_DIRECTORY(${CTEST_BINARY_DIRECTORY})

CTEST_START(Experimental)
CTEST_TEST(BUILD "${CTEST_BINARY_DIRECTORY}" RETURN_VALUE res)
