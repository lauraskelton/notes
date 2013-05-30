notes
=====

make repl, sort of
------------------

```Makefile
#run make '$(expression)' to see what make things the expression evaluates to from your rules
$$%:;@$(call true)$(info $(call or,$$$*))
```

make + cabal
------------

```Makefile
#run make T=target to trigger the build for target exe
O=dist/build
D=dist/setup-config
A=#

ifneq ($(strip $T),)
A=$O/$T/$T
endif

all:$A

$O/%:$(shell find . -not -path "*dist/build/*" -iname "*.hs") $D
	cabal build
	touch $@

clean:
	cabal clean

$D:$(wildcard *.cabal)
	cabal install --only-dependencies --enable-executable-profiling --enable-library-profiling
	cabal configure
	touch $@
```

.vimrc
------
```VimL
:syntax on
:set nowrapscan
:set autoindent
:set expandtab
:set tabstop=3
:set shiftwidth=3
:set ignorecase
:set smartcase
:set tags=./tags;
:set noswapfile
:map <tab> <C-w><C-w>
:set wildmode=longest,list,full
:set wildmenu
"sane highlights for vimdiff
highlight DiffAdd term=reverse cterm=bold ctermbg=green ctermfg=white
highlight DiffChange term=reverse cterm=bold ctermbg=cyan ctermfg=black
highlight DiffText term=reverse cterm=bold ctermbg=gray ctermfg=black
highlight DiffDelete term=reverse cterm=bold ctermbg=red ctermfg=black

"use tabs in linux kernel code
:au BufNewFile,BufRead /*kernel* set tabstop=8
:au BufNewFile,BufRead /*kernel* set shiftwidth=8
:au BufNewFile,BufRead /*kernel* set noexpandtab
:au BufNewFile,BufRead /*kernel* set tabstop=8
```
