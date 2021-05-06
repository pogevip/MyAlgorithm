.PHONY: all bubble_sort clean

#隐含规则
# INCL=-I${HOME}/incl

.SUFFIXES: .cpp .c
.cpp.o:
	g++ -std=c++11 -c $<

bubble_sort:bubble_sort.o
	echo "开始编译"
	g++ -o bubble_sort bubble_sort.o
	rm -f bubble_sort.o
	echo "编译结束"
	echo "运行"
	./bubble_sort


# bubble_sort:bubble_sort.cpp
# 	echo "开始编译"
# 	g++ -std=c++11 -c bubble_sort.cpp
# 	g++ -o bubble_sort bubble_sort.o
# 	rm -f bubble_sort.o
# 	echo "编译结束"
# 	echo "运行"
# 	./bubble_sort
