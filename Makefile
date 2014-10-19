# 'Makefile'
MARKDOWN = pandoc --from markdown_github --standalone --to $(subst .,,$(suffix $@))
all: $(patsubst %.md,%.pdf,$(wildcard *.md)) $(patsubst %.md,%.html,$(wildcard *.md)) Makefile

clean:
	 rm -f $(patsubst %.md,%.html,$(wildcard *.md))
	 rm -f *.bak *~

%.html: %.md
	$(MARKDOWN) $< --output $@

%.pdf: %.md
	$(MARKDOWN) $< --output $@
