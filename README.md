# C Programming in Linux

Based on this [link](https://www.youtube.com/playlist?list=PLypxmOPCOkHXbJhUgjRaV2pD9MJkIArhg)


## .vimrc

Following configuration for vim used:

filetype plugin indent on
syntax on

set backspace=indent,eol,start
set nu
set incsearch

map <F9> :w <CR> :!clear && gcc % <CR>
map <C-F9> :w <CR> :!clear && gcc % -o %< && ./%< <CR>
