# CMake generated Testfile for 
# Source directory: /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/host/cmake-2.8.9
# Build directory: /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/host/cmake-2.8.9
# 
# This file includes the relevent testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
INCLUDE("/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/host/cmake-2.8.9/Tests/EnforceConfig.cmake")
ADD_TEST(SystemInformationNew "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/host/cmake-2.8.9/bin/cmake" "--system-information" "-G" "Unix Makefiles")
SUBDIRS(Utilities/KWIML)
SUBDIRS(Source/kwsys)
SUBDIRS(Utilities/cmzlib)
SUBDIRS(Utilities/cmcurl)
SUBDIRS(Utilities/cmcompress)
SUBDIRS(Utilities/cmbzip2)
SUBDIRS(Utilities/cmlibarchive)
SUBDIRS(Utilities/cmexpat)
SUBDIRS(Source/CursesDialog/form)
SUBDIRS(Source)
SUBDIRS(Utilities)
SUBDIRS(Tests)
SUBDIRS(Docs)
