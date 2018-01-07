open Luxon;

Js.log(DateTime.local(~year=2017, ~month=5, ~day=15, ~hour=8, ~minute=30, ()));

let dateObj: DateTime.objectDate = {
  "year": 2017,
  "month": 10,
  "day": 2,
  "hour": 3,
  "minute": 1,
  "second": 0,
  "millisecond": 0
};

Js.log(DateTime.fromObject(dateObj) |> DateTime.toISODate());

Js.log(DateTime.fromObject(dateObj)##day);

Js.log(DateTime.dateTimeFull);

Js.log(
  DateTime.(
    local()
    |> setZone("America/New_York")
    |> minus(makeDurationArgs(~weeks=1, ()))
    |> endOf(`day)
    |> toISO()
  )
);