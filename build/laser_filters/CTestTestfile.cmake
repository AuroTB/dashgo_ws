# CMake generated Testfile for 
# Source directory: /home/eaibot/dashgo_ws/src/laser_filters
# Build directory: /home/eaibot/dashgo_ws/build/laser_filters
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_laser_filters_rostest_test_test_scan_filter_chain.launch "/home/eaibot/dashgo_ws/build/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/kinetic/share/catkin/cmake/test/run_tests.py" "/home/eaibot/dashgo_ws/build/test_results/laser_filters/rostest-test_test_scan_filter_chain.xml" "--return-code" "/opt/ros/kinetic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/eaibot/dashgo_ws/src/laser_filters --package=laser_filters --results-filename test_test_scan_filter_chain.xml --results-base-dir \"/home/eaibot/dashgo_ws/build/test_results\" /home/eaibot/dashgo_ws/src/laser_filters/test/test_scan_filter_chain.launch ")
add_test(_ctest_laser_filters_rostest_test_test_polygon_filter.launch "/home/eaibot/dashgo_ws/build/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/kinetic/share/catkin/cmake/test/run_tests.py" "/home/eaibot/dashgo_ws/build/test_results/laser_filters/rostest-test_test_polygon_filter.xml" "--return-code" "/opt/ros/kinetic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/eaibot/dashgo_ws/src/laser_filters --package=laser_filters --results-filename test_test_polygon_filter.xml --results-base-dir \"/home/eaibot/dashgo_ws/build/test_results\" /home/eaibot/dashgo_ws/src/laser_filters/test/test_polygon_filter.launch ")
add_test(_ctest_laser_filters_rostest_test_test_speckle_filter.launch "/home/eaibot/dashgo_ws/build/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/kinetic/share/catkin/cmake/test/run_tests.py" "/home/eaibot/dashgo_ws/build/test_results/laser_filters/rostest-test_test_speckle_filter.xml" "--return-code" "/opt/ros/kinetic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/eaibot/dashgo_ws/src/laser_filters --package=laser_filters --results-filename test_test_speckle_filter.xml --results-base-dir \"/home/eaibot/dashgo_ws/build/test_results\" /home/eaibot/dashgo_ws/src/laser_filters/test/test_speckle_filter.launch ")
add_test(_ctest_laser_filters_gtest_test_shadow_detector "/home/eaibot/dashgo_ws/build/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/kinetic/share/catkin/cmake/test/run_tests.py" "/home/eaibot/dashgo_ws/build/test_results/laser_filters/gtest-test_shadow_detector.xml" "--return-code" "/home/eaibot/dashgo_ws/devel/lib/laser_filters/test_shadow_detector --gtest_output=xml:/home/eaibot/dashgo_ws/build/test_results/laser_filters/gtest-test_shadow_detector.xml")
