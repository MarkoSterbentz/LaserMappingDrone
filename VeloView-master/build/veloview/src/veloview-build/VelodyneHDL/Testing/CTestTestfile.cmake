# CMake generated Testfile for 
# Source directory: /home/marko/research/VeloView-master/VelodyneHDL/Testing
# Build directory: /home/marko/research/VeloView-master/build/veloview/src/veloview-build/VelodyneHDL/Testing
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(TestReader1 "/home/marko/research/VeloView-master/build/veloview/src/veloview-build/bin/TestPositionReader" "/home/marko/research/VeloView-master/Testing/Data/monterey-first-100-packets.pcap" "299")
add_test(TestReaderMonterey "/home/marko/research/VeloView-master/build/veloview/src/veloview-build/bin/TestReader" "/home/marko/research/VeloView-master/Testing/Data/monterey-first-100-packets.pcap" "/home/marko/research/VeloView-master/share/HDL-32.xml" "/home/marko/research/VeloView-master/Testing/monterey.test")
add_test(TestReaderMontereyWithCrop "/home/marko/research/VeloView-master/build/veloview/src/veloview-build/bin/TestReader" "/home/marko/research/VeloView-master/Testing/Data/monterey-first-100-packets.pcap" "/home/marko/research/VeloView-master/share/HDL-32.xml" "/home/marko/research/VeloView-master/Testing/monterey-with-crop.test")
add_test(TestReaderDualReturn "/home/marko/research/VeloView-master/build/veloview/src/veloview-build/bin/TestReader" "/home/marko/research/VeloView-master/Testing/Data/dual-return-frames-5-to-15.pcap" "/home/marko/research/VeloView-master/share/HDL-32.xml" "/home/marko/research/VeloView-master/Testing/dual.test")
add_test(TestReaderVLP16 "/home/marko/research/VeloView-master/build/veloview/src/veloview-build/bin/TestReader" "/home/marko/research/VeloView-master/Testing/Data/vlp-16-test-90deg-1-50-frames.pcap" "/home/marko/research/VeloView-master/share/VLP-16.xml" "/home/marko/research/VeloView-master/Testing/vlp-16.test")
add_test(TestSensor "/home/marko/research/VeloView-master/build/veloview/src/veloview-build/bin/TestSensor" "/home/marko/research/VeloView-master/Testing/Data/monterey-first-100-packets.pcap" "/home/marko/research/VeloView-master/share/HDL-32.xml")
