
cd ../../..

cd src/tasks/401935-UnaryPostfixIncrementOperator

cd src/apps/401935-UnaryPostfixIncrementOperator

start .

code .

code . -r

dir

g++ --version

# -o flag means, compile as well as link.
g++ "-static" -o main.exe .\*.cpp

dir

.\main.exe

# Clean up to start again.
get-childitem -path . -file -recurse -include ('*.exe', '*.pdb', '*.ilk', '*.obj', '*.dll', '*.exp', '*.lib', '*.o') | Remove-Item

dir



