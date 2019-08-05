# WASM
Primjeri korištenja emscriptena za generiranje WASM-a.

- da bi se moglo normalno koristiti `emcc` naredbu treba u mapi `emsdk` pokrenuti `source ./emsdk_env.sh`
- ako se prevođenje pokrene samo s `emcc ime.c` neće se stvoriti `.html` datoteka tako da treba prevoditi s `emcc ime.c -o ime.html`
- još bolje je ako se pripremi odgovarajući html-template: u tom slučaju se prevodi s `emcc ime.c -o ime.html --shell-file minimal.html`
- `shell_minimal.html` može se skinuti s (https://github.com/emscripten-core/emscripten/blob/master/src/shell_minimal.html) i po potrebi preraditi


