
find_library(FOO_LIBRARY NAMES foo HINTS "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/host/cmake-2.8.9/Tests/FindPackageModeMakefileTest" )
find_path(FOO_INCLUDE_DIR NAMES foo.h HINTS "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/host/cmake-2.8.9/Tests/FindPackageModeMakefileTest" )

set(FOO_LIBRARIES ${FOO_LIBRARY})
set(FOO_INCLUDE_DIRS "${FOO_INCLUDE_DIR}"  "/some/path/with a space/include" )

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(Foo  DEFAULT_MSG  FOO_LIBRARY FOO_INCLUDE_DIR )
