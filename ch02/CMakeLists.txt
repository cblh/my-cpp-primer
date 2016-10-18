# If necessary, use the RELATIVE flag, otherwise each source file may be listed
# with full pathname. RELATIVE may makes it easier to extract an executable name
# automatically.
# file( GLOB APP_SOURCES RELATIVE app/*.cxx )
cmake_minimum_required (VERSION 2.6)
PROJECT(burlinchen_cpp_primer_answer CXX)
file( GLOB APP_SOURCES *.cpp )
foreach( testsourcefile ${APP_SOURCES} )
    # I used a simple string replace, to cut off .cpp.
    string( REPLACE ".cpp" "" testname ${testsourcefile} )
    string( REPLACE "/Users/burlinchen/Projects/git-projects/my-Cpp-Primer/ch02/" "" testname2 ${testname} )
    add_executable( ${testname2} ${testsourcefile} )
    # Make sure YourLib is linked to each app
#    target_link_libraries( ${testname} YourLib )
endforeach( testsourcefile ${APP_SOURCES} )
