(lang dune 3.12)

(using melange 0.1)

(source
 (github davidgomes/bs-luxon))

(license MIT)

(maintainers "David Gomez")

(authors "David Gomez")

(homepage https://github.com/davidgomes/bs-luxon)

(bug_reports https://github.com/davidgomes/bs-luxon/issues)

(package
 (name bs-luxon)
 (synopsis "Luxon Bindings for ReasonML and OCaml")
 (description "Luxon Bindings for ReasonML and OCaml")
 (depends
  dot-merlin-reader
  (melange
   (>= 2.0.0))
  (ocaml
   (>= 5.1.0))
  (reason
   (>= 3.10.0))
  ocaml-lsp-server ; change to (ocaml-lsp-server :with-dev-setup) when opam 2.2 releases
  ocamlformat ; with-dev-setup
  (melange-jest
   (>= 0.1.0))
  opam-check-npm-deps ; with-dev-setup
  ))

(generate_opam_files)
