import compileall
compileall.compile_dir('/home/marko/research/VeloView-master/build/paraview/src/paraview-build/VTK/Wrapping/Python')
file = open('/home/marko/research/VeloView-master/build/paraview/src/paraview-build/VTK/Wrapping/Python/vtk_compile_complete', 'w')
file.write('Done')
