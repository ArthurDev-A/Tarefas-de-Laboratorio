# Linhas para compilação e execução

## Compilação
```bash
make ALL
```
ou
```bash
mingw32-make ALL
```
(varia de acordo com a instalação local)

## Execução
```bash
./main
```
ou
```bash
./main exemplo.txt
```

## Limpar
usando rm
```bash
make clean
```
ou
usando del, geralmente Windows
```bash
mingw32-make clean_win
```
(a utilização de make ou mingw32-make depende da instalação local)

# Grafo de dependências

```mermaid
graph TD
    main --> main.o
    main --> cadeia.o
    main --> extenso.o

    main.o --> main.c
    main.o --> defines.h
    main.o --> extenso.h
    
    cadeia.o --> cadeia.c
    cadeia.o --> cadeia.h
    cadeia.o --> defines.h

    extenso.o --> extenso.h
    extenso.o --> cadeia.h
    extenso.o --> extenso.c
    extenso.o --> defines.h

    extenso.h --> defines.h
```
