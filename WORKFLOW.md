# Fluxo de Trabalho — Novo Exercício

Guia passo a passo para criar e resolver um novo problema do Beecrowd.

---

## 1️⃣ Copiar template para novo arquivo

```bash
# Substitua NNNN pelo ID do problema e 'Nome-Do-Problema' pelo nome curto
Copy-Item template.cpp src/NNNN_nome-do-problema.cpp
```

**Exemplo para problema 1001 (Extremely Basic)**:
```bash
Copy-Item template.cpp src/1001_extremely-basic.cpp
```

---

## 2️⃣ Editar metadados do arquivo

Abra o arquivo criado e preencha o cabeçalho:

```cpp
// Problem: [Nome do problema]
// Link:    https://judge.beecrowd.com/pt/problems/view/NNNN
// Category: [Categoria — ex: Iniciante, Strings, etc]

#include <bits/stdc++.h>
using namespace std;
```

**Importante**: Encontre a categoria correta no site do Beecrowd.

---

## 3️⃣ Resolver o problema

Implemente a solução dentro do `while(t--)` ou do loop apropriado.

**Checklist**:
- [ ] Leia a entrada corretamente
- [ ] Processe a lógica
- [ ] Saída exatamente como especificado
- [ ] Testes com os exemplos do problema
- [ ] Edge cases (valores limites, entrada vazia, etc)

---

## 4️⃣ Compilar e testar localmente

```bash
# Compilar usando o Makefile
make NNNN

# Executar o binário
.\bin\NNNN.exe
```

**Exemplo para problema 1001**:
```bash
make 1001
.\bin\1001.exe
```

Insira os dados de entrada dos exemplos e valide a saída.

---

## 5️⃣ Testar no Beecrowd (opcional)

Se quiser validar antes de commitar:
1. Abra https://judge.beecrowd.com/pt/problems/view/NNNN
2. Copie todo o conteúdo de `src/NNNN_*.cpp`
3. Cole no editor online do Beecrowd
4. Clique em "Enviar"
5. Se **Accepted**, vá para o passo 6

---

## 6️⃣ Commit do exercício

```bash
# Stage do arquivo novo
git add src/NNNN_*.cpp

# Commit com mensagem descritiva
git commit -m "solve: NNNN — Nome do problema"
```

**Exemplo**:
```bash
git add src/1001_extremely-basic.cpp
git commit -m "solve: 1001 — Extremely Basic"
```

---

## 7️⃣ Push para repositório remoto

```bash
git push origin main
```

---

## Template rápido (copie e cole)

Referência do que está em `template.cpp`:

```cpp
// Problem:
// Link:    https://judge.beecrowd.com/pt/problems/view/
// Category:

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) { // resolver
    }
    return 0;
}
```

---

## Atalho: Todos os passos de uma vez

```bash
# 1. Copiar
Copy-Item template.cpp src/NNNN_nome.cpp

# 2. Editar (abra em seu editor favorito)
# vim src/NNNN_nome.cpp

# 3. Compilar
make NNNN

# 4. Testar
.\bin\NNNN.exe

# 5. Commit
git add src/NNNN_*.cpp
git commit -m "solve: NNNN — Nome"

# 6. Push
git push origin main
```

---

## Limpeza (opcional)

Se quiser remover todos os executáveis depois:

```bash
make clean
```

Isto apaga tudo em `bin/` mas mantém `bin/.gitkeep` para a pasta ser versionada.
