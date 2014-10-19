# 'Makefile'
MARKDOWN = pandoc --from markdown_github --standalone -c github.css # --to $(subst .,,$(suffix $@))
all: $(patsubst %.md,%.html,$(wildcard *.md)) Makefile

clean:
	 rm -f $(patsubst %.md,%.html,$(wildcard *.md))
	 rm -f *.bak *~

%.html: %.md *.css
	$(MARKDOWN) $< --output $@

