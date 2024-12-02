# ft_printf

**ft_printf** est un projet de l'école 42 qui consiste à recoder la fonction `printf` de la bibliothèque standard C. Ce projet permet de découvrir les fonctions variadiques en C et de renforcer les compétences en structuration de code.

---

## 📝 Description du Projet

L'objectif principal est de recréer une version personnalisée de la fonction `printf`, nommée `ft_printf`, avec des fonctionnalités de conversion spécifiques. Le projet nécessite la gestion d'arguments variadiques et la production d'une bibliothèque compilée sous forme de `libftprintf.a`.

#### 🔑 Notions Clés

- Manipulation des arguments variadiques en C (`va_start`, `va_arg`, `va_copy`, `va_end`).
- Gestion de la mémoire dynamique (`malloc`, `free`).
- Écriture dans des flux via `write`.
- Respect des normes de codage imposées par l'école 42.
- Création d'une bibliothèque statique avec `ar`.

---

## 📋 Structure du Projet

### Partie Obligatoire

La fonction `ft_printf` doit prendre en charge les conversions suivantes :

- **%c** : Affiche un caractère unique.
- **%s** : Affiche une chaîne de caractères.
- **%p** : Affiche un pointeur en format hexadécimal.
- **%d, %i** : Affiche un entier signé en base 10.
- **%u** : Affiche un entier non signé en base 10.
- **%x** : Affiche un entier en base 16 (lettres minuscules).
- **%X** : Affiche un entier en base 16 (lettres majuscules).
- **%%** : Affiche un pourcentage.

---

## ⚙️ Instructions d'Utilisation

1. **Cloner le dépôt** :

   ```bash
   git clone https://github.com/0x2Anessie/42-ftPrintf.git
   ```
   ```bash
   cd 42-ftPrintf
   ```
2. **Tester le programme :**
   - Ouvrir le fichier ft_printf.c et utiliser le main mis en commentaire pour tester le programme.
  
3. **Lancer le programme :**
   ```bash
   make
   ```
   ```bash
   ./libftprintf
   ```

---

## 🛠️ Rendu

- Tous les fichiers sources (`.c`) et en-têtes (`.h`) doivent être placés à la racine du dépôt.
- Le `Makefile` doit inclure les règles suivantes :
  - `make` : Compile le projet et génère la bibliothèque `libftprintf.a`.
  - `make clean` : Supprime les fichiers objets.
  - `make fclean` : Supprime les fichiers objets et la bibliothèque.
  - `make re` : Recompile tout depuis le début.
- La norme de l'école 42 doit être strictement respectée.
- Aucun fichier ou fonction inutilisé ne doit être inclus dans le rendu.

---

## 📜 Licence

Ce projet est soumis aux règles de l'école 42.
