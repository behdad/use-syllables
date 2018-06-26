
all: main

main: \
	hb-ot-shape-complex-use-machine.hh \
	hb-ot-shape-complex-use-private.hh \
	hb-ot-shape-complex-use-table.cc \
	main.cc

%.hh: %.rl
	ragel -e -F1 -o "$@" "$^"
