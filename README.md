# WASM

## Korištenje emscriptena za generiranje WASM-a

- emscripten (C/C++ to WASM compiler) je dostupan na https://emscripten.org/
- sve se instalira u mapu `emsdk`
- instaliraju se i primjeri koji se mogu naći u mapi `emsdk/fastcomp/emscripten/tests`
- da bi se moglo svugdje normalno koristiti naredbu za prevođenje `emcc` treba u mapi `emsdk` pokrenuti `source ./emsdk_env.sh`
- ako se prevođenje pokrene samo s `emcc ime.c` neće se stvoriti `.html` datoteka tako da treba prevoditi s `emcc ime.c -o ime.html`
- još bolje je ako se pripremi odgovarajući html-template: u tom slučaju se prevodi s `emcc ime.c -o ime.html --shell-file minimal.html`
- `shell_minimal.html` može se skinuti s https://github.com/emscripten-core/emscripten/blob/master/src/shell_minimal.html i po potrebi preraditi

## Primjeri

- [hello.c](./hello/hello.c) ispisuje "Hello, world!" u konzolu: [hello.html](https://ihip.github.io/WASM/hello/hello.html)
- [scanf.c](./scanf/scanf.c) ilustrira problem sa `scanf` naredbom za učitavanje: [scanf.html](https://ihip.github.io/WASM/scanf/scanf.html)
- intervencijom u `scanf.js` korigirao sam problem beskonačne petlje kod učitavanja: [scanf-hip.html](https://ihip.github.io/WASM/scanf/scanf.html) (promjene su komentirane s `HIPMOD`)
- [stolnjak.c](./stolnjak/stolnjak.c) je primjer iscrtavanja grafike u canvasu: [stolnjak.html](https://ihip.github.io/WASM/stolnjak/stolnjak.html) (`shell_minimal.html` preradio sam u [Hip_canvas_min.html](./stolnjak/Hip_canvas_min.html) - promjene su komentirane s `HIPMOD`)
