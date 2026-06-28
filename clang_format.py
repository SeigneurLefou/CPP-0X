# Utilisation de l'écriture de fichier brute pour éviter la dépendance à yaml
clang_format_config = """---
Language: Cpp
BasedOnStyle: LLVM

# Alignement vertical des variables
AlignConsecutiveDeclarations: Consecutive

# Espaces à l'intérieur des parenthèses
SpacesInParentheses: Custom
SpacesInParentheticalStatement:
  InIf: true
  InWhile: true
  InFor: true
  InSwitch: true
SpaceInEmptyParentheses: false

# Espaces spécifiques aux parenthèses de fonctions
SpaceBeforeParens: Custom
SpaceBeforeParensOptions:
  AfterControlStatements: true
  AfterFunctionDeclarationName: false
  AfterFunctionDefinitionName: false

# Placement des accolades (K&R)
BreakBeforeBraces: Attach

# Indentation
IndentWidth: 4
TabWidth: 4
UseTab: Never

# Conserver les sauts de lignes que vous mettez au début des blocs
MaxEmptyLinesToKeep: 2
KeepEmptyLinesAtStartOfBlocks: true
..."""

with open(".clang-format", "w") as f:
    f.write(clang_format_config)
