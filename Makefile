all: rapport.pdf

rapport.pdf: rapport.tex
	#pdflatex -shell-escape rapport.tex
	rm -f rapport.pdf
	xelatex -shell-escape rapport.tex

open: rapport.pdf
	@evince rapport.pdf >/dev/null 2>&1 &

.PHONY: rapport.pdf
