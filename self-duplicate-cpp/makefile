
orig_md5:=$(shell md5sum selfdupl.cpp | cut -d ' ' -f1)

clean:
	rm -r out

prepare: clean
	mkdir out

out/selfdupl: prepare
	g++ -std=c++11 selfdupl.cpp -o out/selfdupl

build: out/selfdupl

test: out/selfdupl
	out/selfdupl > out/_generated.cpp
	#nnn= "$(shell pwd)"
	echo "$(orig_md5)  out/_generated.cpp" | md5sum -c

all: build test