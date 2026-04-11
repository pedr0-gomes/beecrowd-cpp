# CLAUDE.md — beecrowd-cpp

## Stack e linguagem

- **Linguagem**: C++17
- **Compilador**: `g++` com flags `-std=c++17 -Wall -Wextra`
- **Build**: Sem sistema de build formal; cada arquivo é compilado independentemente
- **Template**: `#include <bits/stdc++.h>` (prático para competitive programming)

---

## Estrutura do projeto

```
beecrowd-cpp/
├── src/                  # Soluções dos problemas
│   └── NNNN_nome.cpp    # Padrão: ID_NomeCurto.cpp
├── bin/                  # Executáveis compilados (ignorados por .gitignore)
├── template.cpp         # Template padrão para novos problemas
├── Makefile             # Build system — make NNNN compila src/NNNN_*.cpp
├── WORKFLOW.md          # Guia passo a passo para novo exercício
├── CLAUDE.md            # Este arquivo
├── README.md            # Documentação do projeto
└── .gitignore          # Ignora binários, CLAUDE.md e IDEs
```

**Histórico**: Projeto migrou de organização por categoria (`Beginner/`, `Strings/`, etc.) para estrutura flat em `src/` com nomenclatura por ID. Build automatizado via Makefile.

---

## Convenções de código

1. **Includes e setup**:
   ```cpp
   #include <bits/stdc++.h>
   using namespace std;
   
   typedef long long ll;
   typedef vector<int> vi;
   
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   ```

2. **Estrutura típica**:
   - Comentário com ID, link e categoria do problema
   - Loop `while(--t)` para múltiplos casos de teste (quando aplicável)
   - Lambda custom para `sort()` com critérios específicos

3. **Compilação**: Comentário no topo com comando de build exato
   ```cpp
   // g++ -std=c++17 -Wall -Wextra 1252_sort-sort-sort.cpp -o output.exe
   ```

---

## Como compilar e testar

**Via Makefile** (recomendado):
```bash
make 1252           # Compila src/1252_*.cpp → bin/1252.exe
.\bin\1252.exe      # Executar no PowerShell/Windows
make clean          # Limpa todos os executáveis em bin/
```

**Via g++ direto** (alternativa):
```bash
g++ -std=c++17 -Wall -Wextra src/1252_sort-sort-sort.cpp -o bin/1252.exe
.\bin\1252.exe
```

**Testes**:
- Entrada/saída manual (sem testes automatizados)
- Beecrowd valida automaticamente quando enviado à plataforma
- Validar com os exemplos fornecidos no problema antes de enviar

---

## Contexto do domínio

**Beecrowd** é uma plataforma brasileira de problemas de programação competitiva. Este repositório é **prática pessoal de raciocínio algorítmico**.

**Categorias típicas**:
- Beginner: I/O, aritmética, condicionais
- Strings: Manipulação de strings
- Data Structures: Filas, pilhas, listas, árvores
- Graph: BFS, DFS, caminhos mínimos
- Paradigms: Programação dinâmica, Greedy, Backtracking
- Math: Teoria dos números, combinatória, geometria

---

## Fluxo de trabalho para novo exercício

**Ver [WORKFLOW.md](WORKFLOW.md) para guia completo.**

Resumo:
1. `Copy-Item template.cpp src/NNNN_nome.cpp`
2. Editar metadados (Problem, Link, Category)
3. Implementar solução
4. `make NNNN` → compilar
5. `.\bin\NNNN.exe` → testar
6. `git add src/NNNN_*.cpp && git commit -m "solve: NNNN — Nome"`
7. `git push origin main`

---

## Instruções para o assistente

### O que fazer
- Leia o código antes de sugerir mudanças
- Explique decisões algorítmicas
- Critique eficiência (complexidade) e corretude
- Sugira otimizações se relevante

### O que **não** fazer
- Não edite sem instrução explícita
- Não mude convenções (template, nomenclatura, includes)
- Não refatore código já funcional — algoritmo competitive precisa ser compacto e direto
- Não adicione documentação além do necessário (comentários de problema são suficientes)

### Padrão de resposta
- Analise, critique, sugira
- Aguarde direcionamento antes de editar

---

## Status atual

**Estrutura finalizada e funcional**:
- ✓ `Makefile`: Build automatizado via `make ID`
- ✓ `bin/.gitkeep`: Pasta versionada, executáveis ignorados
- ✓ `template.cpp`: Template padrão pronto para uso
- ✓ `src/1252_sort-sort-sort.cpp`: Primeira solução implementada e testada
- ✓ `WORKFLOW.md`: Guia passo a passo para novos exercícios
- ✓ Migração completa da estrutura por categorias para flat organization

**Próximo**: Adicionar novos problemas seguindo o fluxo em WORKFLOW.md
