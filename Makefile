CXX = clang++
CXXFLAGS = -std=c++20 -Wall -O2

SRCS = src/main.cc src/cache.cc src/tests.cc

HDRS = src/cache.hh src/tests.hh

OBJS = $(SRCS:.cc=.o)

EXEC = cache

all: $(EXEC)

%.o: %.cc $(HDRS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	rm -f $(OBJS) $(EXEC)