import compileall
compileall.compile_dir('/home/marko/research/VeloView-master/build/veloview/src/veloview-build/lib/site-packages')
file = open('./compile_complete', 'w')
file.write('Done')
