SRC=$(wildcard sources/*)

all: rapport.pdf presentation.pdf

rapport.pdf: rapport.tex
	#pdflatex -shell-escape rapport.tex
	rm -f rapport.pdf
	xelatex -shell-escape rapport.tex

presentation.pdf: presentation.tex $(SRC)
	pdflatex presentation.tex

open: rapport.pdf
	@evince rapport.pdf >/dev/null 2>&1 &

#.PHONY: rapport.pdf
.PHONY: presentation.pdf
