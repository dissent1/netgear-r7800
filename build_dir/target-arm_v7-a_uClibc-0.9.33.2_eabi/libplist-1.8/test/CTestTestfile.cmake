# CMake generated Testfile for 
# Source directory: /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/target-arm_v7-a_uClibc-0.9.33.2_eabi/libplist-1.8/test
# Build directory: /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/target-arm_v7-a_uClibc-0.9.33.2_eabi/libplist-1.8/test
# 
# This file includes the relevent testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(Empty "plist_test" "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/target-arm_v7-a_uClibc-0.9.33.2_eabi/libplist-1.8/test/data/1.plist")
ADD_TEST(Small "plist_test" "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/target-arm_v7-a_uClibc-0.9.33.2_eabi/libplist-1.8/test/data/2.plist")
ADD_TEST(Medium "plist_test" "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/target-arm_v7-a_uClibc-0.9.33.2_eabi/libplist-1.8/test/data/3.plist")
ADD_TEST(Large "plist_test" "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/target-arm_v7-a_uClibc-0.9.33.2_eabi/libplist-1.8/test/data/4.plist")
ADD_TEST(Huge "plist_test" "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/target-arm_v7-a_uClibc-0.9.33.2_eabi/libplist-1.8/test/data/5.plist")
ADD_TEST(Big_Array "plist_test" "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/target-arm_v7-a_uClibc-0.9.33.2_eabi/libplist-1.8/test/data/6.plist")
ADD_TEST(EmptyCmp "plist_cmp" "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/target-arm_v7-a_uClibc-0.9.33.2_eabi/libplist-1.8/test/data/1.plist" "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/target-arm_v7-a_uClibc-0.9.33.2_eabi/libplist-1.8/test/data/1.plist.out")
ADD_TEST(SmallCmp "plist_cmp" "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/target-arm_v7-a_uClibc-0.9.33.2_eabi/libplist-1.8/test/data/2.plist" "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/target-arm_v7-a_uClibc-0.9.33.2_eabi/libplist-1.8/test/data/2.plist.out")
ADD_TEST(MediumCmp "plist_cmp" "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/target-arm_v7-a_uClibc-0.9.33.2_eabi/libplist-1.8/test/data/3.plist" "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/target-arm_v7-a_uClibc-0.9.33.2_eabi/libplist-1.8/test/data/3.plist.out")
ADD_TEST(LargeCmp "plist_cmp" "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/target-arm_v7-a_uClibc-0.9.33.2_eabi/libplist-1.8/test/data/4.plist" "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/target-arm_v7-a_uClibc-0.9.33.2_eabi/libplist-1.8/test/data/4.plist.out")
ADD_TEST(HugeCmp "plist_cmp" "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/target-arm_v7-a_uClibc-0.9.33.2_eabi/libplist-1.8/test/data/5.plist" "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/target-arm_v7-a_uClibc-0.9.33.2_eabi/libplist-1.8/test/data/5.plist.out")
ADD_TEST(Big_ArrayCmp "plist_cmp" "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/target-arm_v7-a_uClibc-0.9.33.2_eabi/libplist-1.8/test/data/6.plist" "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/target-arm_v7-a_uClibc-0.9.33.2_eabi/libplist-1.8/test/data/6.plist.out")
