notes
=====

counting args with CPP
----------------------

```C
/**
 * getting apis with fixed number of arguments to behave like they are variadic
 */

#define PASTE(a,b) PASTE_(a,b)
#define PASTE_(a,b) a##b
#define COUNT_ARGS(args...) COUNT_ARGS_(args,9,8,7,6,5,4,3,2,1,0)
#define COUNT_ARGS_(a,b,c,d,e,f,g,h,i,j,cnt,...) cnt

#define DO_1(a) do1(a)
#define DO_2(a,b) do2(a,b)
#define DO_V(args...)  PASTE(DO_,COUNT_ARGS(args))(args)
```

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
