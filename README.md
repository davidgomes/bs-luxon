# Luxon Bindings for ReasonML/Bucklescript

This repository contains in-progress Reason/Bucklescript bindings for [Luxon](https://github.com/moment/luxon).

## Example

This is an example from [Luxon's GitHub page](https://github.com/moment/luxon) written in Reason using bs-luxon:

```javascript
const { DateTime } = require("luxon");
DateTime.local().setZone('America/New_York').minus({ weeks: 1 }).endOf('day').toISO()
```

```ocaml
DateTime.(
  local()
  |> setZone("America/New_York")
  |> minus(`Duration(Duration.from(~weeks=1, ())))
  |> endOf(`day)
  |> toISO()
);
```

Look in the `example/` directory for an example of how to use the bindings. The tests contain a lot more examples.

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