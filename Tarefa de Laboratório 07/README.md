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

# Grafo de dependências

```mermaid
graph TD
    main --> main.o
    main --> cadeia.o

    main.o --> main.c
    main.o --> cadeia.h
    main.o --> defines.h
    
    cadeia.o --> cadeia.h
    cadeia.o --> cadeia.c
    cadeia.o --> defines.h
```
