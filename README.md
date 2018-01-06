# Luxon Bindings for ReasonML/Bucklescript

This repository contains in-progress Reason/Bucklescript bindings for [Luxon](https://github.com/moment/luxon).

## Example

```ocaml
open Luxon;

Js.log(DateTime.local(~year=2017, ~month=5, ~day=15, ~hour=8, ~minute=30));

let dateObj: DateTime.objectDate = {
  "year": 2017,
  "month": 10,
  "day": 2,
  "hour": 3,
  "minute": 1,
  "second": 0,
  "millisecond": 0
};

Js.log(DateTime.fromObject(dateObj)##toISODate());

Js.log(DateTime.fromObject(dateObj)##day);

Js.log(DateTime.dateTimeFull);
```

Look in the `example/` directory for an example of how to use the bindings.

## Installation

1. Install the bindings using `npm install --save bs-luxon`
2. Add the bindings to `bsconfig.json`:

```json
{
  "bs-dependencies": [
      "bs-luxon"
  ]
}
```

## Build
```
npm run build
```

## Build + Watch

```
npm run start
```

## Current State & Todo

The API is still very complete and the bindings are not very "OCamly" yet. Use at your own risk.